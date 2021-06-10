
// ****************************************************************************
//
//                                 VGA utilities
//
// ****************************************************************************

#ifndef _VGA_UTIL_H
#define _VGA_UTIL_H

// convert image from 16-color to 8x8 attribute format
void Attr8Conv(u8* dst, u8* attr, const u8* src, int w, int h, const u8* pal);

// convert image from 4-color to 2-plane format (width must be multiply of 8)
void Plane2Conv(u8* plane0, u8* plane1, const u8* src, int w, int h);

// invert image
void ImgInvert(u8* dst, int num);

// decode unsigned number into ASCIIZ text buffer (returns number of digits)
int DecUNum(char* buf, u32 num);

// decode signed number into ASCIIZ text buffer (returns number of digits)
int DecNum(char* buf, s32 num);

// prepare image with white key transparency (copy and increment pixels)
void CopyWhiteImg(u8* dst, const u8* src, int num);

#endif // _VGA_UTIL_H
