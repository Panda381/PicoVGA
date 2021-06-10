
// ****************************************************************************
//
//                              Fixed point number
//
// ****************************************************************************
// Fixed point number is signed 32-bit number. Highest 7 bits are integer part,
// lower 25 bits are fractional part.

#ifndef _FIXED_H
#define _FIXED_H

// multiply two 64-bit integers with 64-bit result (signed or unsigned)
extern "C" s64 Mul64(s64 a, s64 b);

// multiply two unsigned 32-bit integers with 64-bit result
extern "C" u64 MulU32(u32 a, u32 b);

// multiply two signed 32-bit integers with 64-bit result
extern "C" s64 MulS32(s32 a, s32 b);

// square power of unsigned 32-bit integer with 64-bit result
extern "C" u64 SqrU32(u32 a);

// square power of signed 32-bit integer with 64-bit result
extern "C" u64 SqrS32(s32 a);

// fixed integer type
typedef s32 fixed;

// convert double number to fixed-point number
INLINE fixed DlbToFixed(double num)
{
	return (fixed)(num * (1 << 25));
}

// check if fixed point number is negative
INLINE Bool FixedIsNeg(fixed a)
{
	return a < 0;
}

// add two fixed point numbers
INLINE fixed FixedAdd(fixed a, fixed b)
{
	return a + b;
}

// subtract two fixed point numbers
INLINE fixed FixedSub(fixed a, fixed b)
{
	return a - b;
}

// check if number is greater
INLINE Bool FixedGr(fixed a, fixed b)
{
	return a > b;
}

// negate fixed point number
INLINE fixed FixedNeg(fixed a)
{
	return -a;
}

// multiply fixed point number by 2
INLINE fixed FixedMul2(fixed a)
{
	return a << 1;
}

// multiply two unsigned fixed point integers
extern "C" fixed FixedUMul(fixed a, fixed b);

// multiply two signed fixed point integers
extern "C" fixed FixedMul(fixed a, fixed b);

// square power of unsigned fixed point integer
extern "C" fixed FixedUSqr(fixed a);

// square power of signed fixed point integer
extern "C" fixed FixedSqr(fixed a);

// calculate Mandelbrot fixed integer
extern "C" void MandelFixed(u8* dst, fixed ci);

#endif // _FIXED_H
