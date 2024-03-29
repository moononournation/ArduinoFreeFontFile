#ifndef FreeSerifBoldItalic10pt7b_H
#define FreeSerifBoldItalic10pt7b_H

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

const uint8_t FreeSerifBoldItalic10pt7bBitmaps[] PROGMEM = {
  0x0E, 0x0C, 0x8E, 0x66, 0x37, 0x1B, 0x8F, 0x8F, 0xC7, 0xE3, 0xF1, 0xB1,
  0xD8, 0xCC, 0x62, 0x60, 0xE0, 0x03, 0x1F, 0x07, 0x06, 0x0E, 0x0E, 0x0E,
  0x0C, 0x1C, 0x1C, 0x18, 0x18, 0x38, 0x38, 0xFE, 0x0F, 0x04, 0xF2, 0x1C,
  0x07, 0x01, 0xC0, 0x60, 0x38, 0x0C, 0x06, 0x03, 0x00, 0x80, 0x40, 0x30,
  0x9F, 0xCF, 0xF0, 0x0F, 0x84, 0xF0, 0x1C, 0x07, 0x03, 0x81, 0x81, 0xF0,
  0x1C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x02, 0x39, 0x0F, 0x80, 0x00, 0x40,
  0x30, 0x1C, 0x0F, 0x05, 0x82, 0xE1, 0x38, 0x8C, 0x43, 0x11, 0xCF, 0xF8,
  0x18, 0x06, 0x03, 0x80, 0x0F, 0x87, 0xE1, 0x00, 0x80, 0x3C, 0x0F, 0x81,
  0xE0, 0x1C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x06, 0x31, 0x0F, 0x80, 0x01,
  0x83, 0x87, 0x07, 0x03, 0x03, 0xE1, 0x99, 0xCC, 0xE6, 0x63, 0x31, 0x99,
  0xCC, 0xC2, 0x61, 0xE0, 0x3F, 0xCF, 0xE4, 0x18, 0x0C, 0x02, 0x01, 0x80,
  0x40, 0x30, 0x18, 0x06, 0x03, 0x00, 0xC0, 0x60, 0x18, 0x00, 0x0F, 0x86,
  0x33, 0x0C, 0xC3, 0x38, 0xCF, 0x61, 0xE0, 0x7C, 0x67, 0xB0, 0xEC, 0x1B,
  0x06, 0xC1, 0x18, 0xC3, 0xC0, 0x0F, 0x06, 0x23, 0x8C, 0xC3, 0x70, 0xD8,
  0x76, 0x1D, 0x87, 0x63, 0x8F, 0xE0, 0x70, 0x38, 0x1C, 0x1C, 0x0C, 0x00,
  0x39, 0xCE, 0x00, 0x00, 0x1C, 0xE7, 0x00 };

const GFXglyph FreeSerifBoldItalic10pt7bGlyphs[] PROGMEM = {
  {     0,   9,  15,  10,    0,  -13 },   // 0x30 '0'
  {    17,   8,  15,  10,    0,  -13 },   // 0x31 '1'
  {    32,  10,  15,  10,    0,  -13 },   // 0x32 '2'
  {    51,  10,  15,  10,    0,  -13 },   // 0x33 '3'
  {    70,  10,  14,  10,    0,  -13 },   // 0x34 '4'
  {    88,  10,  15,  10,    1,  -13 },   // 0x35 '5'
  {   107,   9,  15,  10,    1,  -13 },   // 0x36 '6'
  {   124,  10,  14,  10,    1,  -13 },   // 0x37 '7'
  {   142,  10,  15,  10,    0,  -13 },   // 0x38 '8'
  {   161,  10,  15,  10,    0,  -13 },   // 0x39 '9'
  {   180,   5,  10,   5,    0,   -8 } }; // 0x3A ':'

const GFXfont FreeSerifBoldItalic10pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBoldItalic10pt7bBitmaps,
  (GFXglyph *)FreeSerifBoldItalic10pt7bGlyphs,
  0x30, 0x3A, 24 };

// Approx. 271 bytes

#endif // FreeSerifBoldItalic10pt7b_H
