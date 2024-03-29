#ifndef FreeMono12pt7b_H
#define FreeMono12pt7b_H

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

const uint8_t FreeMono12pt7bBitmaps[] PROGMEM = {
  0x1C, 0x31, 0x90, 0x58, 0x38, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0, 0x60,
  0x38, 0x34, 0x13, 0x18, 0x70, 0x30, 0xE1, 0x44, 0x81, 0x02, 0x04, 0x08,
  0x10, 0x20, 0x40, 0x81, 0x1F, 0xC0, 0x1E, 0x10, 0x90, 0x68, 0x10, 0x08,
  0x0C, 0x04, 0x04, 0x04, 0x06, 0x06, 0x06, 0x06, 0x0E, 0x07, 0xFE, 0x3E,
  0x10, 0x40, 0x08, 0x02, 0x00, 0x80, 0x40, 0xE0, 0x04, 0x00, 0x80, 0x10,
  0x04, 0x01, 0x00, 0x98, 0x63, 0xE0, 0x06, 0x0A, 0x0A, 0x12, 0x22, 0x22,
  0x42, 0x42, 0x82, 0x82, 0xFF, 0x02, 0x02, 0x02, 0x0F, 0x7F, 0x20, 0x10,
  0x08, 0x04, 0x02, 0xF1, 0x8C, 0x03, 0x00, 0x80, 0x40, 0x20, 0x18, 0x16,
  0x18, 0xF0, 0x0F, 0x8C, 0x08, 0x08, 0x04, 0x04, 0x02, 0x79, 0x46, 0xC1,
  0xE0, 0x60, 0x28, 0x14, 0x19, 0x18, 0x78, 0xFF, 0x81, 0x81, 0x03, 0x02,
  0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x08, 0x3E, 0x31,
  0xA0, 0x70, 0x18, 0x0C, 0x05, 0x8C, 0x38, 0x63, 0x40, 0x60, 0x30, 0x18,
  0x1B, 0x18, 0xF8, 0x3C, 0x31, 0x30, 0x50, 0x28, 0x0C, 0x0F, 0x06, 0x85,
  0x3C, 0x80, 0x40, 0x40, 0x20, 0x20, 0x63, 0xE0, 0xFF, 0x80, 0x07, 0xFC };

const GFXglyph FreeMono12pt7bGlyphs[] PROGMEM = {
  {     0,   9,  15,  14,    3,  -14 },   // 0x30 '0'
  {    17,   7,  14,  14,    4,  -13 },   // 0x31 '1'
  {    30,   9,  15,  14,    2,  -14 },   // 0x32 '2'
  {    47,  10,  15,  14,    2,  -14 },   // 0x33 '3'
  {    66,   8,  15,  14,    3,  -14 },   // 0x34 '4'
  {    81,   9,  15,  14,    3,  -14 },   // 0x35 '5'
  {    98,   9,  15,  14,    3,  -14 },   // 0x36 '6'
  {   115,   8,  15,  14,    3,  -14 },   // 0x37 '7'
  {   130,   9,  15,  14,    3,  -14 },   // 0x38 '8'
  {   147,   9,  15,  14,    3,  -14 },   // 0x39 '9'
  {   164,   3,  10,  14,    5,   -9 } }; // 0x3A ':'

const GFXfont FreeMono12pt7b PROGMEM = {
  (uint8_t  *)FreeMono12pt7bBitmaps,
  (GFXglyph *)FreeMono12pt7bGlyphs,
  0x30, 0x3A, 24 };

// Approx. 252 bytes

#endif // FreeMono12pt7b_H
