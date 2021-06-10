
// ****************************************************************************
//
//                                PWM sound output
//
// ****************************************************************************
// Sounds are at format 8-bit unsigned (middle at 128), 22050 samples per second, mono
// PWM cycle is 256: TOP = 255
// Required PWM clock: 22050*256 = 5644800 Hz

// GP19 ... MOSI + sound output (PWM1 B)

#ifndef _PWMSND_H
#define _PWMSND_H

#define PWMSND_GPIO	19	// PWM output GPIO pin (0..29)
#define PWMSND_SLICE	((PWMSND_GPIO>>1)&7) // PWM slice index (=1)
#define PWMSND_CHAN	(PWMSND_GPIO&1) // PWM channel index (=1)

#define SOUNDRATE	22050	// sound rate [Hz]
#define PWMSND_TOP	255	// PRM top (period = PWMSND_TOP + 1 = 256)
#define PWMSND_CLOCK	(SOUNDRATE*(PWMSND_TOP+1)) // PWM clock (= 22050*256 = 5644800)

#define SNDFRAC	10	// number of fraction bits
#define SNDINT (1<<SNDFRAC) // integer part of sound fraction

// current sound
extern const u8* CurSound;	// current playing sound
extern volatile int SoundCnt;	// counter of current playing sound (<=0 no sound)
extern int SoundInc;		// pointer increment
extern volatile int SoundAcc;	// pointer accumulator
extern const u8* NextSound;	// next sound to play repeated sound
extern int NextSoundCnt;	// counter of next sound (0=no repeated sound)

// initialize PWM sound output
void PWMSndInit();

// output PWM sound (sound must be PCM 8-bit mono 22050Hz)
//  snd = pointer to sound
//  len = length of sound in number of samples
//  speed = relative speed (1=normal)
//  rep = True to repeat sample
void PlaySound(const u8* snd, int len, Bool rep = False, float speed = 1.0f);

// stop playing sound
void StopSound();

// update sound speed (1=normal speed)
void SpeedSound(float speed);

// check if playing sound
Bool PlayingSound();

// set next repeated sound
void SetNextSound(const u8* snd, int len);

#endif // _PWMSND_H
