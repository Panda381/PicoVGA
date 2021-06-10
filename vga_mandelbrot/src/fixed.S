
// ****************************************************************************
//
//                           Fixed point number
//
// ****************************************************************************

	.syntax unified
	.section .time_critical.FixedMul, "ax"
	.cpu cortex-m0plus
	.thumb			// use 16-bit instructions

.extern	Width			// width of screen
.extern	Steps			// max. number of steps
.extern Grad			// pointer to color gradient
.extern Shift			// number of shifts
.extern	SXi			// X increment
.extern X0i			// start X

// multiply two 64-bit integers with 64-bit result (signed or unsigned)
// extern "C" s64 Mul64(s64 a, s64 b);

// R1:R0 ... aHaL first number, output result
// R3:R2 ... bHbL second number

.thumb_func
.global Mul64
Mul64:

// 1st step, multiply high u32 segments:
//       aHaL
// x     bHbL
// ----------
//      |aLbL
//    aL|bH
//    aH|bL
//  aHbH|

// R0 ... aL (a1a0)
// R1 ... aH (a3a2)
// R2 ... bL (b1b0)
// R3 ... bH (b3b2)

	// aL*bH + aH*bL -> R12 (ignore high words)
	muls	r1,r2		// aH*bL -> R1 (destroy aH)
	muls	r3,r0		// bH*aL -> R3 (destroy bH)
	adds	r1,r3		// aH*bL + bH*aL
	mov	r12,r1		// aH*bL + bH*aL -> R12

// 2nd step, multiply u32 segments aL*bL with u64 result
//       a1a0
// x     b1b0
// ----------
//       a0b0
//     a0b1
//     a1b0
//   a1b1

// R0 ... a1a0
// R2 ... b1b0
// R12 ... result HIGH

	// a0*b1 -> R3
	lsrs	r1,r2,16	// b1 -> R1
	uxth	r3,r0		// a0 -> R3
	muls	r3,r1		// a0*b1 -> R3

// R0 ... a1a0
// R1 ... b1
// R2 ... b1b0
// R3 ... a0*b1
// R12 ... result HIGH

	// push R4
	push	{r4}

	// a1*b1 -> R1
	lsrs	r4,r0,16	// a1 -> R4
	muls	r1,r4		// a1*b1 -> R1

// R0 ... a1a0
// R1 ... a1*b1
// R2 ... b1b0
// R3 ... a0*b1
// R4 ... a1
// R12 ... result HIGH

	// a0*b0 -> R0
	uxth	r2,r2		// b0 -> R2
	uxth	r0,r0		// a0 -> R0
	muls	r0,r2		// a0*b0 -> R0

// R0 ... a0*b0
// R1 ... a1*b1
// R2 ... b0
// R3 ... a0*b1
// R4 ... a1
// R12 ... result HIGH

	// a1*b0 -> R2
	muls	r2,r4		// a1*b0 -> R2

// R0 ...     a0*b0 (result LOW)
// R1 ... a1*b1     (result HIGH)
// R2 ...   a1*b0
// R3 ...   a0*b1
// R4 ... a1
// R12 ... result HIGH

	// add a0*b1 to result
	lsls	r4,r3,16	// (a0*b1 << 16) (LOW) -> R4
	lsrs	r3,16		// (a0*b1 >> 16) (HIGH) -> R3
	adds	r0,r4		// a0*b0 + a0*b1(LOW) -> R0
	adcs	r1,r3		// a1*b1 + a0*b1(HIGH) -> R1
	pop	{r4}		// pop R4

// R0 ... result LOW
// R1 ... result HIGH
// R2 ...   a1*b0
// R12 ... result HIGH

	// add a1*b0 to result
	lsls	r3,r2,16	// (a1*b0 << 16) (LOW) -> R3
	lsrs	r2,16		// (a1*b0 >> 16) (HIGH) -> R2
	adds	r0,r3		// a0*b0 + a1*b0(LOW) -> R0
	adcs	r1,r2		// a1*b1 + a1*b0(HIGH) -> R1

	// add highest member
	add	r1,r12
	bx	lr




// multiply two unsigned 32-bit integers with 64-bit result
// extern "C" u64 MulU32(u32 a, u32 b);

// R0 ... first number 'a', output result LOW
// R1 ... second number 'b', output result HIGH

.thumb_func
.global MulU32
MulU32:

//       a1a0
// x     b1b0
// ----------
//       a0b0
//     a0b1
//     a1b0
//   a1b1

	// push R4
	mov	r12,r4

// R0 ... a1a0
// R1 ... b1b0
// R12 ... saved R4

	// a1*b0 -> R2, a1 -> R3
	lsrs	r3,r0,16	// a1 -> R3
	uxth	r2,r1		// b0 -> R2
	muls	r2,r3		// a1*b0 -> R2

// R0 ... a1a0
// R1 ... b1b0
// R2 ... a1*b0
// R3 ... a1
// R12 ... saved R4

	// a1*b1 -> R3, b1 -> R4
	lsrs	r4,r1,16	// b1 -> R4
	muls	r3,r4		// a1*b1 -> R3

// R0 ... a1a0
// R1 ... b1b0
// R2 ... a1*b0
// R3 ... a1*b1
// R4 ... b1
// R12 ... saved R4

	// a0*b1 -> R4, a0 -> R0
	uxth	r0,r0		// a0 -> R0
	muls	r4,r0		// a0*b1 -> R4

// R0 ... a0
// R1 ... b1b0
// R2 ... a1*b0
// R3 ... a1*b1
// R4 ... a0*b1
// R12 ... saved R4

	// a0*b0 -> R0
	uxth	r1,r1		// b0 -> R1
	muls	r0,r1		// a0*b0 -> R0

// R0 ...     a0*b0 (result LOW)
// R1 ...           (result HIGH)
// R2 ...   a1*b0
// R3 ... a1*b1
// R4 ...   a0*b1
// R12 ... saved R4

	// add a0*b1 to result
	lsrs	r1,r4,16	// (a0*b1 >> 16) (HIGH) -> R1
	lsls	r4,r4,16	// (a0*b1 << 16) (LOW) -> R4
	adds	r0,r4		// a0*b0 + a0*b1(LOW) -> R0
	adcs	r1,r3		// a1*b1 + a0*b1(HIGH) -> R1

// R0 ... result LOW
// R1 ... result HIGH
// R2 ...   a1*b0
// R12 ... saved R4

	// add a1*b0 to result
	lsls	r3,r2,16	// (a1*b0 << 16) (LOW) -> R3
	lsrs	r2,16		// (a1*b0 >> 16) (HIGH) -> R2
	adds	r0,r3		// a0*b0 + a1*b0(LOW) -> R0
	adcs	r1,r2		// a1*b1 + a1*b0(HIGH) -> R1

	// pop R4
	mov	r4,r12
	bx	lr


// multiply two signed 32-bit integers with 64-bit result
// extern "C" s64 MulS32(s32 a, s32 b);

// R0 ... first number 'a', output result LOW
// R1 ... second number 'b', output result HIGH

.thumb_func
.global MulS32
MulS32:

	// check if R0 is negative
	tst	r0,r0		// check R0
	bpl	2f		// R0 is not negative

	// negate R0
	negs	r0,r0		// negate R0

	// R0 is negative, check if R1 is negative
	tst	r1,r1		// check R1
	bpl	3f		// R1 is not negative, negate result

	// negate R1
	negs	r1,r1		// negate R1
	b	MulU32		// multiply numbers, result will be positive

	// R0 is not negative, check if R1 is negative
2:	tst	r1,r1		// check R1
	bpl	MulU32		// both number are positive, result will be positive

	// negate R1
	negs	r1,r1		// negate R1

	// multiply numbers
3:	push	{lr}
	bl	MulU32		// multiply numbers

	// negate result
	mvns	r1,r1		// complement result HIGH
	negs	r0,r0		// negate result LOW
	bne	4f		// result LOW is not zero
	adds	r1,#1		// carry to result HIGH
4:	pop	{pc}





// multiply two unsigned fixed point integers
// extern "C" fixed FixedUMul(fixed a, fixed b);

// R0 ... first number 'a', output result
// R1 ... second number 'b'

.thumb_func
.global FixedUMul
FixedUMul:

//       a1a0
// x     b1b0
// ----------
//       a0b0
//     a0b1
//     a1b0
//   a1b1

	// push R4
	mov	r12,r4

// R0 ... a1a0
// R1 ... b1b0
// R12 ... saved R4

	// a1*b0 -> R2, a1 -> R3
	lsrs	r3,r0,16	// a1 -> R3
	uxth	r2,r1		// b0 -> R2
	muls	r2,r3		// a1*b0 -> R2

// R0 ... a1a0
// R1 ... b1b0
// R2 ... a1*b0
// R3 ... a1
// R12 ... saved R4

	// a1*b1 -> R3, b1 -> R4
	lsrs	r4,r1,16	// b1 -> R4
	muls	r3,r4		// a1*b1 -> R3

// R0 ... a1a0
// R1 ... b1b0
// R2 ... a1*b0
// R3 ... a1*b1
// R4 ... b1
// R12 ... saved R4

	// a0*b1 -> R4, a0 -> R0
	uxth	r0,r0		// a0 -> R0
	muls	r4,r0		// a0*b1 -> R4

// R0 ... a0
// R1 ... b1b0
// R2 ... a1*b0
// R3 ... a1*b1
// R4 ... a0*b1
// R12 ... saved R4

	// a0*b0 -> R0
	uxth	r1,r1		// b0 -> R1
	muls	r0,r1		// a0*b0 -> R0

// R0 ...     a0*b0 (result LOW)
// R1 ...           (result HIGH)
// R2 ...   a1*b0
// R3 ... a1*b1
// R4 ...   a0*b1
// R12 ... saved R4

	// add a0*b1 to result
	lsrs	r1,r4,16	// (a0*b1 >> 16) (HIGH) -> R1
	lsls	r4,r4,16	// (a0*b1 << 16) (LOW) -> R4
	adds	r0,r4		// a0*b0 + a0*b1(LOW) -> R0
	adcs	r1,r3		// a1*b1 + a0*b1(HIGH) -> R1

// R0 ... result LOW
// R1 ... result HIGH
// R2 ...   a1*b0
// R12 ... saved R4

	// add a1*b0 to result
	lsls	r3,r2,16	// (a1*b0 << 16) (LOW) -> R3
	lsrs	r2,16		// (a1*b0 >> 16) (HIGH) -> R2
	adds	r0,r3		// a0*b0 + a1*b0(LOW) -> R0
	adcs	r1,r2		// a1*b1 + a1*b0(HIGH) -> R1

	// pop R4
	mov	r4,r12

	// shift result 25 bits right
	lsls	r1,r1,#7	// shift result HIGH 32-25=7 bits left
	lsrs	r0,r0,#25	// shift result LOW 25 bits right
	orrs	r0,r1		// compose results
	bx	lr


// multiply two signed fixed point integers
// extern "C" fixed FixedMul(fixed a, fixed b);

// R0 ... first number 'a', output result
// R1 ... second number 'b'

.thumb_func
.global FixedMul
FixedMul:

	// check if R0 is negative
	tst	r0,r0		// check R0
	bpl	2f		// R0 is not negative

	// negate R0
	negs	r0,r0		// negate R0

	// R0 is negative, check if R1 is negative
	tst	r1,r1		// check R1
	bpl	3f		// R1 is not negative, negate result

	// negate R1
	negs	r1,r1		// negate R1
	b	FixedUMul	// multiply numbers, result will be positive

	// R0 is not negative, check if R1 is negative
2:	tst	r1,r1		// check R1
	bpl	FixedUMul	// both number are positive, result will be positive

	// negate R1
	negs	r1,r1		// negate R1

	// multiply numbers
3:	push	{lr}
	bl	FixedUMul	// multiply numbers

	// negate result
	negs	r0,r0		// negate result LOW
	pop	{pc}



// square power of signed 32-bit integer with 64-bit result
// extern "C" u64 SqrS32(s32 a);

// R0 ... number 'a', output result LOW
// R1 ... output result HIGH

.thumb_func
.global SqrS32
SqrS32:
	// absolute value
	tst	r0,r0		// test input number
	bpl	SqrU32		// number is not negative
	negs	r0,r0		// negate number

// SqrU32 must follow


// square power of unsigned 32-bit integer with 64-bit result
// extern "C" u64 SqrU32(u32 a);

// R0 ... number 'a', output result LOW
// R1 ... output result HIGH

.thumb_func
.global SqrU32
SqrU32:

//       a1a0
// x     a1a0
// ----------
//       a0a0
//     a0a1
//     a0a1
//   a1a1

// R0 ... a1a0

	// a0*a1 -> R2, a1 -> R1
	lsrs	r1,r0,16	// a1 -> R1
	uxth	r2,r0		// a0 -> R2
	muls	r2,r1		// a0*a1 -> R2

// R0 ... a1a0
// R1 ... a1
// R2 ... a0*a1

	// a1*a1 -> R1
	muls	r1,r1		// a1*a1 -> R1

// R0 ... a1a0
// R1 ... a1*a1
// R2 ... a0*a1

	// a0*a0 -> R0
	uxth	r0,r0		// a0 -> R0
	muls	r0,r0		// a0*a0 -> R0

// R0 ...      a0*a0 (result LOW)
// R1 ... a1*a1      (result HIGH)
// R2 ...    a0*a1

	// add 2*a0*a1 to result
	lsrs	r3,r2,16	// (a0*a1 >> 16) (HIGH) -> R3
	lsls	r2,r2,16	// (a0*a1 << 16) (LOW) -> R2
	adds	r0,r2		// a0*a0 + a0*a1(LOW) -> R0
	adcs	r1,r3		// a1*a1 + a0*a1(HIGH) -> R1
	adds	r0,r2		// a0*a0 + a0*a1(LOW) -> R0
	adcs	r1,r3		// a1*a1 + a0*a1(HIGH) -> R1
	bx	lr




// square power of signed fixed point integer
// extern "C" fixed FixedSqr(fixed a);

// R0 ... number 'a', output result

.thumb_func
.global FixedSqr
FixedSqr:
	// absolute value
	tst	r0,r0		// test input number
	bpl	FixedUSqr	// number is not negative
	negs	r0,r0		// negate number

// FixedUSqr must follow


// square power of unsigned fixed point integer
// extern "C" fixed FixedUSqr(fixed a);

// R0 ... number 'a', output result

.thumb_func
.global FixedUSqr
FixedUSqr:

//       a1a0
// x     a1a0
// ----------
//       a0a0
//     a0a1
//     a0a1
//   a1a1

// R0 ... a1a0

	// a0*a1 -> R2, a1 -> R1
	lsrs	r1,r0,16	// a1 -> R1
	uxth	r2,r0		// a0 -> R2
	muls	r2,r1		// a0*a1 -> R2

// R0 ... a1a0
// R1 ... a1
// R2 ... a0*a1

	// a1*a1 -> R1
	muls	r1,r1		// a1*a1 -> R1

// R0 ... a1a0
// R1 ... a1*a1
// R2 ... a0*a1

	// a0*a0 -> R0
	uxth	r0,r0		// a0 -> R0
	muls	r0,r0		// a0*a0 -> R0

// R0 ...      a0*a0 (result LOW)
// R1 ... a1*a1      (result HIGH)
// R2 ...    a0*a1

	// add 2*a0*a1 to result
	lsrs	r3,r2,16	// (a0*a1 >> 16) (HIGH) -> R3
	lsls	r2,r2,16	// (a0*a1 << 16) (LOW) -> R2
	adds	r0,r2		// a0*a0 + a0*a1(LOW) -> R0
	adcs	r1,r3		// a1*a1 + a0*a1(HIGH) -> R1
	adds	r0,r2		// a0*a0 + a0*a1(LOW) -> R0
	adcs	r1,r3		// a1*a1 + a0*a1(HIGH) -> R1

	// shift result 25 bits right
	lsls	r1,r1,#7	// shift result HIGH 32-25=7 bits left
	lsrs	r0,r0,#25	// shift result LOW 25 bits right
	orrs	r0,r1		// compose results
	bx	lr




// calculate Mandelbrot fixed integer
//  default render time (X,Y=[0,0], scale=1, steps=64, sysclk=125MHz, res=264x200): 0.32 sec
// extern "C" void MandelFixed(u8* dst, fixed ci);

// Input registers:
//  R0 ... dst destination buffer
//  R1 ... ci

// Registers and variables
//  R0 ... (temporary), zi2
//  R1 ... (temporary)
//  R2 ... (temporary)
//  R3 ... (temporary)
//  R4 ... (temporary), zr2
//  R5 ... zr
//  R6 ... zi
//  R7 ... steps counter
//  R8 ... cr
//  R9 ... ci
//  R10 ... sx
//  R11 ... dst destination buffer
//  [SP+0] ... R8
//  [SP+4] ... R9
//  [SP+8] ... R10
//  [SP+12] ... R11
//  [SP+16] ... (R0) gradient
//  [SP+20] ... (R1) shift
//  [SP+24] ... (R2) number of steps
//  [SP+28] ... (R3) width counter
//  [SP+32] ... R4
//  [SP+36] ... R5
//  [SP+40] ... R6
//  [SP+44] ... R7
//  [SP+48] ... lr

.thumb_func
.global MandelFixed
MandelFixed:

// ---- prepare variables

	// push registers, 1st part
	push	{r0-r7,lr}

	// push registers, 2nd part
	mov	r4,r8
	mov	r5,r9
	mov	r6,r10
	mov	r7,r11
	push	{r4-r7}

	// save input parameters
	mov	r11,r0		// destination buffer -> R11
	mov	r9,r1		// ci -> R9

	// get number of steps
	ldr	r0,Steps_Addr	// get pointer to number of steps
	ldr	r0,[r0,#0]	// get number of steps
	str	r0,[sp,#24]	// save number of steps

	// get width counter
	ldr	r0,Width_Addr	// width of screen
	ldr	r0,[r0,#0]	// get width
	str	r0,[sp,#28]	// save width counter

	// get pointer to color gradient
	ldr	r0,Grad_Addr	// pointer to color gradient
	str	r0,[sp,#16]	// save pointer to color gradient

	// get number of shifts
	ldr	r0,Shift_Addr	// number of shifts
	ldr	r0,[r0,#0]	// get number of shifts
	str	r0,[sp,#20]	// save number of shifts

	// get X increment
	ldr	r0,SXi_Addr	// X increment
	ldr	r0,[r0,#0]	// get X increment
	mov	r10,r0		// SXi -> sx

	// get start X
	ldr	r0,X0i_Addr	// start X
	ldr	r0,[r0,#0]	// get start X
	mov	r8,r0		// X0i -> cr

// ---- start of outer loop (loop through pixels)
//  R8 ... cr
//  R9 ... ci
//  R10 ... sx
//  R11 ... dst destination buffer
//  [SP+16] ... (R0) gradient
//  [SP+20] ... (R1) shift
//  [SP+24] ... (R2) number of steps
//  [SP+28] ... (R3) width counter

3:
	// initialize zr and zi
	mov	r5,r8		// set cr -> zr
	mov	r6,r9		// set ci -> zi

	// initialice counter of inner loop
	ldr	r7,[sp,#24]	// get number of steps -> R7

// ---- start of inner loop
//  R0 ... (temporary), zi2
//  R1 ... (temporary)
//  R2 ... (temporary)
//  R3 ... (temporary)
//  R4 ... (temporary), zr2
//  R5 ... zr
//  R6 ... zi
//  R7 ... steps counter
//  R8 ... cr
//  R9 ... ci
//  R10 ... sx
//  R11 ... dst destination buffer
//  [SP+16] ... (R0) gradient
//  [SP+20] ... (R1) shift
//  [SP+24] ... (R2) number of steps
//  [SP+28] ... (R3) width counter

4:
	// square power of zr -> zr2 (R4)
	mov	r0,r5		// zr -> R0
	bl	FixedSqr	// square of zr -> R0
	mov	r4,r0		// save zr2

	// square power of zi -> zi2 (R0)
	mov	r0,r6		// zi -> R0
	bl	FixedSqr	// square of zi -> R0

	// check overflow if rz2 + zi2 >= 4.0
	adds	r1,r0,r4	// zr2 + zi2 -> R1
	lsrs	r1,#27		// shift result >> 27 bits, non zero if >= 4.0
	bne	6f		// overflow

	// subtract zr2 - zi2 -> R4
	subs	r4,r4,r0	// zr2 - zi2 -> R4

	// add zr2 - zi2 + cr -> R4 (= new zr)
	add	r4,r8		// zr2 - zi2 + cr -> R4

	// multiply zr*zi
	mov	r0,r5		// zr -> R0
	mov	r1,r6		// zi -> R1
	bl	FixedMul	// multiply zr * zi, result R0

	// multiply * 2 -> R6
	lsls	r6,r0,#1	// multiply 2*zr*zi -> R6

	// add ci
	add	r6,r9		// add 2*zr*zi + ci -> R6

	// result zr -> R5
	mov	r5,r4		// new zr -> R5

	// step counter
	subs	r7,#1		// step counter
	bne	4b		// next step

	// overflow, result color is black
	movs	r0,#0		// black color
	b	7f		// store color

	// break inner loop, result color is gradient
6:	ldr	r0,[sp,#24]	// get number of steps -> R0
	subs	r0,r7		// remaining number of steps -> R0
	ldr	r1,[sp,#20]	// number of shifts
	lsrs	r0,r1		// shift right -> R0

	// get gradient
	ldr	r2,[sp,#16]	// get pointer to gradient -> R2
	ldrb	r0,[r2,r0]	// get gradient color -> R1

	// store color
7:	mov	r1,r11		// destination buffer
	strb	r0,[r1]		// store black color

	// shift destination pointer
	movs	r0,#1
	add	r11,r0		// shift pointer

	// shift cr coordinate
	add	r8,r10		// add cr + sx

	// width counter
	ldr	r1,[sp,#28]	// get width counter
	subs	r1,#1		// decrement width counter
	str	r1,[sp,#28]	// save new value
	bne	3b		// continue outer loop

// ---- THE END

	// pop registers, 2nd part
	pop	{r4-r7}
	mov	r8,r4
	mov	r9,r5
	mov	r10,r6
	mov	r11,r7

	// pop registers, 1st part
	pop	{r0-r7,pc}

	.align 2
Steps_Addr:			// max. number of steps
	.word	Steps
Width_Addr:			// width of screen
	.word	Width
Grad_Addr:			// pointer to color gradient
	.word	Grad
Shift_Addr:			// number of shifts
	.word	Shift
SXi_Addr:			// X increment
	.word	SXi
X0i_Addr:			// start X
	.word	X0i
