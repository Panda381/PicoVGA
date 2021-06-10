
// ****************************************************************************
//
//                               3D Vector
//
// ****************************************************************************

#ifndef _VECTOR_H
#define _VECTOR_H

// 3D vector
class V3
{
public:
	
	// vector coordinates
	real x, y, z;

	// constructor
	V3() {};
	V3(real xx, real yy, real zz) { x = xx; y = yy; z = zz; }

	// compare vectors
	inline bool Equ(const V3 &v) { return (x == v.x) && (y == v.y) && (z == v.z); }

	// set value
	void Zero() { x = y = z = 0; }
	void SetX() { x = 1; y = 0; z = 0; }
	void SetY() { x = 0; y = 1; z = 0; }
	void SetZ() { x = 0; y = 0; z = 1; }
	void Set(real xx, real yy, real zz) { x = xx; y = yy; z = zz; }
	void Set(const V3 &v) { x = v.x; y = v.y; z = v.z; }
	V3& operator = (const V3 &v) { x = v.x; y = v.y; z = v.z; return *this; }

	// set normalized vector (set length to 1)
	void SetNorm(const V3 &v)
	{
		real r = (real)sqrtf(v.x*v.x + v.y*v.y + v.z*v.z);
		if (r == 0)
		{
			x = y = 0;
			z = 1;
		}
		else
		{
			r = 1/r;
			x = v.x * r;
			y = v.y * r;
			z = v.z * r;
		}
	}

	// add two vectors
	void Add(real xx, real yy, real zz) { x += xx; y += yy; z += zz; }
	void Add(const V3 &v) { x += v.x; y += v.y; z += v.z; }
	V3 operator + (const V3 &v) const { return V3(x + v.x, y + v.y, z + v.z); }
	V3& operator += (const V3 &v) { x += v.x; y += v.y; z += v.z; return *this; }

	// subtract two vectors
	void Sub(real xx, real yy, real zz) { x -= xx; y -= yy; z -= zz; }
	void Sub(const V3 &v) { x -= v.x; y -= v.y; z -= v.z; }
	V3 operator - (const V3 &v) const { return V3(x - v.x, y - v.y, z - v.z); }
	V3& operator -= (const V3 &v) { x -= v.x; y -= v.y; z -= v.z; return *this; }

	// unary negation, turn vector into inverse direction
	void Inv() { x = -x; y = -y; z = -z; }
	V3 operator - () const { return V3(-x, -y, -z); }

	// multiplication by scalar value
	void Mul(real k) { x *= k; y *= k; z *= k; }
	V3 operator * (const real &k) const { return V3(x*k, y*k, z*k); }
	V3& operator *= (const real &k) { x *= k; y *= k; z *= k; return *this; }

	// division
	void Div(real k) { k = 1/k; x *= k; y *= k; z *= k; }
	V3 operator / (real k) const { k = 1/k; return V3(x*k, y*k, z*k); }
	V3& operator /= (real k) { k = 1/k; x *= k; y *= k; z *= k; return *this; }

	// length of vector
	real Len2() const { return x*x + y*y + z*z; }
	real Len() const { return (real)sqrt(x*x + y*y + z*z); }

	// distance of two vectors
	real Dist2(const V3 &v) const
	{
		real dx = x - v.x;
		real dy = y - v.y;
		real dz = z - v.z;
		return dx*dx + dy*dy + dz*dz;
	}
	real Dist(const V3 &v) const { return (real)sqrt(Dist2(v)); }

	// normalize vector (set length to 1)
	void Norm()
	{
		real r = (real)sqrtf(x*x + y*y + z*z);
		if (r == 0)
			{ x = 0; y = 0; z = 1; }
		else
			{ r = 1/r; x *= r; y *= r; z *= r; }
	}

	// scalar (dot) product V1.V2 (result is cosinus of angle of two vectors * lengths of vectors)
	real Dot(const V3 &v) const { return x*v.x + y*v.y + z*v.z; }
	real Angle(const V3 &v)
	{
		real r = (real)sqrtf(Len2()*v.Len2());
		if (r == 0) return 0;
		return (real)acos((x*v.x + y*v.y + z*v.z)/r);
	}

	// vector (cross) product V1xV2, multiply two vectors and store result into this vector 
	// (result is perpendicular normal vector to this two vectors)
	void Mul(const V3 &v1, const V3 &v2)
	{
		real xx = v1.y * v2.z - v1.z * v2.y;
		real yy = v1.z * v2.x - v1.x * v2.z;
		real zz = v1.x * v2.y - v1.y * v2.x;
		x = xx;
		y = yy;
		z = zz;
	}
	V3 operator * (const V3 &v) const { return V3(y*v.z - z*v.y, z*v.x - x*v.z, x*v.y - y*v.x); }
};

#endif // _VECTOR_H
