
// ****************************************************************************
//
//                          2D Transformation Matrix
//
// ****************************************************************************

#ifndef _MAT2D_H
#define _MAT2D_H

// transformation matrix
template <typename m2type> class cMat2D 
{
public:

	// transformation matrix
	m2type m11, m12, m13;
	m2type m21, m22, m23;

	// trasform X
	inline m2type GetX(m2type x, m2type y) const
	{
		return x*m11 + y*m12 + m13;
	}	

	// trasform Y
	inline m2type GetY(m2type x, m2type y) const
	{
		return x*m21 + y*m22 + m23;
	}	

	// set unit matrix
	inline void Unit()
	{
		m11 = 1; m12 = 0; m13 = 0;
		m21 = 0; m22 = 1; m23 = 0;
	}

	// copy matrix
	inline void Copy(const cMat2D* m)
	{
		m11 = m->m11; m12 = m->m12; m13 = m->m13;
		m21 = m->m21; m22 = m->m22; m23 = m->m23;
	}

	// translate in X direction
	//  1  0 tx   m11 m12 m13   m11 m12 m13+tx
	//  0  1  0 * m21 m22 m23 = m21 m22 m23
	//  0  0  1     0   0   1    0   0   1
	inline void TransX(m2type tx)
	{
		m13 += tx;
	}
	
	// translate in Y direction
	//  1  0  0   m11 m12 m13   m11 m12 m13
	//  0  1 ty * m21 m22 m23 = m21 m22 m23+ty
	//  0  0  1     0   0   1    0   0   1
	inline void TransY(m2type ty)
	{
		m23 += ty;
	}

	// scale in X direction
	//  sx 0  0   m11 m12 m13    m11*sx m12*sx m13*sx
	//  0  1  0 * m21 m22 m23  = m21    m22    m23
	//  0  0  1     0   0   1      0      0      1
	inline void ScaleX(m2type sx)
	{
		m11 *= sx;
		m12 *= sx;
		m13 *= sx;
	}	

	// scale in Y direction
	//  1  0  0   m11 m12 m13    m11    m12    m13
	//  0  sy 0 * m21 m22 m23  = m21*sy m22*sy m23*sy
	//  0  0  1     0   0   1      0      0      1
	inline void ScaleY(m2type sy)
	{
		m21 *= sy;
		m22 *= sy;
		m23 *= sy;
	}	
	
	// rotate, using sin and cos
	//  cosa -sina  0   m11 m12 m13   m11*cosa-m21*sina  m12*cosa-m22*sina  m13*cosa-m23*sina
	//  sina  cosa  0 * m21 m22 m23 = m11*sina+m21*cosa  m12*sina+m22*cosa  m13*sina+m23*cosa
	//   0      0   1     0   0   1           0                    0                 1
	inline void RotSC(m2type sina, m2type cosa)
	{
		m2type t1 = m11;
		m2type t2 = m21;
		m11 = t1*cosa - t2*sina;
		m21 = t1*sina + t2*cosa;

		t1 = m12;
		t2 = m22;
		m12 = t1*cosa - t2*sina;
		m22 = t1*sina + t2*cosa;

		t1 = m13;
		t2 = m23;
		m13 = t1*cosa - t2*sina;
		m23 = t1*sina + t2*cosa;
	}

	// rotate, using angle
	inline void Rot(m2type a)
	{
		this->RotSC(sin(a), cos(a));
	}

	// rotate by 90 deg (sina=1, cosa=0)
	inline void Rot90()
	{
		m2type t = m11;
		m11 = -m21;
		m21 = t;

		t = m12;
		m12 = -m22;
		m22 = t;

		t = m13;
		m13 = -m23;
		m23 = t;
	}

	// rotate by 180 deg (=flipX and flipY) (sina=0, cosa=-1)
	inline void Rot180()
	{
		m11 = -m11;
		m21 = -m21;
		m12 = -m12;
		m22 = -m22;
		m13 = -m13;
		m23 = -m23;
	}

	// rotate by 270 deg (sina=-1, cosa=0)
	inline void Rot270()
	{
		m2type t = m11;
		m11 = m21;
		m21 = -t;

		t = m12;
		m12 = m22;
		m22 = -t;

		t = m13;
		m13 = m23;
		m23 = -t;
	}

	// Shear in X direction
	//  1  dx 0   m11 m12 m13   m11+m21*dx m12+m22*dx m13+m23*dx
	//  0  1  0 * m21 m22 m23 = m21        m22        m23
	//  0  0  1     0   0   1     0          0          1
	inline void ShearX(m2type dx)
	{
		m11 += m21*dx;
		m12 += m22*dx;
		m13 += m23*dx;
	}

	// Shear in Y direction
	//  1  0  0   m11 m12 m13   m11        m12        m13
	//  dy 1  0 * m21 m22 m23 = m21+m11*dy m22+m12*dy m23+m13*dy
	//  0  0  1     0   0   1     0          0          1
	inline void ShearY(m2type dy)
	{
		m21 += m11*dy;
		m22 += m12*dy;
		m23 += m13*dy;
	}

	// flip in Y direction
	//  1  0  0   m11 m12 m13     m11   m12    m13
	//  0 -1  0 * m21 m22 m23  = -m21  -m22   -m23
	//  0  0  1     0   0   1      0     0      1
	inline void FlipY()
	{
		m21 = -m21;
		m22 = -m22;
		m23 = -m23;
	}	

	// flip in X direction
	//  -1 0  0   m11 m12 m13    -m11  -m12   -m13
	//  0  1  0 * m21 m22 m23  = m21    m22    m23
	//  0  0  1     0   0   1      0      0      1
	inline void FlipX()
	{
		m11 = -m11;
		m12 = -m12;
		m13 = -m13;
	}
};

#define TOFRACT(f) ((int)((f)*FRACTMUL + (((f) < 0) ? -0.5f : 0.5f)))

class cMat2Df : public cMat2D<float>
{
public:
	// prepare transformation matrix (for DrawImgMat function)
	//  ws ... source image width
	//  hs ... source image height
	//  x0 ... reference point X on source image
	//  y0 ... reference point Y on source image
	//  wd ... destination image width (negative = flip image in X direction)
	//  hd ... destination image height (negative = flip image in Y direction)
	//  shearx ... shear image in X direction
	//  sheary ... shear image in Y direction
	//  r ... rotate image (angle in radians)
	//  tx ... shift in X direction (ws = whole image width)
	//  ty ... shift in Y direction (hs = whole image height)
	void PrepDrawImg(int ws, int hs, int x0, int y0, int wd, int hd,
		float shearx, float sheary, float r, float tx, float ty);

	// export matrix to int array[6]
	void ExportInt(int* mat) const;
};

#endif // _MAT2D_H
