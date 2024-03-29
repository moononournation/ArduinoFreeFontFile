#ifndef FreeSerif10pt7b_H
#define FreeSerif10pt7b_H

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

const uint8_t FreeSerif10pt7bBitmaps[] PROGMEM = {
  0x1E, 0x0C, 0xC6, 0x19, 0x02, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0,
  0x34, 0x09, 0x86, 0x33, 0x07, 0x80, 0x37, 0x8C, 0x63, 0x18, 0xC6, 0x31,
  0x8C, 0x63, 0x3C, 0x3C, 0x23, 0x20, 0xD0, 0x60, 0x30, 0x10, 0x18, 0x08,
  0x08, 0x0C, 0x0C, 0x0C, 0x1F, 0xF0, 0x7C, 0x8E, 0x06, 0x04, 0x1C, 0x3E,
  0x0F, 0x03, 0x03, 0x03, 0x02, 0x04, 0xF8, 0x02, 0x06, 0x0E, 0x16, 0x26,
  0x26, 0x46, 0x86, 0x86, 0xFF, 0x06, 0x06, 0x06, 0x00, 0x07, 0xC4, 0x02,
  0x03, 0xC0, 0xF8, 0x0E, 0x07, 0x01, 0x80, 0xC0, 0x60, 0x20, 0x23, 0xE0,
  0x03, 0x87, 0x0E, 0x0E, 0x06, 0x07, 0xF3, 0x8D, 0x83, 0xC1, 0xE0, 0xF0,
  0x6C, 0x36, 0x30, 0xF0, 0x7F, 0x81, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04,
  0x08, 0x08, 0x08, 0x10, 0x10, 0x3C, 0x66, 0xC3, 0xC3, 0xE3, 0x74, 0x38,
  0x2C, 0x46, 0xC3, 0xC3, 0xC3, 0x66, 0x3C, 0x3C, 0x66, 0xC2, 0xC3, 0xC3,
  0xC3, 0xC3, 0x63, 0x3F, 0x06, 0x06, 0x0C, 0x1C, 0x38, 0x60, 0xF0, 0x03,
  0xC0 };

const GFXglyph FreeSerif10pt7bGlyphs[] PROGMEM = {
  {     0,  10,  14,  10,    0,  -13 },   // 0x30 '0'
  {    18,   5,  14,  10,    2,  -13 },   // 0x31 '1'
  {    27,   9,  13,  10,    1,  -12 },   // 0x32 '2'
  {    42,   8,  13,  10,    1,  -12 },   // 0x33 '3'
  {    55,   8,  13,  10,    1,  -12 },   // 0x34 '4'
  {    68,   9,  14,  10,    0,  -13 },   // 0x35 '5'
  {    84,   9,  14,  10,    1,  -13 },   // 0x36 '6'
  {   100,   8,  13,  10,    0,  -12 },   // 0x37 '7'
  {   113,   8,  14,  10,    1,  -13 },   // 0x38 '8'
  {   127,   8,  15,  10,    1,  -13 },   // 0x39 '9'
  {   142,   2,   9,   5,    1,   -8 } }; // 0x3A ':'

const GFXfont FreeSerif10pt7b PROGMEM = {
  (uint8_t  *)FreeSerif10pt7bBitmaps,
  (GFXglyph *)FreeSerif10pt7bGlyphs,
  0x30, 0x3A, 24 };

// Approx. 229 bytes

#endif // FreeSerif10pt7b_H
