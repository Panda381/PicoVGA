
// ****************************************************************************
//
//                                   Canvas
//
// ****************************************************************************

#include "include.h"

// Draw rectangle
//  col with CANVAS_ATTRIB8 format: bit 0..3 = draw color, bit 4 = draw color is background color
void DrawRect(sCanvas* canvas, int x, int y, int w, int h, u8 col)
{
	// limit x
	if (x < 0)
	{
		w += x;
		x = 0;
	}
	if (x + w > canvas->w) w = canvas->w - x;
	if (w <= 0) return;

	// limit y
	if (y < 0)
	{
		h += y;
		y = 0;
	}
	if (y + h > canvas->h) h = canvas->h - y;
	if (h <= 0) return;

	// check format
	switch(canvas->format)
	{
	// 8-bit pixels
	case CANVAS_8:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x + y*wb;
			wb -= w;
			int i;
			for (; h > 0; h--)
			{
				for (i = w; i > 0; i--) *d++ = col;
				d += wb;
			}
		}
		break;

	// 4-bit pixels
	case CANVAS_4:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x/2 + y*wb;
			u8* d0;
			u8 col2 = col << 4;
			u8 col3 = col2 | col;
			int i;
			for (; h > 0; h--)
			{
				d0 = d;
				i = w;
				if ((x & 1) != 0)
				{
					*d = (*d & 0xf0) | col;
					d++;
					i--;
				}

				for (; i > 1; i -= 2) *d++ = col3;

				if (i > 0) *d = (*d & 0x0f) | col2;
				d = d0 + wb;
			}
		}
		break;

	// 2-bit pixels
	case CANVAS_2:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x/4 + y*wb;
			u8* d0;
			col = (col << 6) | (col << 4) | (col << 2) | col;
			int i, m, dx;
			for (; h > 0; h--)
			{
				d0 = d;
				i = w;

				// store start unaligned 1..3 pixels
				dx = x & 3;
				if (dx != 0)
				{
					m = 0xc0 >> (dx*2); // mask of 2 color bits
					for (; i > 0; i--)
					{
						*d = (*d & ~m) | (col & m); // set 1 pixel
						dx++; // shift x position
						if (dx == 4) { i--; break; } // x is aligned
						m >>= 2; // shift mask
					}
					d++;
				}

				// store aligned 4 pixels
				for (; i > 3; i -= 4) *d++ = col;

				// store end unaligned 1..3 pixels
				m = 0xc0; // mask of 2 color bits
				for (; i > 0; i--)
				{
					*d = (*d & ~m) | (col & m); // set 1 pixel
					m >>= 2; // shift mask
				}
				d = d0 + wb;
			}
		}
		break;

	// 1-bit pixels
	case CANVAS_1:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x/8 + y*wb;
			u8* d0;
			col = (col<<7)|(col<<6)|(col<<5)|(col<<4)|(col<<3)|(col<<2)|(col<<1)|col;
			int i, m, dx;
			for (; h > 0; h--)
			{
				d0 = d;
				i = w;

				// store start unaligned 1..7 pixels
				dx = x & 7;
				if (dx != 0)
				{
					m = 0x80 >> dx; // mask of 1 color bit
					for (; i > 0; i--)
					{
						*d = (*d & ~m) | (col & m); // set 1 pixel
						dx++; // shift x position
						if (dx == 8) { i--; break; } // x is aligned
						m >>= 1; // shift mask
					}
					d++;
				}

				// store aligned 8 pixels
				for (; i > 7; i -= 8) *d++ = col;

				// store end unaligned 1..7 pixels
				m = 0x80; // mask of 1 color bit
				for (; i > 0; i--)
				{
					*d = (*d & ~m) | (col & m); // set 1 pixel
					m >>= 1; // shift mask
				}

				d = d0 + wb;
			}
		}
		break;

	// 4 colors on 2 planes
	case CANVAS_PLANE2:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x/8 + y*wb; // 1st plane
			u8* d2 = canvas->img2 + x/8 + y*wb; // 2nd plane
			u8* d0;
			u8* d02;
			u8 col2 = col >> 1;
			col2 = (col2<<7)|(col2<<6)|(col2<<5)|(col2<<4)|(col2<<3)|(col2<<2)|(col2<<1)|col2;
			col &= 1;
			col = (col<<7)|(col<<6)|(col<<5)|(col<<4)|(col<<3)|(col<<2)|(col<<1)|col;
			int i, m, dx;
			for (; h > 0; h--)
			{
				d0 = d;
				d02 = d2;
				i = w;

				// store start unaligned 1..7 pixels
				dx = x & 7;
				if (dx != 0)
				{
					m = 0x80 >> dx; // mask of 1 color bit
					for (; i > 0; i--)
					{
						*d = (*d & ~m) | (col & m); // set 1 pixel
						*d2 = (*d2 & ~m) | (col2 & m); // set 1 pixel
						dx++; // shift x position
						if (dx == 8) { i--; break; } // x is aligned
						m >>= 1; // shift mask
					}
					d++;
					d2++;
				}

				// store aligned 8 pixels
				for (; i > 7; i -= 8)
				{
					*d++ = col;
					*d2++ = col2;
				}

				// store end unaligned 1..7 pixels
				m = 0x80; // mask of 1 color bit
				for (; i > 0; i--)
				{
					*d = (*d & ~m) | (col & m); // set 1 pixel
					*d2 = (*d2 & ~m) | (col2 & m); // set 1 pixel
					m >>= 1; // shift mask
				}

				d = d0 + wb;
				d2 = d02 + wb;
			}
		}
		break;

	// 2x4 bit color attributes per 8x8 pixel sample
	case CANVAS_ATTRIB8:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x/8 + y*wb; // pixels
			u8* d0;
			u8* d2 = canvas->img2 + x/8 + (y/8)*wb; // attributes
			u8* d02;
			int i, m, dx;

			// draw color is foreground color
			if ((col & B4) == 0)
			{
				for (; h > 0; h--)
				{
					d0 = d;
					d02 = d2;
					i = w;

					// store start unaligned 1..7 pixels
					dx = x & 7;
					if (dx != 0)
					{
						m = 0x80 >> dx; // mask of 1 color bit
						for (; i > 0; i--)
						{
							*d = *d | m; // set 1 pixel
							dx++; // shift x position
							if (dx == 8) { i--; break; } // x is aligned
							m >>= 1; // shift mask
						}
						*d2 = (*d2 & 0xf0) | col;
						d++;
						d2++;
					}

					// store aligned 8 pixels
					for (; i > 7; i -= 8)
					{
						*d++ = 0xff;
						*d2 = (*d2 & 0xf0) | col;
						d2++;
					}

					// store end unaligned 1..7 pixels
					if (i > 0)
					{
						m = 0xff << (8-i); // mask
						*d = *d | m;
						*d2 = (*d2 & 0xf0) | col;
					}

					d = d0 + wb;
					d2 = d02;
					y++;
					if ((y & 7) == 0) d2 += wb;
				}
			}

			// draw color is background color
			else
			{
				col <<= 4;
				for (; h > 0; h--)
				{
					d0 = d;
					d02 = d2;
					i = w;

					// store start unaligned 1..7 pixels
					dx = x & 7;
					if (dx != 0)
					{
						m = 0x80 >> dx; // mask of 1 color bit
						for (; i > 0; i--)
						{
							*d = *d & ~m; // set 1 pixel
							dx++; // shift x position
							if (dx == 8) { i--; break; } // x is aligned
							m >>= 1; // shift mask
						}
						*d2 = (*d2 & 0x0f) | col;
						d++;
						d2++;
					}

					// store aligned 8 pixels
					for (; i > 7; i -= 8)
					{
						*d++ = 0;
						*d2 = (*d2 & 0x0f) | col;
						d2++;
					}

					// store end unaligned 1..7 pixels
					if (i > 0)
					{
						m = 0xff << (8-i); // mask
						*d = *d & ~m;
						*d2 = (*d2 & 0x0f) | col;
					}

					d = d0 + wb;
					d2 = d02;
					y++;
					if ((y & 7) == 0) d2 += wb;
				}
			}
		}
		break;
	}
}

// Draw frame
//  col with CANVAS_ATTRIB8 format: bit 0..3 = draw color, bit 4 = draw color is background color
void DrawFrame(sCanvas* canvas, int x, int y, int w, int h, u8 col)
{
	if ((w <= 0) || (h <= 0)) return;
	DrawRect(canvas, x, y, w-1, 1, col);
	DrawRect(canvas, x+w-1, y, 1, h-1, col);
	DrawRect(canvas, x+1, y+h-1, w-1, 1, col);
	DrawRect(canvas, x, y+1, 1, h-1, col);
}

// clear canvas (fill with black color)
void DrawClear(sCanvas* canvas)
{
	DrawRect(canvas, 0, 0, canvas->w, canvas->h, 0);
}

// Draw point
//  col with CANVAS_ATTRIB8 format: bit 0..3 = draw color, bit 4 = draw color is background color
void DrawPoint(sCanvas* canvas, int x, int y, u8 col)
{
	// check coordinates
	if (((u32)x >= (u32)canvas->w) || ((u32)y >= (u32)canvas->h)) return;

	// check format
	switch(canvas->format)
	{
	// 8-bit pixels
	case CANVAS_8:
		canvas->img[x + y*canvas->wb] = col;
		break;
	
	// 4-bit pixels
	case CANVAS_4:
		{
			u8* d = canvas->img + x/2 + y*canvas->wb;
			if ((x & 1) == 0)
					// 1st pixel
					*d = (*d & 0x0f) | (col << 4);
			else
					// 2nd pixel
					*d = (*d & 0xf0) | col;
		}
		break;

	// 2-bit pixels
	case CANVAS_2:
		{
			u8* d = canvas->img + x/4 + y*canvas->wb;
			switch (x & 3)
			{
			case 0:
				*d = (*d & 0x3f) | (col << 6);
				break;

			case 1:
				*d = (*d & 0xcf) | (col << 4);
				break;

			case 2:
				*d = (*d & 0xf3) | (col << 2);
				break;

			case 3:
				*d = (*d & 0xfc) | col;
				break;
			}
		}
		break;

	// 1-bit pixels
	case CANVAS_1:
		{
			u8* d = canvas->img + x/8 + y*canvas->wb;
			switch (x & 7)
			{
			case 0:
				*d = (*d & ~0x80) | (col << 7);
				break;

			case 1:
				*d = (*d & ~0x40) | (col << 6);
				break;

			case 2:
				*d = (*d & ~0x20) | (col << 5);
				break;

			case 3:
				*d = (*d & ~0x10) | (col << 4);
				break;

			case 4:
				*d = (*d & ~0x08) | (col << 3);
				break;

			case 5:
				*d = (*d & ~0x04) | (col << 2);
				break;

			case 6:
				*d = (*d & ~0x02) | (col << 1);
				break;

			case 7:
				*d = (*d & ~0x01) | col;
				break;
			}
		}
		break;

	// 4 colors on 2 planes
	case CANVAS_PLANE2:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x/8 + y*wb; // 1st plane
			u8* d2 = canvas->img2 + x/8 + y*wb; // 2nd plane
			u8 col2 = col >> 1;
			col &= 1;

			switch (x & 7)
			{
			case 0:
				*d = (*d & ~0x80) | (col << 7);
				*d2 = (*d2 & ~0x80) | (col2 << 7);
				break;

			case 1:
				*d = (*d & ~0x40) | (col << 6);
				*d2 = (*d2 & ~0x40) | (col2 << 6);
				break;

			case 2:
				*d = (*d & ~0x20) | (col << 5);
				*d2 = (*d2 & ~0x20) | (col2 << 5);
				break;

			case 3:
				*d = (*d & ~0x10) | (col << 4);
				*d2 = (*d2 & ~0x10) | (col2 << 4);
				break;

			case 4:
				*d = (*d & ~0x08) | (col << 3);
				*d2 = (*d2 & ~0x08) | (col2 << 3);
				break;

			case 5:
				*d = (*d & ~0x04) | (col << 2);
				*d2 = (*d2 & ~0x04) | (col2 << 2);
				break;

			case 6:
				*d = (*d & ~0x02) | (col << 1);
				*d2 = (*d2 & ~0x02) | (col2 << 1);
				break;

			case 7:
				*d = (*d & ~0x01) | col;
				*d2 = (*d2 & ~0x01) | col2;
				break;
			}
		}
		break;

	// 2x4 bit color attributes per 8x8 pixel sample
	case CANVAS_ATTRIB8:
		{
			int wb = canvas->wb;
			u8* d = canvas->img + x/8 + y*wb; // pixels
			u8* d2 = canvas->img2 + x/8 + (y/8)*wb; // attributes

			// draw color is foreground color
			if ((col & B4) == 0)
			{
				*d |= (0x80 >> (x & 7));
				*d2 = (*d2 & 0xf0) | col;
			}

			// draw color is background color
			else
			{
				*d &= ~(0x80 >> (x & 7));
				*d2 = (*d2 & 0x0f) | (col << 4);
			}
		}
		break;
	}
}

// Draw line
//  using Bresenham's line algorithm
//  col with CANVAS_ATTRIB8 format: bit 0..3 = draw color, bit 4 = draw color is background color
void DrawLine(sCanvas* canvas, int x1, int y1, int x2, int y2, u8 col)
{
	// difference of coordinates
	int dx = x2 - x1;
	int dy = y2 - y1;

	// increment X
	int sx = 1;
	if (dx < 0)
	{
		sx = -1;
		dx = -dx;
	}

	// increment Y
	int wb = canvas->wb;
	int sy = 1;
	int ddy = wb;
	if (dy < 0)
	{
		sy = -1;
		ddy = -wb;
		dy = -dy;
	}

	// 8-bit pixels use faster service
	if (canvas->format == CANVAS_8)
	{
		u32 w = canvas->w;
		u32 h = canvas->h;
		u8* d = canvas->img + x1 + y1*wb;

		// steeply in X direction, X is prefered as base
		if (dx > dy)
		{
			int m = 2*dy;
			int p = m - dx;
			dx = 2*dx;

			// slow mode, check coordinates
			if (((u32)x1 >= w) || ((u32)x2 >= w) || ((u32)y1 >= h) || ((u32)y2 >= h))
			{
				x2 += sx;
				for (; x1 != x2; x1 += sx)
				{
					if (((u32)x1 < w) && ((u32)y1 < h)) *d = col;
					if (p > 0)
					{
						d += ddy;
						y1 += sy;;
						p -= dx;
					}
					p += m;
					d += sx;
				}
			}

			// fast mode, do not check coordinates
			else
			{
				x2 += sx;
				for (; x1 != x2; x1 += sx)
				{
					*d = col;
					if (p > 0)
					{
						d += ddy;
						p -= dx;
					}
					p += m;
					d += sx;
				}
			}
		}

		// steeply in Y direction, Y is prefered as base
		else
		{
			int m = 2*dx;
			int p = m - dy;
			dy = 2*dy;

			// slow mode, check coordinates
			if (((u32)x1 >= w) || ((u32)x2 >= w) || ((u32)y1 >= h) || ((u32)y2 >= h))
			{
				y2 += sy;
				for (; y1 != y2; y1 += sy)
				{
					if (((u32)x1 < w) && ((u32)y1 < h)) *d = col;
					if (p > 0)
					{
						d += sx;
						x1 += sx;
						p -= dy;
					}
					p += m;
					d += ddy;
				}
			}

			// fast mode, do not check coordinates
			else
			{
				y2 += sy;
				for (; y1 != y2; y1 += sy)
				{
					*d = col;
					if (p > 0)
					{
						d += sx;
						p -= dy;
					}
					p += m;
					d += ddy;
				}
			}
		}
	}

	// other formats
	else
	{
		// steeply in X direction, X is prefered as base
		if (dx > dy)
		{
			int m = 2*dy;
			int p = m - dx;
			dx = 2*dx;

			x2 += sx;
			for (; x1 != x2; x1 += sx)
			{
				DrawPoint(canvas, x1, y1, col);
				if (p > 0)
				{
					y1 += sy;;
					p -= dx;
				}
				p += m;
			}
		}

		// steeply in Y direction, Y is prefered as base
		else
		{
			int m = 2*dx;
			int p = m - dy;
			dy = 2*dy;

			y2 += sy;
			for (; y1 != y2; y1 += sy)
			{
				DrawPoint(canvas, x1, y1, col);
				if (p > 0)
				{
					x1 += sx;
					p -= dy;
				}
				p += m;
			}
		}
	}
}

// Draw filled circle
//  x0, y0 ... coordinate of center
//  r ... radius
//  col ... color
//     col with CANVAS_ATTRIB8 format: bit 0..3 = draw color, bit 4 = draw color is background color
//  mask ... mask of used octants (0xff = 255 = draw whole circle)
//         . B2|B1 .
//       B3 .  |  . B0
//       ------o------
//       B4 .  |  . B7
//         . B5|B6 .
void DrawFillCircle(sCanvas* canvas, int x0, int y0, int r, u8 col, u8 mask /*=0xff*/)
{
	int x, y;
	if (r <= 0) return;
	int r2 = r*(r-1);
	r--;

	// full circle (faster drawing)
	if (mask == 0xff)
	{
		for (y = -r; y <= r; y++)
		{
			for (x = -r; x <= r; x++)
			{
				if ((x*x + y*y) <= r2) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
		return;
	}

	// octant 0
	if ((mask & B0) != 0)
	{
		for (y = -r; y <= 0; y++)
		{
			for (x = 0; x <= r; x++)
			{
				if (((x*x + y*y) <= r2) && (x >= -y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}

	// octant 1
	if ((mask & B1) != 0)
	{
		for (y = -r; y <= 0; y++)
		{
			for (x = 0; x <= r; x++)
			{
				if (((x*x + y*y) <= r2) && (x <= -y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}

	// octant 2
	if ((mask & B2) != 0)
	{
		for (y = -r; y <= 0; y++)
		{
			for (x = -r; x <= 0; x++)
			{
				if (((x*x + y*y) <= r2) && (-x <= -y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}

	// octant 3
	if ((mask & B3) != 0)
	{
		for (y = -r; y <= 0; y++)
		{
			for (x = -r; x <= 0; x++)
			{
				if (((x*x + y*y) <= r2) && (-x >= -y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}

	// octant 4
	if ((mask & B4) != 0)
	{
		for (y = 0; y <= r; y++)
		{
			for (x = -r; x <= 0; x++)
			{
				if (((x*x + y*y) <= r2) && (-x >= y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}

	// octant 5
	if ((mask & B5) != 0)
	{
		for (y = 0; y <= r; y++)
		{
			for (x = -r; x <= 0; x++)
			{
				if (((x*x + y*y) <= r2) && (-x <= y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}

	// octant 6
	if ((mask & B6) != 0)
	{
		for (y = 0; y <= r; y++)
		{
			for (x = 0; x <= r; x++)
			{
				if (((x*x + y*y) <= r2) && (x <= y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}

	// octant 7
	if ((mask & B7) != 0)
	{
		for (y = 0; y <= r; y++)
		{
			for (x = 0; x <= r; x++)
			{
				if (((x*x + y*y) <= r2) && (x >= y)) DrawPoint(canvas, x+x0, y+y0, col);
			}
		}
	}
}

// Draw circle
//  using Mid-Point Circle Algorithm
//  x0, y0 ... coordinate of center
//  r ... radius
//  col ... color
//     col with CANVAS_ATTRIB8 format: bit 0..3 = draw color, bit 4 = draw color is background color
//  mask ... mask of used octants (0xff = 255 = draw whole circle)
//         . B2|B1 .
//       B3 .  |  . B0
//       ------o------
//       B4 .  |  . B7
//         . B5|B6 .
void DrawCircle(sCanvas* canvas, int x0, int y0, int r, u8 col, u8 mask /*=0xff*/)
{
	int x, y;
	if (r <= 0) return;
	r--;

	x = 0;
	y = r;
	int p = 1 - r;

	while (x <= y)
	{
		if ((mask & B0) != 0) DrawPoint(canvas, x0+y, y0-x, col); // octant 0
		if ((mask & B1) != 0) DrawPoint(canvas, x0+x, y0-y, col); // octant 1
		if ((mask & B2) != 0) DrawPoint(canvas, x0-x, y0-y, col); // octant 2
		if ((mask & B3) != 0) DrawPoint(canvas, x0-y, y0-x, col); // octant 3
		if ((mask & B4) != 0) DrawPoint(canvas, x0-y, y0+x, col); // octant 4
		if ((mask & B5) != 0) DrawPoint(canvas, x0-x, y0+y, col); // octant 5
		if ((mask & B6) != 0) DrawPoint(canvas, x0+x, y0+y, col); // octant 6
		if ((mask & B7) != 0) DrawPoint(canvas, x0+y, y0+x, col); // octant 7

		x++;
		if (p > 0)
		{
			y--;
			p -= 2*y;
		}
		p += 2*x + 1;
	}
}

// Draw text (transparent background)
//   font = pointer to 1-bit font
void DrawText(sCanvas* canvas, const char* text, int x, int y, u8 col,
	const void* font, int fontheight /*=8*/, int scalex /*=1*/, int scaley /*=1*/)
{
	// invalid scale
	if ((scalex == 0) || (scaley == 0)) return;

	// prepare coordinate increment
	int sx = (scalex < 0) ? -1 : 1; // increment X coordinate
	int sy = (scaley < 0) ? -1 : 1; // increment Y coordinate
	int dx = sx * scalex; // number of sub-pixels per one pixel in X direction
	int dy = sy * scaley; // number of sub-lines per one line in Y direction

	int x0 = x;
	int y0 = y;
	u8 ch, ch0;
	int i, j, k, m;
	const u8* s;
	const u8* fnt = (const u8*)font;

	// loop through characters of text
	while ((ch = (u8)*text++) != 0) // until end of text
	{
		// prepare point to font sample
		s = &fnt[ch];

		// loop through lines of one character
		y = y0;
		for (i = fontheight; i > 0; i--)
		{
			// get one font sample
			ch0 = *s;
			s += 256;

			// loop through sub-lines of one character line
			for (m = dy; m > 0; m--)
			{
				ch = ch0;

				// loop through pixels of one character line
				x = x0;
				for (j = 8; j > 0; j--)
				{
					// pixel is set
					if ((ch & 0x80) != 0)
					{
						// loop through sub-pixels of one pixel
						for (k = dx; k > 0; k--)
						{
							DrawPoint(canvas, x, y, col);
							x += sx;
						}
					}
					else
						x += scalex;
					ch <<= 1;
				}
				y += sy;
			}
		}

		// shift to next character position
		x0 += scalex*8;
	}
}

// Draw text with background
//   font = pointer to 1-bit font
void DrawTextBg(sCanvas* canvas, const char* text, int x, int y, u8 col, u8 bgcol,
	const void* font, int fontheight /*=8*/, int scalex /*=1*/, int scaley /*=1*/)
{
	// invalid scale
	if ((scalex == 0) || (scaley == 0)) return;

	// prepare coordinate increment
	int sx = (scalex < 0) ? -1 : 1; // increment X coordinate
	int sy = (scaley < 0) ? -1 : 1; // increment Y coordinate
	int dx = sx * scalex; // number of sub-pixels per one pixel in X direction
	int dy = sy * scaley; // number of sub-lines per one line in Y direction

	int x0 = x;
	int y0 = y;
	u8 ch, ch0;
	int i, j, k, m;
	const u8* s;
	const u8* fnt = (const u8*)font;
	u8 c;

	// loop through characters of text
	while ((ch = (u8)*text++) != 0) // until end of text
	{
		// prepare point to font sample
		s = &fnt[ch];

		// loop through lines of one character
		y = y0;
		for (i = fontheight; i > 0; i--)
		{
			// get one font sample
			ch0 = *s;
			s += 256;

			// loop through sub-lines of one character line
			for (m = dy; m > 0; m--)
			{
				ch = ch0;

				// loop through pixels of one character line
				x = x0;
				for (j = 8; j > 0; j--)
				{
					// pixel is set
					c = ((ch & 0x80) != 0) ? col : bgcol;

					// loop through sub-pixels of one pixel
					for (k = dx; k > 0; k--)
					{
						DrawPoint(canvas, x, y, c);
						x += sx;
					}

					ch <<= 1;
				}
				y += sy;
			}
		}

		// shift to next character position
		x0 += scalex*8;
	}
}

// Draw image (source and destination must have same format)
void DrawImg(sCanvas* canvas, sCanvas* src, int xd, int yd, int xs, int ys, int w, int h)
{
	// must have same format
	if (canvas->format != src->format) return;

	// limit coordinates X
	if (xd < 0)
	{
		w += xd;
		xs -= xd;
		xd = 0;
	}

	if (xs < 0)
	{
		w += xs;
		xd -= xs;
		xs = 0;
	}

	if (xd + w > canvas->w) w = canvas->w - xd;
	if (xs + w > src->w) w = src->w - xs;
	if (w <= 0) return;

	// limit coordinates Y
	if (yd < 0)
	{
		h += yd;
		ys -= yd;
		yd = 0;
	}

	if (ys < 0)
	{
		h += ys;
		yd -= ys;
		ys = 0;
	}

	if (yd + h > canvas->h) h = canvas->h - yd;
	if (ys + h > src->h) h = src->h - ys;
	if (h <= 0) return;

	// check format
	switch(canvas->format)
	{
	// 8-bit pixels
	case CANVAS_8:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd + yd*wbd;
			u8* s = src->img + xs + ys*wbs;
			for (; h > 0; h--)
			{
				memcpy(d, s, w);
				d += wbd;
				s += wbs;
			}
		}
		break;

	// 4-bit pixels
	case CANVAS_4:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/2 + yd*wbd;
			u8* s = src->img + xs/2 + ys*wbs;
			u8* d0;
			u8* s0;
			u8 b, b2;
			int i, j;
			for (; h > 0; h--)
			{
				d0 = d;
				s0 = s;
				i = w;
				if ((xd & 1) == 0)
				{
					if ((xs & 1) == 0)
					{
						// xd=0, xs=0
						j = i/2;
						if (j > 0) memcpy(d, s, j);
						d += j;
						s += j;
						if ((i & 1) != 0) *d = (*d & 0x0f) | (*s & 0xf0);
					}
					else
					{
						// xd=0, xs=1
						b = *s;
						for (; i > 1; i -= 2)
						{
							b2 = (b << 4);
							s++;
							b = *s;
							*d = b2 | (b >> 4);
							d++;
						}
						if (i != 0) *d = (*d & 0x0f) | (b << 4);
					}
				}
				else
				{
					if ((xs & 1) == 0)
					{
						// xd=1, xs=0
						b = *s;
						*d = (*d & 0xf0) | (b >> 4);
						i--;
						d++;
						for (; i > 1; i -= 2)
						{
							b2 = (b << 4);
							s++;
							b = *s;
							*d = b2 | (b >> 4);
							d++;
						}
						if (i != 0) *d = (*d & 0x0f) | (b << 4);
					}
					else
					{
						// xd=1, xs=1
						*d = (*d & 0xf0) | (*s & 0x0f);
						i--;
						d++;
						s++;
						j = i / 2;
						if (j > 0) memcpy(d, s, j);
						d += j;
						s += j;
						if ((i & 1) != 0) *d = (*d & 0x0f) | (*s & 0xf0);
					}
				}
				d = d0 + wbd;
				s = s0 + wbs;
			}
		}
		break;

	// 2-bit pixels
	case CANVAS_2:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/4 + yd*wbd;
			u8* s = src->img + xs/4 + ys*wbs;
			u8* d0;
			u8* s0;
			u8 b, b2, ms, md;
			int i, rs, rd, xs2, xd2;
			
			// faster mode
			if (((xs & 0x03) == 0) && ((xd & 0x03) == 0) && ((w & 0x03) == 0))
			{
				w /= 4;
				for (; h > 0; h--)
				{
					memcpy(d, s, w);
					d += wbd;
					s += wbs;
				}
			}
			else
			{
				for (; h > 0; h--)
				{
					d0 = d;
					s0 = s;
					i = w;
					b = *s; // source sample
					s++;
					b2 = *d; // destination sample

					rs = 6 - (xs & 0x03)*2; // source shift 0..3 -> 6..0
					rd = (xd & 0x03)*2; // destination shift 0..3 -> 0..6

					for (; i > 0; i--)
					{
						// move source pixel to destination
						b2 = (b2 & ~(0xc0 >> rd)) | // clear old pixel
							(((b >> rs) & 0x03) // get new pixel to lower 2 bits
								<< (6 - rd));

						rs -= 2;
						if (rs < 0)
						{
							rs = 6;
							b = *s++;
						}

						rd += 2;
						if (rd >= 8)
						{
							rd = 0;
							*d++ = b2;
							b2 = *d;
						}
					}
					if (rd != 0) *d = b2;

					d = d0 + wbd;
					s = s0 + wbs;
				}
			}
		}
		break;

	// 1-bit pixels
	case CANVAS_1:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/8 + yd*wbd;
			u8* s = src->img + xs/8 + ys*wbs;
			u8* d0;
			u8* s0;
			u8 b, b2, ms, md;
			int i, rs, rd, xs2, xd2;
			
			// faster mode
			if (((xs & 0x07) == 0) && ((xd & 0x07) == 0) && ((w & 0x07) == 0))
			{
				w /= 8;
				for (; h > 0; h--)
				{
					memcpy(d, s, w);
					d += wbd;
					s += wbs;
				}
			}
			else
			{
				for (; h > 0; h--)
				{
					d0 = d;
					s0 = s;
					i = w;
					b = *s; // source sample
					s++;
					b2 = *d; // destination sample

					rs = 7 - (xs & 0x07); // source shift 0..7 -> 7..0
					rd = (xd & 0x07); // destination shift 0..7

					for (; i > 0; i--)
					{
						// move source pixel to destination
						b2 = (b2 & ~(0x80 >> rd)) | // clear old pixel
							(((b >> rs) & 0x01) // get new pixel to lower 2 bits
								<< (7 - rd));

						rs--;
						if (rs < 0)
						{
							rs = 7;
							b = *s++;
						}

						rd++;
						if (rd >= 8)
						{
							rd = 0;
							*d++ = b2;
							b2 = *d;
						}
					}
					if (rd != 0) *d = b2;

					d = d0 + wbd;
					s = s0 + wbs;
				}
			}
		}
		break;

	// 4 colors on 2 planes
	case CANVAS_PLANE2:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/8 + yd*wbd;
			u8* d2 = canvas->img2 + xd/8 + yd*wbd;
			u8* s = src->img + xs/8 + ys*wbs;
			u8* s2 = src->img2 + xs/8 + ys*wbs;
			u8* d0;
			u8* d02;
			u8* s0;
			u8* s02;
			u8 b, b2, bb, bb2, ms, md;
			int i, rs, rd, xs2, xd2;
			
			// faster mode
			if (((xs & 0x07) == 0) && ((xd & 0x07) == 0) && ((w & 0x07) == 0))
			{
				w /= 8;
				for (; h > 0; h--)
				{
					memcpy(d, s, w);
					memcpy(d2, s2, w);
					d += wbd;
					s += wbs;
					d2 += wbd;
					s2 += wbs;
				}
			}
			else
			{
				for (; h > 0; h--)
				{
					d0 = d;
					d02 = d2;
					s0 = s;
					s02 = s2;
					i = w;
					b = *s; // source sample
					bb = *s2;
					s++;
					s2++;
					b2 = *d; // destination sample
					bb2 = *d2;

					rs = 7 - (xs & 0x07); // source shift 0..7 -> 7..0
					rd = (xd & 0x07); // destination shift 0..7

					for (; i > 0; i--)
					{
						// move source pixel to destination
						b2 = (b2 & ~(0x80 >> rd)) | // clear old pixel
							(((b >> rs) & 0x01) // get new pixel to lower 2 bits
								<< (7 - rd));

						bb2 = (bb2 & ~(0x80 >> rd)) | // clear old pixel
							(((bb >> rs) & 0x01) // get new pixel to lower 2 bits
								<< (7 - rd));

						rs--;
						if (rs < 0)
						{
							rs = 7;
							b = *s++;
							bb = *s2++;
						}

						rd++;
						if (rd >= 8)
						{
							rd = 0;
							*d++ = b2;
							b2 = *d;
							*d2++ = bb2;
							bb2 = *d2;
						}
					}

					if (rd != 0)
					{
						*d = b2;
						*d2 = bb2;
					}

					d = d0 + wbd;
					s = s0 + wbs;
					d2 = d02 + wbd;
					s2 = s02 + wbs;
				}
			}
		}
		break;

	// 2x4 bit color attributes per 8x8 pixel sample
	case CANVAS_ATTRIB8:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/8 + yd*wbd;
			u8* d2 = canvas->img2 + xd/8 + (yd/8)*wbd;
			u8* s = src->img + xs/8 + ys*wbs;
			u8* s2 = src->img2 + xs/8 + (ys/8)*wbs;
			u8* d0;
			u8* s0;
			u8* d02;
			u8* s02;
			u8 b, b2, bb, ms, md;
			int i, rs, rd, xs2, xd2;
			
			// faster mode
			if (((xs & 0x07) == 0) && ((xd & 0x07) == 0) && ((w & 0x07) == 0))
			{
				w /= 8;
				i = True;
				for (; h > 0; h--)
				{
					memcpy(d, s, w);
					if (i) 
					{
						memcpy(d2, s2, w);
						i = False;
					}
					d += wbd;
					s += wbs;
					yd++;
					if ((yd & 0x07) == 0)
					{
						d2 += wbd;
						i = True;
					}
					ys++;
					if ((ys & 0x07) == 0)
					{
						s2 += wbs;
						i = True;
					}
				}
			}
			else
			{
				for (; h > 0; h--)
				{
					d0 = d;
					d02 = d2;
					s0 = s;
					s02 = s2;
					i = w;
					b = *s; // source sample
					s++;
					bb = *s2; // attributes
					s2++;
					b2 = *d; // destination sample

					rs = 7 - (xs & 0x07); // source shift 0..7 -> 7..0
					rd = (xd & 0x07); // destination shift 0..7

					for (; i > 0; i--)
					{
						// move source pixel to destination
						b2 = (b2 & ~(0x80 >> rd)) | // clear old pixel
							(((b >> rs) & 0x01) // get new pixel to lower 2 bits
								<< (7 - rd));

						rd++;
						if ((rd >= 8) || (i == 1))
						{
							rd = 0;
							*d++ = b2;
							b2 = *d;
							*d2++ = bb;
						}

						rs--;
						if (rs < 0)
						{
							rs = 7;
							b = *s++;
							bb = *s2++;
						}
					}

					d = d0 + wbd;
					s = s0 + wbs;
					d2 = d02;
					s2 = s02;
					yd++;
					if ((yd & 0x07) == 0) d2 += wbd;
					ys++;
					if ((ys & 0x07) == 0) s2 += wbs;
				}
			}
		}
		break;
	}
}

// Draw image with transparency (source and destination must have same format, col = transparency key color)
//  CANVAS_ATTRIB8 format replaced by DrawImg function
void DrawBlit(sCanvas* canvas, sCanvas* src, int xd, int yd, int xs, int ys, int w, int h, u8 col)
{
	// must have same format
	if (canvas->format != src->format) return;

	// CANVAS_ATTRIB8 format not supported
	if (canvas->format == CANVAS_ATTRIB8)
	{
		DrawImg(canvas, src, xd, yd, xs, ys, w, h);
		return;
	}

	// limit coordinates X
	if (xd < 0)
	{
		w += xd;
		xs -= xd;
		xd = 0;
	}

	if (xs < 0)
	{
		w += xs;
		xd -= xs;
		xs = 0;
	}

	if (xd + w > canvas->w) w = canvas->w - xd;
	if (xs + w > src->w) w = src->w - xs;
	if (w <= 0) return;

	// limit coordinates Y
	if (yd < 0)
	{
		h += yd;
		ys -= yd;
		yd = 0;
	}

	if (ys < 0)
	{
		h += ys;
		yd -= ys;
		ys = 0;
	}

	if (yd + h > canvas->h) h = canvas->h - yd;
	if (ys + h > src->h) h = src->h - ys;
	if (h <= 0) return;

	// check format
	switch(canvas->format)
	{
	// 8-bit pixels
	case CANVAS_8:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd + yd*wbd;
			u8* s = src->img + xs + ys*wbs;
			for (; h > 0; h--)
			{
				BlitKey(d, s, w, col);
				d += wbd;
				s += wbs;
			}
		}
		break;

	// 4-bit pixels
	case CANVAS_4:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/2 + yd*wbd;
			u8* s = src->img + xs/2 + ys*wbs;
			u8* d0;
			u8* s0;
			u8 b, b1, b2, ms, md;
			int i, rs, rd, xs2, xd2;
			
			for (; h > 0; h--)
			{
				d0 = d;
				s0 = s;
				i = w;
				b = *s; // source sample
				s++;
				b2 = *d; // destination sample

				rs = 4 - (xs & 0x01)*4; // source shift 0..4 -> 4..0
				rd = (xd & 0x01)*4; // destination shift 0..4 -> 0..4

				for (; i > 0; i--)
				{
					// move source pixel to destination
					b1 = (b >> rs) & 0x0f;
					if (b1 != col)
					{
						b2 = (b2 & ~(0xf0 >> rd)) | (b1 << (4 - rd));
					}

					rs -= 4;
					if (rs < 0)
					{
						rs = 4;
						b = *s++;
					}

					rd += 4;
					if (rd >= 8)
					{
						rd = 0;
						*d++ = b2;
						b2 = *d;
					}
				}
				if (rd != 0) *d = b2;

				d = d0 + wbd;
				s = s0 + wbs;
			}
		}
		break;

	// 2-bit pixels
	case CANVAS_2:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/4 + yd*wbd;
			u8* s = src->img + xs/4 + ys*wbs;
			u8* d0;
			u8* s0;
			u8 b, b1, b2, ms, md;
			int i, rs, rd, xs2, xd2;
			
			for (; h > 0; h--)
			{
				d0 = d;
				s0 = s;
				i = w;
				b = *s; // source sample
				s++;
				b2 = *d; // destination sample

				rs = 6 - (xs & 0x03)*2; // source shift 0..3 -> 6..0
				rd = (xd & 0x03)*2; // destination shift 0..3 -> 0..6

				for (; i > 0; i--)
				{
					// move source pixel to destination
					b1 = (b >> rs) & 0x03;
					if (b1 != col)
					{
						b2 = (b2 & ~(0xc0 >> rd)) | (b1 << (6 - rd));
					}

					rs -= 2;
					if (rs < 0)
					{
						rs = 6;
						b = *s++;
					}

					rd += 2;
					if (rd >= 8)
					{
						rd = 0;
						*d++ = b2;
						b2 = *d;
					}
				}
				if (rd != 0) *d = b2;

				d = d0 + wbd;
				s = s0 + wbs;
			}
		}
		break;

	// 1-bit pixels
	case CANVAS_1:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/8 + yd*wbd;
			u8* s = src->img + xs/8 + ys*wbs;
			u8* d0;
			u8* s0;
			u8 b, b1, b2, ms, md;
			int i, rs, rd, xs2, xd2;
			
			for (; h > 0; h--)
			{
				d0 = d;
				s0 = s;
				i = w;
				b = *s; // source sample
				s++;
				b2 = *d; // destination sample

				rs = 7 - (xs & 0x07); // source shift 0..7 -> 7..0
				rd = (xd & 0x07); // destination shift 0..7

				for (; i > 0; i--)
				{
					// move source pixel to destination
					b1 = (b >> rs) & 0x01;
					if (b1 != col)
					{
						b2 = (b2 & ~(0x80 >> rd)) | (b1 << (7 - rd));
					}

					rs--;
					if (rs < 0)
					{
						rs = 7;
						b = *s++;
					}

					rd++;
					if (rd >= 8)
					{
						rd = 0;
						*d++ = b2;
						b2 = *d;
					}
				}
				if (rd != 0) *d = b2;

				d = d0 + wbd;
				s = s0 + wbs;
			}
		}
		break;

	// 4 colors on 2 planes
	case CANVAS_PLANE2:
		{
			int wbd = canvas->wb;
			int wbs = src->wb;
			u8* d = canvas->img + xd/8 + yd*wbd;
			u8* d2 = canvas->img2 + xd/8 + yd*wbd;
			u8* s = src->img + xs/8 + ys*wbs;
			u8* s2 = src->img2 + xs/8 + ys*wbs;
			u8* d0;
			u8* d02;
			u8* s0;
			u8* s02;
			u8 b, b1, b12, b2, bb, bb2, ms, md;
			int i, rs, rd, xs2, xd2;
			
			for (; h > 0; h--)
			{
				d0 = d;
				d02 = d2;
				s0 = s;
				s02 = s2;
				i = w;
				b = *s; // source sample
				bb = *s2;
				s++;
				s2++;
				b2 = *d; // destination sample
				bb2 = *d2;

				rs = 7 - (xs & 0x07); // source shift 0..7 -> 7..0
				rd = (xd & 0x07); // destination shift 0..7

				for (; i > 0; i--)
				{
					// move source pixel to destination
					b1 = (b >> rs) & 0x01;
					b12 = (bb >> rs) & 0x01;
					if ((b1 | (b12<<1)) != col)
					{
						b2 = (b2 & ~(0x80 >> rd)) | (b1 << (7 - rd));
						bb2 = (bb2 & ~(0x80 >> rd)) | (b12 << (7 - rd));
					}

					rs--;
					if (rs < 0)
					{
						rs = 7;
						b = *s++;
						bb = *s2++;
					}

					rd++;
					if (rd >= 8)
					{
						rd = 0;
						*d++ = b2;
						b2 = *d;
						*d2++ = bb2;
						bb2 = *d2;
					}
				}

				if (rd != 0)
				{
					*d = b2;
					*d2 = bb2;
				}

				d = d0 + wbd;
				s = s0 + wbs;
				d2 = d02 + wbd;
				s2 = s02 + wbs;
			}
		}
		break;
	}
}

// draw 8-bit image with 2D transformation matrix
//  canvas ... destination canvas
//  src ... source canvas with image
//  x ... destination coordinate X
//  y ... destination coordinate Y
//  w ... destination width
//  h ... destination height
//  m ... transformation matrix (should be prepared using PrepDrawImg or PrepDrawPersp function)
//  mode ... draw mode DRAWIMG_*
//  color ... key or border color (DRAWIMG_PERSP mode: horizon offset)
// Note to wrap and perspective mode: Width and height of source image must be power of 2!
void DrawImgMat(sCanvas* canvas, const sCanvas* src, int x, int y, int w, int h,
	const cMat2Df* m, u8 mode, u8 color)
{
	// check 8-bit image format
	if ((canvas->format != CANVAS_8) || (src->format != CANVAS_8)) return;

	// limit x
	int x0 = -w/2; // start X coordinate
	if (x < 0)
	{
		w += x;
		x0 -= x;
		x = 0;
	}
	if (x + w > canvas->w) w = canvas->w - x;
	if (w <= 0) return;

	// limit y
	int h0 = h;
	int y0 = (mode == DRAWIMG_PERSP) ? (-h) : (-h/2); // start Y coordinate
	if (y < 0)
	{
		h += y;
		y0 -= y;
		y = 0;
	}
	if (y + h > canvas->h) h = canvas->h - y;
	if (h <= 0) return;

	// load transformation matrix and convert to integer fractional number
	int m11 = (int)(m->m11*FRACTMUL+0.5f);
	int m12 = (int)(m->m12*FRACTMUL+0.5f);
	int m13 = (int)(m->m13*FRACTMUL+0.5f);
	int m21 = (int)(m->m21*FRACTMUL+0.5f);
	int m22 = (int)(m->m22*FRACTMUL+0.5f);
	int m23 = (int)(m->m23*FRACTMUL+0.5f);

	// zero size image
	if ((m11 == 0) || (m22 == 0)) return;

	// prepare variables
	int wbs = src->wb; // source width bytes
	const u8* s = src->img; // source image
	int xy0m, yy0m; // temporary Y members
	u8* d = canvas->img + canvas->wb*y + x; // destination image
	int wbd = canvas->wb - w; // destination width bytes
	int i, x2, y2;

	// wrap image
	if (mode == DRAWIMG_WRAP)
	{

#if DRAW_HWINTER // 1=use hardware interpolator to draw images

		// prepare hardware interpolator
		interp_config cfg = interp_default_config();

		interp_config_set_add_raw(&cfg, true); // add raw lane base back to accumulator
		interp_config_set_shift(&cfg, FRACT); // shift fraction bits out
		int xbits = 0;
		while ((1<<xbits)<src->w) xbits++; // get number of bits of image width
		interp_config_set_mask(&cfg, 0, xbits-1); // set x mask (0..width)
		interp_set_config(interp0, 0, &cfg); // configure lane 0

		int ybits = 0;
		while ((1<<ybits)<src->h) ybits++; // get number of bits of image height
		interp_config_set_shift(&cfg, FRACT - xbits); // shift fraction bits out, to multiply * width
		interp_config_set_mask(&cfg, xbits, xbits+ybits-1); // set y mask, multiply * width
		interp_set_config(interp0, 1, &cfg); // configure lane 1

		interp0->base[2] = (u32)s; // image base

		for (; h > 0; h--)
		{
			xy0m = x0*m11 + y0*m12 + m13;
			yy0m = x0*m21 + y0*m22 + m23;

			interp0->accum[0] = xy0m;
			interp0->base[0] = m11;
			interp0->accum[1] = yy0m;
			interp0->base[1] = m21;

			for (i = w; i > 0; i--)
			{
				*d++ = *(u8*)interp0->pop[2];
			}
	
			y0++;
			d += wbd;
		}

#else

		// coordinate mask
		int xmask = src->w - 1;
		int ymask = src->h - 1;

		for (; h > 0; h--)
		{
			xy0m = x0*m11 + y0*m12 + m13;
			yy0m = x0*m21 + y0*m22 + m23;
		
			for (i = w; i > 0; i--)
			{
				x2 = (xy0m>>FRACT) & xmask;
				y2 = (yy0m>>FRACT) & ymask;
				*d++ = s[x2 + y2*wbs];
				xy0m += m11; // x0*m11
				yy0m += m21; // x0*m21
			}

			y0++;
			d += wbd;
		}

#endif

	}

	// no border
	else if (mode == DRAWIMG_NOBORDER)
	{
		// source image dimension
		u32 ww = src->w;
		u32 hh = src->h;

		for (; h > 0; h--)
		{
			xy0m = x0*m11 + y0*m12 + m13;
			yy0m = x0*m21 + y0*m22 + m23;

			for (i = w; i > 0; i--)
			{
				x2 = xy0m>>FRACT;
				y2 = yy0m>>FRACT;
				if (((u32)x2 < ww) && ((u32)y2 < hh)) *d = s[x2 + y2*wbs];
				d++;
				xy0m += m11; // x0*m11
				yy0m += m21; // x0*m21
			}
			y0++;
			d += wbd;
		}
	}

	// clamp image
	else if (mode == DRAWIMG_CLAMP)
	{
		// source image dimension
		u32 ww = src->w - 1;
		u32 hh = src->h - 1;

		for (; h > 0; h--)
		{
			xy0m = x0*m11 + y0*m12 + m13;
			yy0m = x0*m21 + y0*m22 + m23;
		
			for (i = w; i > 0; i--)
			{
				x2 = xy0m>>FRACT;
				y2 = yy0m>>FRACT;
				if (x2 < 0) x2 = 0;
				if (x2 > ww) x2 = ww;
				if (y2 < 0) y2 = 0;
				if (y2 > hh) y2 = hh;
				*d++ = s[x2 + y2*wbs];
				xy0m += m11; // x0*m11
				yy0m += m21; // x0*m21
			}
			y0++;
			d += wbd;
		}
	}

	// color border
	else if (mode == DRAWING_COLOR)
	{
		// source image dimension
		u32 ww = src->w;
		u32 hh = src->h;

		for (; h > 0; h--)
		{
			xy0m = x0*m11 + y0*m12 + m13;
			yy0m = x0*m21 + y0*m22 + m23;
		
			for (i = w; i > 0; i--)
			{
				x2 = xy0m>>FRACT;
				y2 = yy0m>>FRACT;
				if (((u32)x2 < ww) && ((u32)y2 < hh))
					*d = s[x2 + y2*wbs];
				else
					*d = color;
				d++;
				xy0m += m11; // x0*m11
				yy0m += m21; // x0*m21
			}
			y0++;
			d += wbd;
		}
	}

	// transparency
	else if (mode == DRAWIMG_TRANSP)
	{
		u32 ww = src->w;
		u32 hh = src->h;
		u8 c;

		for (; h > 0; h--)
		{
			xy0m = x0*m11 + y0*m12 + m13;
			yy0m = x0*m21 + y0*m22 + m23;
		
			for (i = w; i > 0; i--)
			{
				x2 = xy0m>>FRACT;
				y2 = yy0m>>FRACT;
				if (((u32)x2 < ww) && ((u32)y2 < hh))
				{
					c = s[x2 + y2*wbs];
					if (c != color) *d = c;
				}
				d++;
				xy0m += m11; // x0*m11
				yy0m += m21; // x0*m21
			}
			y0++;
			d += wbd;
		}
	}

	// perspective
	else if (mode == DRAWIMG_PERSP)
	{

#if DRAW_HWINTER // 1=use hardware interpolator to draw images

		// prepare hardware interpolator
		interp_config cfg = interp_default_config();

		interp_config_set_add_raw(&cfg, true); // add raw lane base back to accumulator
		interp_config_set_shift(&cfg, FRACT); // shift fraction bits out
		int xbits = 0;
		while ((1<<xbits)<src->w) xbits++; // get number of bits of image width
		interp_config_set_mask(&cfg, 0, xbits-1); // set x mask (0..width)
		interp_set_config(interp0, 0, &cfg); // configure lane 0

		int ybits = 0;
		while ((1<<ybits)<src->h) ybits++; // get number of bits of image height
		interp_config_set_shift(&cfg, FRACT - xbits); // shift fraction bits out, to multiply * width
		interp_config_set_mask(&cfg, xbits, xbits+ybits-1); // set y mask, multiply * width
		interp_set_config(interp0, 1, &cfg); // configure lane 1

		interp0->base[2] = (u32)s; // image base

		for (; h > 0; h--)
		{
			int dist = FRACTMUL*h0/(h0 + y0 + color + 1);
			int m11b = (m11*dist)>>FRACT;
			int m21b = (m21*dist)>>FRACT;
			int m12b = (m12*dist)>>FRACT;
			int m22b = (m22*dist)>>FRACT;

			xy0m = x0*m11b + y0*m12b + m13;
			yy0m = x0*m21b + y0*m22b + m23;

			interp0->accum[0] = xy0m;
			interp0->base[0] = m11b;
			interp0->accum[1] = yy0m;
			interp0->base[1] = m21b;

			for (i = w; i > 0; i--)
			{
				*d++ = *(u8*)interp0->pop[2];
			}
	
			y0++;
			d += wbd;
		}

#else

		// coordinate mask
		int xmask = src->w - 1;
		int ymask = src->h - 1;

		for (; h > 0; h--)
		{
			int dist = FRACTMUL*h0/(h0 + y0 + color + 1);
			int m11b = (m11*dist)>>FRACT;
			int m21b = (m21*dist)>>FRACT;
			int m12b = (m12*dist)>>FRACT;
			int m22b = (m22*dist)>>FRACT;

			xy0m = x0*m11b + y0*m12b + m13;
			yy0m = x0*m21b + y0*m22b + m23;
		
			for (i = w; i > 0; i--)
			{
				x2 = (xy0m>>FRACT) & xmask;
				xy0m += m11b; // x0*m11

				y2 = (yy0m>>FRACT) & ymask;
				yy0m += m21b; // x0*m21

				*d++ = s[x2 + y2*wbs];
			}
			y0++;
			d += wbd;
		}
#endif

	}
}

// draw tile map using perspective projection
//  canvas ... destination canvas
//  src ... source canvas with column of 8-bit square tiles (width = tile size, must be power of 2)
//  map ... byte map of tile indices
//  mapwbits ... number of bits of map width (number of tiles; width must be power of 2)
//  maphbits ... number of bits of map height (number of tiles; height must be power of 2)
//  tilebits ... number of bits of tile size (e.g. 5 = tile 32x32 pixel)
//  x ... destination coordinate X
//  y ... destination coordinate Y
//  w ... destination width
//  h ... destination height
//  mat ... transformation matrix (should be prepared using PrepDrawPersp function)
//  horizon ... horizon offset (0=do not use perspective projection)
void DrawTileMap(sCanvas* canvas, const sCanvas* src, const u8* map, int mapwbits, int maphbits,
	int tilebits, int x, int y, int w, int h, const cMat2Df* mat, u8 horizon)
{
	// check 8-bit image format
	if ((canvas->format != CANVAS_8) || (src->format != CANVAS_8)) return;

	// limit x
	int x0 = -w/2; // start X coordinate
	if (x < 0)
	{
		w += x;
		x0 -= x;
		x = 0;
	}
	if (x + w > canvas->w) w = canvas->w - x;
	if (w <= 0) return;

	// limit y
	int h0 = h;
	int y0 = (horizon == 0) ? (-h/2) : (-h); // start Y coordinate
	if (y < 0)
	{
		h += y;
		y0 -= y;
		y = 0;
	}
	if (y + h > canvas->h) h = canvas->h - y;
	if (h <= 0) return;

	// load transformation matrix and convert to integer fractional number
	int m[6];
	mat->ExportInt(m);

	// prepare variables
	int wbs = src->wb; // source width bytes
	const u8* s = src->img; // source image
	int xy0m, yy0m; // temporary Y members
	u8* d = canvas->img + canvas->wb*y + x; // destination image
	int wbd = canvas->wb - w; // destination width bytes
	int i, x2, y2;
	int tilesize = 1 << tilebits; // tile size
	int tilebits2 = tilebits*2;
	int tilemask = tilesize - 1; // tile mask
	int tileinx; // tile index
	int mapw = 1<<mapwbits;
	int maph = 1<<maphbits;
	int mapmaskx = (mapw * tilesize) - 1; // mask of map width
	int mapmasky = (maph * tilesize) - 1; // mask of map height

#if DRAW_HWINTER // 1=use hardware interpolator

	// prepare hardware interpolator 0 to get tile index
	interp_config cfg = interp_default_config();

	interp_config_set_add_raw(&cfg, true); // add raw lane base back to accumulator

	interp_config_set_shift(&cfg, FRACT + tilebits); // shift to get tile index X
	interp_config_set_mask(&cfg, 0, mapwbits-1);
	interp_set_config(interp0, 0, &cfg);

	interp_config_set_shift(&cfg, FRACT + tilebits - mapwbits); // shift to get tile index Y
	interp_config_set_mask(&cfg, mapwbits, mapwbits+maphbits-1);
	interp_set_config(interp0, 1, &cfg);

	interp0->base[2] = (u32)map; // map base

	// prepare hardware interpolator 1 to get pixel index
	interp_config_set_shift(&cfg, FRACT); // shift to get pixel index X
	interp_config_set_mask(&cfg, 0, tilebits-1);
	interp_set_config(interp1, 0, &cfg);

	interp_config_set_shift(&cfg, FRACT - tilebits); // shift to get pixel index Y
	interp_config_set_mask(&cfg, tilebits, tilebits2-1);
	interp_set_config(interp1, 1, &cfg);

	interp1->base[2] = (u32)s; // tile image

#endif // DRAW_HWINTER

	for (; h > 0; h--)
	{
	
		int m11 = m[0];
		int m12 = m[1];
		int m13 = m[2];
		int m21 = m[3];
		int m22 = m[4];
		int m23 = m[5];

		if (horizon != 0)
		{
			int dist = FRACTMUL*h0/(h0 + y0 + horizon);
			m11 = (m[0]*dist)>>FRACT;
			m12 = (m[1]*dist)>>FRACT;
			m21 = (m[3]*dist)>>FRACT;
			m22 = (m[4]*dist)>>FRACT;
		}

		xy0m = x0*m11 + y0*m12 + m13;
		yy0m = x0*m21 + y0*m22 + m23;

#if DRAW_HWINTER

		// initialize base of hardware interpolator
		interp0->base[0] = m11;
		interp1->base[0] = m11;
		interp0->base[1] = m21;
		interp1->base[1] = m21;

		interp0->accum[0] = xy0m;
		interp1->accum[0] = xy0m;
		interp0->accum[1] = yy0m;
		interp1->accum[1] = yy0m;

		for (i = w; i > 0; i--)
		{
			u8* map = (u8*)interp0->pop[2];
			u8* base = (u8*)interp1->pop[2];
			*d++ = base[*map << tilebits2];
		}
		y0++;
		d += wbd;

#else // DRAW_HWINTER

		for (i = w; i > 0; i--)
		{
			// pixel X coordinate on the map
			x2 = (xy0m>>FRACT) & mapmaskx;
			xy0m += m11;

			// pixel Y coordinate on the map
			y2 = (yy0m>>FRACT) & mapmasky;
			yy0m += m21;

			// tile index
			tileinx = map[(x2 >> tilebits) + (y2 >> tilebits)*mapw];

			// tile pixel
			*d++ = s[(tileinx<<2*tilebits) + (x2 & tilemask) + ((y2 & tilemask)<<tilebits)];
		}
		y0++;
		d += wbd;

#endif // DRAW_HWINTER

	}
}

// draw image line interpolated
//  canvas = destination canvas (8-bit pixel format)
//  src = source canvas (source image in 8-bit pixel format)
//  xd,yd = destination coordinates
//  xs,ys = source coordinates
//  wd = destination width
//  ws = source width
// Overflow in X direction is not checked!
void DrawImgLine(sCanvas* canvas, sCanvas* src, int xd, int yd, int xs, int ys, int wd, int ws)
{
	// some base checks (but not all, X is not checked!)
	if ((wd <= 0) || (ws <= 0) ||
		(canvas->format != CANVAS_8) || (src->format != CANVAS_8) ||
		(yd < 0) || (yd >= canvas->h) ||
		(ys < 0) || (ys >= src->h)) return;

	// pixel increment
	int dinc = FRACTMUL*ws/wd;

	// prepare buffers
	int wbd = canvas->wb; // destination width bytes
	int wbs = src->wb; // source width bytes
	u8* d = canvas->img + xd + yd*wbd; // destination address
	u8* s = src->img + xs + ys*wbs; // source address
	int i, j;

#if DRAW_HWINTER // 1=use hardware interpolator to draw images

	// prepare hardware interpolator
	interp_config cfg = interp_default_config(); // get default configuration
	interp_config_set_add_raw(&cfg, true); // add raw lane base back to accumulator
	interp_config_set_shift(&cfg, FRACT); // shift fraction bits out
	interp_set_config(interp0, 0, &cfg); // configure lane 0
	interp0->base[0] = dinc; // pixel increment
	interp0->accum[0] = 0; // base source
	cfg = interp_default_config(); // get default configuration
	interp_set_config(interp0, 1, &cfg); // configure lane 1
	interp0->base[2] = (u32)s; // image base

	for (i = 0; i < wd; i++)
	{
		*d++ = *(u8*)interp0->pop[2];
	}

#else

	int dadd = 0;
	for (i = 0; i < wd; i++)
	{
		*d++ = *s;
		dadd += dinc;
		s += dadd >> FRACT;
		dadd &= (FRACTMUL-1);
	}

#endif
}
