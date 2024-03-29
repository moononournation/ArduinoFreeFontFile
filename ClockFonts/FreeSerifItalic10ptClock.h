#ifndef FreeSerifItalic10pt7b_H
#define FreeSerifItalic10pt7b_H

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

const uint8_t FreeSerifItalic10pt7bBitmaps[] PROGMEM = {
  0x0E, 0x0C, 0x8C, 0x6C, 0x36, 0x1B, 0x0F, 0x87, 0x83, 0xC3, 0xE1, 0xB0,
  0xD8, 0xC4, 0xC1, 0xC0, 0x02, 0x3C, 0x18, 0x20, 0x41, 0x83, 0x04, 0x18,
  0x30, 0x60, 0x83, 0x1F, 0x80, 0x1E, 0x11, 0xD0, 0x60, 0x30, 0x18, 0x18,
  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x2F, 0xE0, 0x0F, 0x08, 0xC0, 0x60,
  0x30, 0x30, 0x60, 0xF8, 0x0E, 0x03, 0x01, 0x80, 0xC0, 0x40, 0x47, 0xC0,
  0x00, 0x40, 0x20, 0x18, 0x0E, 0x05, 0x02, 0x41, 0x30, 0x8C, 0x42, 0x3F,
  0xE0, 0x60, 0x18, 0x04, 0x03, 0x00, 0x03, 0xC3, 0x00, 0x80, 0x38, 0x07,
  0x00, 0xE0, 0x18, 0x06, 0x01, 0x80, 0x40, 0x30, 0x18, 0xF8, 0x00, 0x01,
  0xC1, 0xC0, 0xC0, 0x60, 0x30, 0x1B, 0x87, 0x63, 0x8C, 0xC3, 0x30, 0xCC,
  0x33, 0x18, 0x46, 0x0E, 0x00, 0x3F, 0xD0, 0x20, 0x10, 0x0C, 0x02, 0x01,
  0x80, 0x40, 0x20, 0x18, 0x04, 0x02, 0x00, 0x80, 0x40, 0x00, 0x1E, 0x19,
  0xCC, 0x66, 0x33, 0x18, 0xD0, 0x30, 0x6C, 0x47, 0x61, 0xB0, 0xD8, 0x66,
  0x61, 0xE0, 0x0F, 0x06, 0x63, 0x0D, 0x83, 0x60, 0xD8, 0x36, 0x1C, 0xC6,
  0x3F, 0x80, 0xC0, 0x60, 0x30, 0x38, 0x30, 0x00, 0x33, 0x00, 0x00, 0x0C,
  0xC0 };

const GFXglyph FreeSerifItalic10pt7bGlyphs[] PROGMEM = {
  {     0,   9,  14,  10,    1,  -13 },   // 0x30 '0'
  {    16,   7,  14,  10,    1,  -13 },   // 0x31 '1'
  {    29,   9,  13,  10,    0,  -12 },   // 0x32 '2'
  {    44,   9,  14,  10,    1,  -13 },   // 0x33 '3'
  {    60,  10,  14,  10,    0,  -13 },   // 0x34 '4'
  {    78,  10,  13,  10,    0,  -12 },   // 0x35 '5'
  {    95,  10,  14,  10,    1,  -13 },   // 0x36 '6'
  {   113,  10,  13,  10,    1,  -12 },   // 0x37 '7'
  {   130,   9,  14,  10,    1,  -13 },   // 0x38 '8'
  {   146,  10,  14,  10,    0,  -13 },   // 0x39 '9'
  {   164,   4,   9,   5,    1,   -8 } }; // 0x3A ':'

const GFXfont FreeSerifItalic10pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic10pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic10pt7bGlyphs,
  0x30, 0x3A, 24 };

// Approx. 253 bytes

#endif // FreeSerifItalic10pt7b_H
