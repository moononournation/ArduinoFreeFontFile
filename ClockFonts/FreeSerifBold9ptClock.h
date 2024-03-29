#ifndef FreeSerifBold9pt7b_H
#define FreeSerifBold9pt7b_H

#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#undef PROGMEM
#define PROGMEM STORE_ATTR
#elif defined(__IMXRT1052__) || defined(__IMXRT1062__)
// PROGMEM is defefind for T4 to place data in specific memory section
#undef PROGMEM
#define PROGMEM
#else
#define PROGMEM
#endif

const uint8_t FreeSerifBold9pt7bBitmaps[] PROGMEM = {
  0x1C, 0x33, 0x98, 0xDC, 0x7E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xB1, 0x98,
  0xC3, 0x80, 0x08, 0xE3, 0x8E, 0x38, 0xE3, 0x8E, 0x38, 0xE3, 0xBF, 0x3C,
  0x3F, 0x23, 0xC0, 0xE0, 0x70, 0x30, 0x38, 0x18, 0x18, 0x18, 0x5F, 0xDF,
  0xE0, 0x7C, 0x8E, 0x0E, 0x0E, 0x0C, 0x1E, 0x07, 0x03, 0x03, 0x02, 0xE6,
  0xF8, 0x06, 0x0E, 0x0E, 0x3E, 0x2E, 0x4E, 0x8E, 0x8E, 0xFF, 0xFF, 0x0E,
  0x0E, 0x3F, 0x7E, 0x40, 0x40, 0xF8, 0xFC, 0x1E, 0x06, 0x02, 0x02, 0xE4,
  0xF8, 0x07, 0x1C, 0x30, 0x70, 0xFC, 0xE6, 0xE7, 0xE7, 0xE7, 0x67, 0x66,
  0x3C, 0x7F, 0x3F, 0xA0, 0xD0, 0x40, 0x60, 0x30, 0x10, 0x18, 0x0C, 0x04,
  0x06, 0x03, 0x00, 0x3C, 0xC6, 0xC6, 0xC6, 0xFC, 0x7C, 0x3E, 0xCF, 0xC7,
  0xC7, 0xC6, 0x7C, 0x3E, 0x33, 0xB8, 0xDC, 0x7E, 0x3F, 0x1D, 0xCE, 0x7F,
  0x07, 0x07, 0x0F, 0x1C, 0x00, 0xFF, 0x80, 0x3F, 0xE0 };

const GFXglyph FreeSerifBold9pt7bGlyphs[] PROGMEM = {
  {     0,   9,  12,   9,    0,  -11 },   // 0x30 '0'
  {    14,   6,  12,   9,    1,  -11 },   // 0x31 '1'
  {    23,   9,  12,   9,    0,  -11 },   // 0x32 '2'
  {    37,   8,  12,   9,    0,  -11 },   // 0x33 '3'
  {    49,   8,  12,   9,    1,  -11 },   // 0x34 '4'
  {    61,   8,  12,   9,    1,  -11 },   // 0x35 '5'
  {    73,   8,  12,   9,    1,  -11 },   // 0x36 '6'
  {    85,   9,  12,   9,    0,  -11 },   // 0x37 '7'
  {    99,   8,  12,   9,    1,  -11 },   // 0x38 '8'
  {   111,   9,  12,   9,    0,  -11 },   // 0x39 '9'
  {   125,   3,   9,   6,    1,   -8 } }; // 0x3A ':'

const GFXfont FreeSerifBold9pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBold9pt7bBitmaps,
  (GFXglyph *)FreeSerifBold9pt7bGlyphs,
  0x30, 0x3A, 21 };

// Approx. 213 bytes

#endif // FreeSerifBold9pt7b_H
