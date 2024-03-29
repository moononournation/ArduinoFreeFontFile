#ifndef FreeSansBoldOblique16pt7b_H
#define FreeSansBoldOblique16pt7b_H

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

const uint8_t FreeSansBoldOblique16pt7bBitmaps[] PROGMEM = {
  0x00, 0xF8, 0x01, 0xFF, 0x01, 0xFF, 0xC1, 0xFF, 0xE1, 0xF1, 0xF9, 0xF0,
  0x7C, 0xF8, 0x3E, 0x78, 0x1F, 0x7C, 0x0F, 0xBE, 0x07, 0xDF, 0x07, 0xEF,
  0x83, 0xEF, 0x81, 0xF7, 0xC0, 0xFB, 0xE0, 0xF9, 0xF0, 0x7C, 0xF8, 0x3E,
  0x7E, 0x3E, 0x3F, 0xFE, 0x0F, 0xFE, 0x03, 0xFE, 0x00, 0xFC, 0x00, 0x00,
  0xE0, 0x1C, 0x0F, 0x87, 0xF7, 0xFC, 0xFF, 0xBF, 0xF0, 0x3E, 0x07, 0xC0,
  0xF0, 0x1E, 0x03, 0xC0, 0xF8, 0x1F, 0x03, 0xC0, 0x78, 0x0F, 0x03, 0xE0,
  0x78, 0x0F, 0x01, 0xE0, 0x7C, 0x00, 0x00, 0x7E, 0x00, 0x3F, 0xF0, 0x0F,
  0xFF, 0x03, 0xFF, 0xF0, 0xFC, 0x7E, 0x1F, 0x07, 0xC7, 0xC0, 0xF8, 0xF8,
  0x1F, 0x00, 0x07, 0xC0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x0F, 0x80, 0x07,
  0xE0, 0x01, 0xF0, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0x1F, 0x00, 0x03, 0xC0,
  0x00, 0xFF, 0xFC, 0x3F, 0xFF, 0x87, 0xFF, 0xE0, 0xFF, 0xFC, 0x00, 0x00,
  0xFC, 0x01, 0xFF, 0x81, 0xFF, 0xC1, 0xFF, 0xF0, 0xF1, 0xF8, 0xF8, 0x7C,
  0x78, 0x3E, 0x00, 0x3E, 0x00, 0x3E, 0x00, 0x7E, 0x00, 0x3F, 0x00, 0x3F,
  0xC0, 0x03, 0xF0, 0x00, 0xF8, 0x00, 0x7D, 0xF0, 0x3E, 0xF8, 0x3F, 0x7E,
  0x3F, 0x3F, 0xFF, 0x8F, 0xFF, 0x83, 0xFF, 0x00, 0x7F, 0x00, 0x00, 0x1F,
  0x00, 0x1F, 0x80, 0x1F, 0xC0, 0x0F, 0xE0, 0x0F, 0xF0, 0x0E, 0xF0, 0x0E,
  0x78, 0x0E, 0x3C, 0x0F, 0x3E, 0x07, 0x1F, 0x07, 0x0F, 0x07, 0x07, 0x87,
  0x03, 0xC3, 0xFF, 0xFB, 0xFF, 0xFD, 0xFF, 0xFE, 0xFF, 0xFE, 0x00, 0x7C,
  0x00, 0x3E, 0x00, 0x1E, 0x00, 0x0F, 0x00, 0x07, 0x80, 0x03, 0xFF, 0xC0,
  0xFF, 0xF0, 0x3F, 0xFC, 0x1F, 0xFE, 0x07, 0x00, 0x03, 0xC0, 0x00, 0xE0,
  0x00, 0x3B, 0xE0, 0x1F, 0xFC, 0x07, 0xFF, 0x81, 0xFF, 0xF0, 0xF8, 0xFC,
  0x00, 0x1F, 0x00, 0x07, 0xC0, 0x01, 0xF0, 0x00, 0x78, 0xF8, 0x3E, 0x3F,
  0x1F, 0x8F, 0xFF, 0xC1, 0xFF, 0xE0, 0x3F, 0xF0, 0x07, 0xF0, 0x00, 0x00,
  0xF8, 0x03, 0xFE, 0x07, 0xFF, 0x0F, 0xFF, 0x1F, 0x0F, 0x3E, 0x00, 0x3C,
  0x00, 0x3D, 0xF0, 0x7B, 0xFC, 0x7F, 0xFC, 0x7F, 0xFE, 0xFC, 0x7E, 0xF8,
  0x3E, 0xF0, 0x3E, 0xF0, 0x3E, 0xF0, 0x3C, 0xF0, 0x7C, 0xF8, 0xFC, 0xFF,
  0xF8, 0x7F, 0xF0, 0x3F, 0xE0, 0x1F, 0x80, 0x7F, 0xFF, 0xBF, 0xFF, 0xDF,
  0xFF, 0xEF, 0xFF, 0xE0, 0x01, 0xE0, 0x01, 0xE0, 0x01, 0xE0, 0x01, 0xF0,
  0x01, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF8, 0x00, 0x78,
  0x00, 0x7C, 0x00, 0x3C, 0x00, 0x3E, 0x00, 0x1E, 0x00, 0x1F, 0x00, 0x0F,
  0x00, 0x07, 0x80, 0x07, 0xC0, 0x00, 0x00, 0xFC, 0x01, 0xFF, 0x01, 0xFF,
  0xC1, 0xFF, 0xF0, 0xF0, 0xF8, 0xF0, 0x3C, 0x78, 0x1E, 0x3C, 0x1E, 0x1F,
  0x1E, 0x07, 0xFE, 0x01, 0xFF, 0x03, 0xFF, 0xC3, 0xE3, 0xF3, 0xE0, 0xFB,
  0xE0, 0x7D, 0xF0, 0x3E, 0xF8, 0x3E, 0x7E, 0x3F, 0x3F, 0xFF, 0x0F, 0xFF,
  0x03, 0xFF, 0x00, 0x7E, 0x00, 0x00, 0xFC, 0x01, 0xFF, 0x01, 0xFF, 0xC1,
  0xFF, 0xE1, 0xF8, 0xF8, 0xF8, 0x3C, 0xF8, 0x1E, 0x7C, 0x0F, 0x3E, 0x07,
  0x9F, 0x07, 0xCF, 0xC7, 0xE7, 0xFF, 0xE1, 0xFF, 0xF0, 0x7F, 0x78, 0x1F,
  0x78, 0x00, 0x3C, 0x00, 0x3E, 0x7C, 0x3E, 0x3F, 0xFE, 0x0F, 0xFE, 0x03,
  0xFE, 0x00, 0xFE, 0x00, 0x1E, 0x3C, 0xF1, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x8F, 0x3C, 0x78 };

const GFXglyph FreeSansBoldOblique16pt7bGlyphs[] PROGMEM = {
  {     0,  17,  22,  17,    3,  -21 },   // 0x30 '0'
  {    47,  11,  22,  17,    5,  -21 },   // 0x31 '1'
  {    78,  19,  22,  17,    1,  -21 },   // 0x32 '2'
  {   131,  17,  22,  17,    2,  -21 },   // 0x33 '3'
  {   178,  17,  22,  17,    2,  -21 },   // 0x34 '4'
  {   225,  18,  22,  17,    2,  -21 },   // 0x35 '5'
  {   275,  16,  22,  17,    3,  -21 },   // 0x36 '6'
  {   319,  17,  22,  17,    4,  -21 },   // 0x37 '7'
  {   366,  17,  22,  17,    2,  -21 },   // 0x38 '8'
  {   413,  17,  22,  17,    2,  -21 },   // 0x39 '9'
  {   460,   7,  16,  10,    4,  -15 } }; // 0x3A ':'

const GFXfont FreeSansBoldOblique16pt7b PROGMEM = {
  (uint8_t  *)FreeSansBoldOblique16pt7bBitmaps,
  (GFXglyph *)FreeSansBoldOblique16pt7bGlyphs,
  0x30, 0x3A, 38 };

// Approx. 558 bytes

#endif // FreeSansBoldOblique16pt7b_H
