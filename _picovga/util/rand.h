
// ****************************************************************************
//
//                             Random number generator
//
// ****************************************************************************

#ifndef _RAND_H
#define _RAND_H

// Random Generator
class cRandom
{
private:

	// random generator seed
	u64 m_Seed;

public:

	// shift random generator seed
	inline void Shift()
	{
		m_Seed = m_Seed*214013 + 2531011;
	}

	// get/set random generator seed
	inline u64 Seed() const { return m_Seed; }
	inline void SetSeed(u64 seed) { m_Seed = seed; }

	// Set random seed from ROSC counter
	void InitSeed();

	// generate integer random number in full range
	u8 U8();
	u16 U16();
	u32 U32();
	u64 U64();

	inline s8 S8() { return (s8)this->U8(); }
	inline s16 S16() { return (s16)this->U16(); }
	inline s32 S32() { return (s32)this->U32(); }
	inline s64 S64() { return (s64)this->U64(); }

	// generate float random number in range 0 (including) to 1 (excluding)
	float Float();

	// generate double random number in range 0 (including) to 1 (excluding)
	double Double();

	// generate random number in range 0 to MAX (including)
	u8 U8Max(u8 max);
	u16 U16Max(u16 max);
	u32 U32Max(u32 max);
	u64 U64Max(u64 max);

	s8 S8Max(s8 max);
	s16 S16Max(s16 max);
	s32 S32Max(s32 max);
	s64 S64Max(s64 max);

	// generate decimal random number in range 0 (including) to MAX (excluding)
	float FloatMax(float max);
	double DoubleMax(double max);

	// generate random number in range MIN to MAX (including)
	// If MIN > MAX, then number is generated out of interval.
	u8 U8MinMax(u8 min, u8 max);
	u16 U16MinMax(u16 min, u16 max);
	u32 U32MinMax(u32 min, u32 max);
	u64 U64MinMax(u64 min, u64 max);
	s8 S8MinMax(s8 min, s8 max);
	s16 S16MinMax(s16 min, s16 max);
	s32 S32MinMax(s32 min, s32 max);
	s64 S64MinMax(s64 min, s64 max);
	float FloatMinMax(float min, float max);
	double DoubleMinMax(double min, double max);
};

// Gaussian random float number generator
class cGaussFRandom
{
private:

	// linear random number generator
	cRandom m_Rand;

	// cached Gaussian number
	float m_Cache;
	Bool m_CacheOK;

public:

	// get/set random generator seed and initialize generator
	inline u64 Seed() const { return m_Rand.Seed(); }
	inline void SetSeed(u64 seed)
	{
		m_Rand.SetSeed(seed);
		m_CacheOK = False;
	}

	// generate Gaussian random number (mean = center, sigma = width)
	float Gauss(float mean = 0, float sigma = 1);
};

// Gaussian random double number generator
class cGaussDRandom
{
private:

	// linear random number generator
	cRandom m_Rand;

	// cached Gaussian number
	double m_Cache;
	Bool m_CacheOK;

public:

	// get/set random generator seed and initialize generator
	inline u64 Seed() const { return m_Rand.Seed(); }
	inline void SetSeed(u64 seed)
	{
		m_Rand.SetSeed(seed);
		m_CacheOK = False;
	}

	// generate Gaussian random number (mean = center, sigma = width)
	double Gauss(double mean = 0, double sigma = 1);
};

// global random generator
extern cRandom Rand;

// global Gaussian random float number generator
extern cGaussFRandom GaussFRand;

// global Gaussian random double number generator
extern cGaussDRandom GaussDRand;

// random generator seed
inline u64 RandSeed() { return Rand.Seed(); }
inline void RandSetSeed(u64 seed) { Rand.SetSeed(seed); }

// Set random seed from ROSC counter
inline void RandInitSeed() { Rand.InitSeed(); }

// generate integer random number in full range
inline u8 RandU8() { return Rand.U8(); }
inline u16 RandU16() { return Rand.U16(); }
inline u32 RandU32() { return Rand.U32(); }
inline u64 RandU64() { return Rand.U64(); }
inline s8 RandS8() { return Rand.S8(); }
inline s16 RandS16() { return Rand.S16(); }
inline s32 RandS32() { return Rand.S32(); }
inline s64 RandS64() { return Rand.S64(); }

// generate float random number in range 0 (including) to 1 (excluding)
inline float RandFloat() { return Rand.Float(); }

// generate double random number in range 0 (including) to 1 (excluding)
inline double RandDouble() { return Rand.Double(); }

// generate random number in range 0 to MAX (including)
inline u8 RandU8Max(u8 max) { return Rand.U8Max(max); }
inline u16 RandU16Max(u16 max) { return Rand.U16Max(max); }
inline u32 RandU32Max(u32 max) { return Rand.U32Max(max); }
inline u64 RandU64Max(u64 max) { return Rand.U64Max(max); }
inline s8 RandS8Max(s8 max) { return Rand.S8Max(max); }
inline s16 RandS16Max(s16 max) { return Rand.S16Max(max); }
inline s32 RandS32Max(s32 max) { return Rand.S32Max(max); }
inline s64 RandS64Max(s64 max) { return Rand.S64Max(max); }

// generate decimal random number in range 0 (including) to MAX (excluding)
inline float RandFloatMax(float max) { return Rand.FloatMax(max); }
inline double RandDoubleMax(double max) { return Rand.DoubleMax(max); }

// generate random number in range MIN to MAX (including)
// If MIN > MAX, then number is generated out of interval.
inline u8 RandU8MinMax(u8 min, u8 max) { return Rand.U8MinMax(min, max); }
inline u16 RandU16MinMax(u16 min, u16 max) { return Rand.U16MinMax(min, max); }
inline u32 RandU32MinMax(u32 min, u32 max) { return Rand.U32MinMax(min, max); }
inline u64 RandU64MinMax(u64 min, u64 max) { return Rand.U64MinMax(min, max); }
inline s8 RandS8MinMax(s8 min, s8 max) { return Rand.S8MinMax(min, max); }
inline s16 RandS16MinMax(s16 min, s16 max) { return Rand.S16MinMax(min, max); }
inline s32 RandS32MinMax(s32 min, s32 max) { return Rand.S32MinMax(min, max); }
inline s64 RandS64MinMax(s64 min, s64 max) { return Rand.S64MinMax(min, max); }

inline float RandFloatMinMax(float min, float max) { return Rand.FloatMinMax(min, max); }
inline double RandDoubleMinMax(double min, double max) { return Rand.DoubleMinMax(min, max); }

// generate Gaussian random number (mean = center, sigma = width)
inline float RandGaussF(float mean = 0, float sigma = 1) { return GaussFRand.Gauss(mean, sigma); }
inline double RandGaussD(double mean = 0, double sigma = 1) { return GaussDRand.Gauss(mean, sigma); }

// 1D coordinate noise generator (output -1..+1)
float Noise1D(int x, int seed);

// 2D coordinate noise generator (output -1..+1)
float Noise2D(int x, int y, int seed);

// 3D coordinate noise generator (output -1..+1)
float Noise3D(int x, int y, int z, int seed);

// interpolated 1D noise (output -1..+1, scale = 1...)
float SmoothNoise1D(float x, int scale, int seed);

// interpolated 2D noise (output -1..+1, scale = 1...)
float SmoothNoise2D(float x, float y, int scale, int seed);

#endif // _RAND_H
