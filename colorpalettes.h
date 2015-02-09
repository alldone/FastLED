#ifndef __INC_COLORPALETTES_H
#define __INC_COLORPALETTES_H

#include "colorutils.h"

FASTLED_NAMESPACE_BEGIN

// Preset color schemes, such as they are.

// These schemes are all declared as "PROGMEM", meaning
// that they won't take up SRAM on AVR chips until used.
// Furthermore, the compiler won't even include these
// in your PROGMEM (flash) storage unless you specifically
// use each one, so you only 'pay for' those you actually use.


extern const TProgmemRGBPalette16 CloudColors_p PROGMEM;
extern const TProgmemRGBPalette16 LavaColors_p PROGMEM;
extern const TProgmemRGBPalette16 OceanColors_p PROGMEM;
extern const TProgmemRGBPalette16 ForestColors_p PROGMEM;

// HSV Rainbow
extern const TProgmemRGBPalette16 RainbowColors_p PROGMEM;

// HSV Rainbow colors with alternatating stripes of black
#define RainbowStripesColors_p RainbowStripeColors_p
extern const TProgmemRGBPalette16 RainbowStripeColors_p PROGMEM;

// HSV color ramp: blue purple ping red orange yellow (and back)
// Basically, everything but the greens, which tend to make
// people's skin look unhealthy.  This palette is good for
// lighting at a club or party, where it'll be shining on people.
extern const TProgmemRGBPalette16 PartyColors_p PROGMEM;

// Approximate "black body radiation" palette, akin to
// the FastLED 'HeatColor' function.
// Recommend that you use values 0-240 rather than
// the usual 0-255, as the last 15 colors will be
// 'wrapping around' from the hot end to the cold end,
// which looks wrong.
extern const TProgmemRGBPalette16 HeatColors_p PROGMEM;
 
FASTLED_NAMESPACE_END

#endif
