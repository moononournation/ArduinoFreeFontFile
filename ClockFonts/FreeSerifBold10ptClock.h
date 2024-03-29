#ifndef FreeSerifBold10pt7b_H
#define FreeSerifBold10pt7b_H

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

const uint8_t FreeSerifBold10pt7bBitmaps[] PROGMEM = {
  0x1C, 0x1B, 0x18, 0xCC, 0x6E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xD8,
  0xCC, 0x63, 0x60, 0xE0, 0x08, 0xF2, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38,
  0x70, 0xE1, 0xC3, 0x9F, 0xC0, 0x1E, 0x0F, 0xC4, 0x7A, 0x0E, 0x03, 0x80,
  0xE0, 0x30, 0x18, 0x0C, 0x02, 0x11, 0x04, 0xFE, 0x7F, 0xBF, 0xE0, 0x3E,
  0x27, 0xA1, 0xC0, 0xE0, 0x60, 0x78, 0x7E, 0x0F, 0x03, 0x80, 0xC0, 0x60,
  0x2E, 0x23, 0xE0, 0x06, 0x0E, 0x0E, 0x1E, 0x2E, 0x4E, 0x4E, 0x8E, 0x8E,
  0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x1F, 0x8F, 0x8F, 0xC4, 0x02, 0x03, 0xE1,
  0xF8, 0x7E, 0x03, 0x00, 0x80, 0x40, 0x2E, 0x27, 0xE0, 0x03, 0x1C, 0x38,
  0x70, 0x70, 0xFC, 0xE6, 0xE7, 0xE7, 0xE7, 0xE7, 0x67, 0x66, 0x3C, 0x7F,
  0x9F, 0xE7, 0xFA, 0x04, 0x83, 0x00, 0xC0, 0x20, 0x18, 0x06, 0x01, 0x00,
  0xC0, 0x30, 0x18, 0x06, 0x00, 0x3C, 0x33, 0xB0, 0xD8, 0x6E, 0x37, 0xE1,
  0xF8, 0x7E, 0x4F, 0xE3, 0xF0, 0xF8, 0x76, 0x71, 0xE0, 0x3C, 0x66, 0xE6,
  0xE7, 0xE7, 0xE7, 0xE7, 0x67, 0x3F, 0x0E, 0x0E, 0x1C, 0x38, 0xC0, 0xFF,
  0x80, 0x3F, 0xE0 };

const GFXglyph FreeSerifBold10pt7bGlyphs[] PROGMEM = {
  {     0,   9,  14,  10,    0,  -13 },   // 0x30 '0'
  {    16,   7,  14,  10,    2,  -13 },   // 0x31 '1'
  {    29,  10,  14,  10,    0,  -13 },   // 0x32 '2'
  {    47,   9,  14,  10,    0,  -13 },   // 0x33 '3'
  {    63,   8,  14,  10,    1,  -13 },   // 0x34 '4'
  {    77,   9,  14,  10,    0,  -13 },   // 0x35 '5'
  {    93,   8,  14,  10,    1,  -13 },   // 0x36 '6'
  {   107,  10,  14,  10,    0,  -13 },   // 0x37 '7'
  {   125,   9,  14,  10,    1,  -13 },   // 0x38 '8'
  {   141,   8,  14,  10,    1,  -13 },   // 0x39 '9'
  {   155,   3,   9,   7,    2,   -8 } }; // 0x3A ':'

const GFXfont FreeSerifBold10pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBold10pt7bBitmaps,
  (GFXglyph *)FreeSerifBold10pt7bGlyphs,
  0x30, 0x3A, 24 };

// Approx. 243 bytes

#endif // FreeSerifBold10pt7b_H
