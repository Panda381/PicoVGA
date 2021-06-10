
// ****************************************************************************
//
//                                Overclock
//
// ****************************************************************************

#ifndef _OVERCLOCK_H
#define _OVERCLOCK_H

// Search PLL setup
//  reqkhz ... required output frequency in kHz
//  input ... PLL input frequency in kHz (default 12000, or use clock_get_hz(clk_ref)/1000)
//  vcomin ... minimal VCO frequency in kHz (default 400000)
//  vcomax ... maximal VCO frequency in kHz (default 1600000)
//  lowvco ... prefer low VCO (lower power but more jiter)
// outputs:
//  outkhz ... output achieved frequency in kHz (0=not found)
//  outvco ... output VCO frequency in kHz
//  outfbdiv ... output fbdiv (16..320)
//  outpd1 ... output postdiv1 (1..7)
//  outpd2 ... output postdiv2 (1..7)
// Returns true if precise frequency has been found, or near frequency used otherwise.
bool vcocalc(u32 reqkhz, u32 input, u32 vcomin, u32 vcomax, bool lowvco,
		u32* outkhz, u32* outvco, u16* outfbdiv, u8* outpd1, u8* outpd2);

// find sysclock setup (use set_sys_clock_pll to set sysclock)
//  reqkhz ... required frequency in kHz
// outputs:
//  outkhz ... output achieved frequency in kHz (0=not found)
//  outvco ... output VCO frequency in kHz
//  outfbdiv ... output fbdiv (16..320)
//  outpd1 ... output postdiv1 (1..7)
//  outpd2 ... output postdiv2 (1..7)
// Returns true if precise frequency has been found, or near frequency used otherwise.
bool FindSysClock(u32 reqkhz, u32* outkhz, u32* outvco, u16* outfbdiv, u8* outpd1, u8* outpd2);

// set flash SSI speed (4 default, <4 faster, >4 slower)
void __not_in_flash_func(FlashSpeedSetup)(int baud);

#endif // _OVERCLOCK_H
