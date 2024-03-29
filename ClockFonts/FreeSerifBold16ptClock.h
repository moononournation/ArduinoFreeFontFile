#ifndef FreeSerifBold16pt7b_H
#define FreeSerifBold16pt7b_H

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

const uint8_t FreeSerifBold16pt7bBitmaps[] PROGMEM = {
  0x07, 0x80, 0x73, 0x83, 0x87, 0x0E, 0x1C, 0x78, 0x79, 0xE1, 0xEF, 0x87,
  0xFE, 0x1F, 0xF8, 0x7F, 0xE1, 0xFF, 0x87, 0xFE, 0x1F, 0xF8, 0x7F, 0xE1,
  0xFF, 0x87, 0xDE, 0x1E, 0x78, 0x78, 0xE1, 0xC3, 0x87, 0x07, 0x38, 0x07,
  0x80, 0x01, 0x80, 0xF0, 0x7E, 0x37, 0xC0, 0xF8, 0x1F, 0x03, 0xE0, 0x7C,
  0x0F, 0x81, 0xF0, 0x3E, 0x07, 0xC0, 0xF8, 0x1F, 0x03, 0xE0, 0x7C, 0x0F,
  0x81, 0xF0, 0x3E, 0x0F, 0xCF, 0xFE, 0x07, 0xC0, 0x3F, 0x81, 0xFF, 0x0F,
  0xFE, 0x61, 0xF9, 0x03, 0xE0, 0x07, 0x80, 0x1E, 0x00, 0x78, 0x01, 0xC0,
  0x0E, 0x00, 0x30, 0x01, 0x80, 0x0C, 0x00, 0x20, 0x01, 0x01, 0x08, 0x0C,
  0x7F, 0xF3, 0xFF, 0x9F, 0xFE, 0xFF, 0xF8, 0x07, 0xE0, 0x7F, 0xC2, 0x1F,
  0x90, 0x3E, 0x00, 0xF8, 0x03, 0xE0, 0x0F, 0x00, 0x78, 0x01, 0xF0, 0x1F,
  0xE0, 0x3F, 0x80, 0x3F, 0x00, 0x3C, 0x00, 0xF0, 0x01, 0xC0, 0x07, 0x00,
  0x19, 0xC0, 0x67, 0x83, 0x1F, 0x88, 0x3F, 0xC0, 0x00, 0x70, 0x01, 0xC0,
  0x0F, 0x00, 0x7C, 0x03, 0xF0, 0x1B, 0xC0, 0x4F, 0x03, 0x3C, 0x18, 0xF0,
  0xC3, 0xC2, 0x0F, 0x18, 0x3C, 0xC0, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x1F, 0xFC, 0x7F,
  0xE1, 0xFF, 0x87, 0xFE, 0x20, 0x00, 0x80, 0x02, 0x00, 0x1F, 0xE0, 0x7F,
  0xE1, 0xFF, 0xC7, 0xFF, 0x00, 0xFE, 0x00, 0x78, 0x00, 0xE0, 0x01, 0x80,
  0x06, 0x00, 0x11, 0xC0, 0x4F, 0xC2, 0x3F, 0xF0, 0x3F, 0x00, 0x00, 0x1C,
  0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x1E, 0x00, 0xF8, 0x07, 0xC0, 0x1F, 0x00,
  0x7F, 0xE3, 0xE3, 0xCF, 0x8F, 0xBE, 0x1F, 0xF8, 0x7F, 0xE1, 0xFF, 0x87,
  0xFE, 0x1F, 0x78, 0x7D, 0xE1, 0xE3, 0xC7, 0x07, 0x38, 0x07, 0xC0, 0x7F,
  0xFD, 0xFF, 0xEF, 0xFF, 0xBF, 0xFE, 0xC0, 0x32, 0x01, 0xC0, 0x07, 0x00,
  0x38, 0x00, 0xE0, 0x03, 0x80, 0x1C, 0x00, 0x70, 0x01, 0x80, 0x0E, 0x00,
  0x38, 0x00, 0xC0, 0x07, 0x00, 0x1C, 0x00, 0xE0, 0x03, 0x80, 0x0E, 0x00,
  0x0F, 0xC0, 0xC3, 0xC6, 0x07, 0xB8, 0x0E, 0xE0, 0x3B, 0xC0, 0xEF, 0x83,
  0x3F, 0x98, 0x7F, 0x80, 0xFF, 0x81, 0xFF, 0x0F, 0xFE, 0x73, 0xFB, 0x83,
  0xFE, 0x07, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xE7, 0x07, 0x8C, 0x3C, 0x1F,
  0x80, 0x0F, 0x80, 0x73, 0x83, 0x8F, 0x1E, 0x1E, 0xF8, 0x7B, 0xE1, 0xFF,
  0x87, 0xFE, 0x1F, 0xF8, 0x7F, 0xE1, 0xF7, 0xC7, 0xCF, 0x1F, 0x1F, 0xF8,
  0x03, 0xE0, 0x0F, 0x00, 0x7C, 0x01, 0xE0, 0x0F, 0x00, 0xF0, 0x0F, 0x00,
  0xE0, 0x00, 0x77, 0xFF, 0xF7, 0x00, 0x00, 0x00, 0x1D, 0xFF, 0xFD, 0xC0 };

const GFXglyph FreeSerifBold16pt7bGlyphs[] PROGMEM = {
  {     0,  14,  21,  15,    1,  -20 },   // 0x30 '0'
  {    37,  11,  21,  15,    2,  -20 },   // 0x31 '1'
  {    66,  14,  21,  16,    0,  -20 },   // 0x32 '2'
  {   103,  14,  21,  16,    0,  -20 },   // 0x33 '3'
  {   140,  14,  21,  16,    0,  -20 },   // 0x34 '4'
  {   177,  14,  21,  15,    1,  -20 },   // 0x35 '5'
  {   214,  14,  21,  16,    1,  -20 },   // 0x36 '6'
  {   251,  14,  21,  15,    1,  -20 },   // 0x37 '7'
  {   288,  14,  21,  15,    1,  -20 },   // 0x38 '8'
  {   325,  14,  21,  15,    1,  -20 },   // 0x39 '9'
  {   362,   5,  15,  10,    3,  -14 } }; // 0x3A ':'

const GFXfont FreeSerifBold16pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBold16pt7bBitmaps,
  (GFXglyph *)FreeSerifBold16pt7bGlyphs,
  0x30, 0x3A, 38 };

// Approx. 456 bytes

#endif // FreeSerifBold16pt7b_H
