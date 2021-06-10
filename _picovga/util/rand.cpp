
// ****************************************************************************
//
//                             Random number generator
//
// ****************************************************************************

#include "include.h"

// global random generator
cRandom Rand;

// global Gaussian random float number generator
cGaussFRandom GaussFRand;

// global Gaussian random double number generator
cGaussDRandom GaussDRand;

// ============================================================================
//                   Set random seed from ROSC counter
// ============================================================================

void cRandom::InitSeed()
{
	int i;
	for (i = 64; i > 0; i--) m_Seed = (m_Seed << 1) | (rosc_hw->randombit & 1);
	i = (this->U8() & 0x1f) + 5;
	for (; i > 0; i--) this->Shift();
}

// ============================================================================
//            generate random number in full range of BYTE
// ============================================================================

u8 cRandom::U8()
{
	this->Shift();
	return (u8)(m_Seed >> (64-8));
}

// ============================================================================
//              generate random number in full range of WORD
// ============================================================================

u16 cRandom::U16()
{
	this->Shift();
	return (u16)(m_Seed >> (64-16));
}

// ============================================================================
//            generate random number in full range of DWORD
// ============================================================================

u32 cRandom::U32()
{
	this->Shift();
	return (u32)(m_Seed >> (64-32));
}

// ============================================================================
//              generate random number in full range of QWORD
// ============================================================================

u64 cRandom::U64()
{
	this->Shift();
	u32 k = m_Seed >> 32;
	this->Shift();
	return ((u64)k << 32) | (m_Seed >> 32);
}

// ============================================================================
//     generate float random number in range 0 (including) to 1 (excluding)
// ============================================================================

float cRandom::Float()
{
	this->Shift();
	return (float)(m_Seed >> (64-24))*(1.0f/0x1000000);
}

// ============================================================================
//    generate double random number in range 0 (including) to 1 (excluding)
// ============================================================================

double cRandom::Double()
{
	this->Shift();
	return (double)(m_Seed >> (64-52))*(1.0/0x10000000000000ULL);
}

// ============================================================================
//         generate BYTE random number in range 0 to MAX (including)
// ============================================================================

u8 cRandom::U8Max(u8 max)
{
	u8 res;
	u8 mask;

	// zero maximal value
	if (max == 0) return 0;

	// prepare mask
	res = 0xff;
	do {
		mask = res;
		res >>= 1;
	} while (res >= max);

	// generate random number
	do {
		res = this->U8() & mask;
	} while (res > max);

	return res;
}

// ============================================================================
//         generate WORD random number in range 0 to MAX (including)
// ============================================================================

u16 cRandom::U16Max(u16 max)
{
	u16 res;
	u16 mask;

	// zero maximal value
	if (max == 0) return 0;

	// prepare mask
	res = 0xffff;
	do {
		mask = res;
		res >>= 1;
	} while (res >= max);

	// generate random number
	do {
		res = this->U16() & mask;
	} while (res > max);

	return res;
}

// ============================================================================
//         generate DWORD random number in range 0 to MAX (including)
// ============================================================================

u32 cRandom::U32Max(u32 max)
{
	u32 res;
	u32 mask;

	// zero maximal value
	if (max == 0) return 0;

	// prepare mask
	res = 0xffffffff;
	do {
		mask = res;
		res >>= 1;
	} while (res >= max);

	// generate random number
	do {
		res = this->U32() & mask;
	} while (res > max);

	return res;
}

// ============================================================================
//        generate QWORD random number in range 0 to MAX (including)
// ============================================================================

u64 cRandom::U64Max(u64 max)
{
	u64 res;
	u64 mask;

	// DWORD value
	if (max <= 0xffffffff) return this->U32Max(max);

	// prepare mask
	res = 0xffffffffffffffffULL;
	do {
		mask = res;
		res >>= 1;
	} while (res >= max);

	// generate random number
	do {
		res = this->U64() & mask;
	} while (res > max);

	return res;
}

// ============================================================================
//  generate CHAR random number in range 0 to MAX (including, can be negative)
// ============================================================================

s8 cRandom::S8Max(s8 max)
{
	if (max >= 0)
		return (s8)this->U8Max((u8)max);
	else
		return -(s8)this->U8Max((u8)-max);
}

// ============================================================================
// generate SHORT random number in range 0 to MAX (including, can be negative)
// ============================================================================

s16 cRandom::S16Max(s16 max)
{
	if (max >= 0)
		return (s16)this->U16Max((u16)max);
	else
		return -(s16)this->U16Max((u16)-max);
}

// ============================================================================
//  generate LONG random number in range 0 to MAX (including, can be negative)
// ============================================================================

s32 cRandom::S32Max(s32 max)
{
	if (max >= 0)
		return (s32)this->U32Max((u32)max);
	else
		return -(s32)this->U32Max((u32)-max);
}

// ============================================================================
// generate INT64 random number in range 0 to MAX (including, can be negative)
// ============================================================================

s64 cRandom::S64Max(s64 max)
{
	if (max >= 0)
		return (s64)this->U64Max((u64)max);
	else
		return -(s64)this->U64Max((u64)-max);
}

// ============================================================================
//   generate float random number in range 0 (including) to MAX (excluding)
// ============================================================================

float cRandom::FloatMax(float max) { return this->Float() * max; }

// ============================================================================
//   generate double random number in range 0 (including) to MAX (excluding)
// ============================================================================

double cRandom::DoubleMax(double max) { return this->Double() * max; }


// ============================================================================
//        generate random number in range MIN to MAX (including)
// ============================================================================
// If MIN > MAX, then number is generated out of interval.

u8 cRandom::U8MinMax(u8 min, u8 max)
{
	return this->U8Max(max - min) + min;
}

u16 cRandom::U16MinMax(u16 min, u16 max)
{
	return this->U16Max(max - min) + min;
}

u32 cRandom::U32MinMax(u32 min, u32 max)
{
	return this->U32Max(max - min) + min;
}

u64 cRandom::U64MinMax(u64 min, u64 max)
{
	return this->U64Max(max - min) + min;
}

s8 cRandom::S8MinMax(s8 min, s8 max)
{
	return (s8)this->U8Max(max - min) + min;
}

s16 cRandom::S16MinMax(s16 min, s16 max)
{
	return (s16)this->U16Max(max - min) + min;
}

s32 cRandom::S32MinMax(s32 min, s32 max)
{
	return (s32)this->U32Max(max - min) + min;
}

s64 cRandom::S64MinMax(s64 min, s64 max)
{
	return (s64)this->U64Max(max - min) + min;
}

float cRandom::FloatMinMax(float min, float max)
{
	return this->FloatMax(max - min) + min;
}

double cRandom::DoubleMinMax(double min, double max)
{
	return this->DoubleMax(max - min) + min;
}

// ============================================================================
//      generate Gaussian random number (mean = center, sigma = width)
// ============================================================================

float cGaussFRandom::Gauss(float mean /* = 0 */, float sigma /* = 1 */)
{
	float x, y, r;
	Bool cache = m_CacheOK;
	m_CacheOK = !cache;
	if (cache)
		return m_Cache*sigma + mean;
	else
	{
		do {
			x = this->m_Rand.Float()*2 - 1;
			y = this->m_Rand.Float()*2 - 1;
			r = x*x + y*y;
		} while ((r == 0) || (r > 1));

		r = sqrtf(-2*logf(r)/r);
		m_Cache = y*r;
		return x*r*sigma + mean;
	}
}

double cGaussDRandom::Gauss(double mean /* = 0 */, double sigma /* = 1 */)
{
	double x, y, r;
	Bool cache = m_CacheOK;
	m_CacheOK = !cache;
	if (cache)
		return m_Cache*sigma + mean;
	else
	{
		do {
			x = this->m_Rand.Double()*2 - 1;
			y = this->m_Rand.Double()*2 - 1;
			r = x*x + y*y;
		} while ((r == 0) || (r > 1));

		r = sqrt(-2*log(r)/r);
		m_Cache = y*r;
		return x*r*sigma + mean;
	}
}

// ============================================================================
//             1D coordinate noise generator (output -1..+1)
// ============================================================================

float Noise1D(int x, int seed)
{
	int n = x + seed*1327;
	n = (n << 13) ^ n;
	return 1 - (float)(int)((n*(n*n*15731 + 789221) + 1376312589) & 0x7fffffff)/0x40000000;
}

// ============================================================================
//              2D coordinate noise generator (output -1..+1)
// ============================================================================

float Noise2D(int x, int y, int seed)
{
	int n = x + y*321 + seed*1327;
	n = (n << 13) ^ n;
	return 1 - (float)(int)((n*(n*n*15731 + 789221) + 1376312589) & 0x7fffffff)/0x40000000;
}

// ============================================================================
//              3D coordinate noise generator (output -1..+1)
// ============================================================================

float Noise3D(int x, int y, int z, int seed)
{
	int n = x + y*321 + z*51327 + seed*1327;
	n = (n << 13) ^ n;
	return 1 - (float)(int)((n*(n*n*15731 + 789221) + 1376312589) & 0x7fffffff)/0x40000000;
}

// ============================================================================
//            interpolated 1D noise (output -1..+1, scale = 1...)
// ============================================================================

float SmoothNoise1D(float x, int scale, int seed)
{
	// scale coordinates
	x *= scale;

	// remainder
	int x1 = (int)floor(x);
	x -= x1;

	// coordinates
	x1 = x1 % scale;
	if (x1 < 0) x1 += scale;
	int x0 = (x1 + scale - 1) % scale;
	int x2 = (x1 + 1) % scale;
	int x3 = (x2 + 1) % scale;

	// noise in points
	float k0 = Noise1D(x0, seed);
	float k1 = Noise1D(x1, seed);
	float k2 = Noise1D(x2, seed);
	float k3 = Noise1D(x3, seed);

	// cubic interpolate noise
	float p = (k3 - k2) - (k0 - k1);
	float q = (k0 - k1) - p;
	float r = k2 - k0;
	float s = k1;

	return (((p*x + q)*x + r)*x + s)*(float)0.92;
}

// ============================================================================
//          interpolated 2D noise (output -1..+1, scale = 1...)
// ============================================================================

float SmoothNoise2D(float x, float y, int scale, int seed)
{
	// scale coordinates
	x *= scale;
	y *= scale;

	// remainder
	int x1 = (int)floor(x);
	x -= x1;
	int y1 = (int)floor(y);
	y -= y1;

	// coordinates
	x1 = x1 % scale;
	if (x1 < 0) x1 += scale;
	int x2 = (x1 + 1) % scale;
	y1 = y1 % scale;
	if (y1 < 0) y1 += scale;
	int y2 = (y1 + 1) % scale;

	// noise in points
	float k11 = Noise2D(x1, y1, seed);
	float k21 = Noise2D(x2, y1, seed);
	float k12 = Noise2D(x1, y2, seed);
	float k22 = Noise2D(x2, y2, seed);

	// interpolate noise
	float k1 = k11*(1-x) + k21*x;
	float k2 = k12*(1-x) + k22*x;
	return k1*(1-y) + k2*y;
}
