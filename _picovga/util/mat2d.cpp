
// ****************************************************************************
//
//                          2D Transformation Matrix
//
// ****************************************************************************

#include "include.h"

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
void cMat2Df::PrepDrawImg(int ws, int hs, int x0, int y0, int wd, int hd,
	float shearx, float sheary, float r, float tx, float ty)
{
	// initialize to base unit matrix
	this->Unit();

	// set reference point
	this->TransX(x0);
	this->TransY(y0);

	// rotate image around its center
	this->Rot(r);

	// shear after scalling and before rotation
	this->ShearX(shearx);
	this->ShearY(sheary);

	// scale image to destination size
	this->ScaleX((wd == 0) ? 0 : (1.0f/wd));
	this->ScaleY((hd == 0) ? 0 : (1.0f/hd));

	// resize from image size to unit size
	this->ScaleX(ws);
	this->ScaleY(hs);

	// shift
	this->TransX(tx);
	this->TransY(ty);
}

// export matrix to int array[6]
void cMat2Df::ExportInt(int* mat) const
{
	mat[0] = TOFRACT(m11);
	mat[1] = TOFRACT(m12);
	mat[2] = TOFRACT(m13);
	mat[3] = TOFRACT(m21);
	mat[4] = TOFRACT(m22);
	mat[5] = TOFRACT(m23);
}
