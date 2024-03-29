#ifndef FreeSerifItalic14pt7b_H
#define FreeSerifItalic14pt7b_H

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

const uint8_t FreeSerifItalic14pt7bBitmaps[] PROGMEM = {
  0x03, 0xC0, 0xC6, 0x18, 0x21, 0x83, 0x30, 0x33, 0x03, 0x60, 0x36, 0x03,
  0x60, 0x3E, 0x07, 0xE0, 0x7C, 0x06, 0xC0, 0x6C, 0x0E, 0xC0, 0xCC, 0x18,
  0x41, 0x86, 0x30, 0x3C, 0x00, 0x01, 0xC1, 0xF0, 0x1C, 0x06, 0x01, 0x80,
  0x60, 0x38, 0x0C, 0x03, 0x01, 0xC0, 0x60, 0x18, 0x06, 0x03, 0x80, 0xC0,
  0x30, 0x0C, 0x07, 0x0F, 0xF0, 0x07, 0xC0, 0x47, 0x84, 0x1E, 0x40, 0x70,
  0x03, 0x80, 0x1C, 0x01, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0E,
  0x00, 0x60, 0x06, 0x00, 0x60, 0x46, 0x04, 0x7F, 0xC0, 0x03, 0xC0, 0xCF,
  0x00, 0x70, 0x07, 0x00, 0x60, 0x0C, 0x07, 0x01, 0xF8, 0x03, 0x80, 0x1C,
  0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00, 0x80, 0x10, 0xE2, 0x0F, 0xC0,
  0x00, 0x18, 0x01, 0x80, 0x1C, 0x01, 0x60, 0x13, 0x01, 0xB0, 0x19, 0x81,
  0x8C, 0x18, 0xC1, 0x86, 0x18, 0x30, 0x81, 0x8F, 0xFF, 0x00, 0xC0, 0x06,
  0x00, 0x70, 0x03, 0x00, 0x18, 0x00, 0x03, 0xF0, 0x40, 0x04, 0x00, 0x80,
  0x0F, 0x00, 0xF8, 0x03, 0xC0, 0x0E, 0x00, 0xE0, 0x06, 0x00, 0x60, 0x06,
  0x00, 0x60, 0x04, 0x00, 0xC0, 0x18, 0xE3, 0x0F, 0xC0, 0x00, 0x38, 0x0F,
  0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x0E, 0xF0, 0x78, 0xE3,
  0x03, 0x38, 0x1D, 0x80, 0xEC, 0x07, 0x60, 0x3B, 0x03, 0x98, 0x1C, 0x41,
  0xC3, 0x1C, 0x07, 0x80, 0x3F, 0xF2, 0x01, 0xA0, 0x18, 0x00, 0xC0, 0x0C,
  0x00, 0xC0, 0x06, 0x00, 0x60, 0x03, 0x00, 0x30, 0x01, 0x00, 0x18, 0x01,
  0x80, 0x0C, 0x00, 0xC0, 0x06, 0x00, 0x60, 0x06, 0x00, 0x00, 0x07, 0xC0,
  0xC6, 0x18, 0x31, 0x83, 0x18, 0x31, 0x83, 0x0C, 0x60, 0xEC, 0x07, 0x00,
  0xB8, 0x31, 0xC6, 0x0C, 0xC0, 0x6C, 0x06, 0xC0, 0x6C, 0x06, 0x60, 0xC7,
  0x18, 0x1F, 0x00, 0x07, 0x80, 0xC6, 0x18, 0x23, 0x83, 0x38, 0x37, 0x03,
  0x70, 0x37, 0x03, 0x70, 0x37, 0x07, 0x70, 0x63, 0x8E, 0x1F, 0xC0, 0x1C,
  0x01, 0x80, 0x70, 0x0E, 0x03, 0x80, 0xC0, 0x00, 0x1C, 0x71, 0xC0, 0x00,
  0x00, 0x00, 0x03, 0x8E, 0x38 };

const GFXglyph FreeSerifItalic14pt7bGlyphs[] PROGMEM = {
  {     0,  12,  19,  14,    1,  -18 },   // 0x30 '0'
  {    29,  10,  19,  13,    1,  -18 },   // 0x31 '1'
  {    53,  13,  17,  13,    0,  -16 },   // 0x32 '2'
  {    81,  12,  18,  14,    1,  -17 },   // 0x33 '3'
  {   108,  13,  18,  13,    0,  -17 },   // 0x34 '4'
  {   138,  12,  18,  14,    0,  -17 },   // 0x35 '5'
  {   165,  13,  19,  14,    1,  -18 },   // 0x36 '6'
  {   196,  13,  18,  13,    2,  -17 },   // 0x37 '7'
  {   226,  12,  19,  13,    1,  -18 },   // 0x38 '8'
  {   255,  12,  19,  14,    1,  -18 },   // 0x39 '9'
  {   284,   6,  12,   7,    1,  -11 } }; // 0x3A ':'

const GFXfont FreeSerifItalic14pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic14pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic14pt7bGlyphs,
  0x30, 0x3A, 33 };

// Approx. 377 bytes

#endif // FreeSerifItalic14pt7b_H
