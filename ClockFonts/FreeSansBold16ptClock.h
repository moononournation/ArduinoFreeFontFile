#ifndef FreeSansBold16pt7b_H
#define FreeSansBold16pt7b_H

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

const uint8_t FreeSansBold16pt7bBitmaps[] PROGMEM = {
  0x07, 0xE0, 0x1F, 0xF8, 0x3F, 0xFC, 0x7F, 0xFE, 0x7E, 0x7E, 0x7C, 0x3E,
  0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F,
  0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0x7C, 0x3E, 0x7C, 0x3E,
  0x7F, 0xFC, 0x3F, 0xFC, 0x1F, 0xF8, 0x07, 0xE0, 0x03, 0x83, 0xC1, 0xE3,
  0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 0x0F, 0x87, 0xC3, 0xE1, 0xF0, 0xF8, 0x7C,
  0x3E, 0x1F, 0x0F, 0x87, 0xC3, 0xE1, 0xF0, 0xF8, 0x7C, 0x07, 0xE0, 0x1F,
  0xF8, 0x3F, 0xFC, 0x7F, 0xFE, 0xFC, 0x3F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8,
  0x1F, 0x00, 0x1F, 0x00, 0x3F, 0x00, 0x3E, 0x00, 0x7C, 0x01, 0xF8, 0x03,
  0xF0, 0x07, 0xC0, 0x0F, 0x80, 0x1E, 0x00, 0x1C, 0x00, 0x3F, 0xFF, 0x3F,
  0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x0F, 0xE0, 0x3F, 0xF8, 0x7F, 0xFC, 0x7F,
  0xFC, 0xFC, 0x7E, 0xF8, 0x3E, 0xF8, 0x3E, 0x00, 0x3E, 0x00, 0x7C, 0x01,
  0xF8, 0x01, 0xF8, 0x01, 0xFC, 0x00, 0x3E, 0x00, 0x1F, 0x00, 0x1F, 0xF8,
  0x1F, 0xF8, 0x1F, 0xFC, 0x3F, 0x7F, 0xFE, 0x7F, 0xFC, 0x1F, 0xF8, 0x0F,
  0xE0, 0x00, 0xF8, 0x07, 0xE0, 0x3F, 0x80, 0xFE, 0x07, 0xF8, 0x1B, 0xE0,
  0xEF, 0x83, 0x3E, 0x1C, 0xF8, 0x63, 0xE3, 0x0F, 0x9C, 0x3E, 0x60, 0xFB,
  0x83, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0x80, 0x3E,
  0x00, 0xF8, 0x03, 0xE0, 0x3F, 0xFE, 0x3F, 0xFE, 0x3F, 0xFE, 0x3F, 0xFE,
  0x38, 0x00, 0x78, 0x00, 0x7B, 0xE0, 0x77, 0xF8, 0x7F, 0xFC, 0x7F, 0xFE,
  0x78, 0x7E, 0x00, 0x3F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F,
  0xF0, 0x3F, 0xF8, 0x7E, 0x7F, 0xFE, 0x7F, 0xFC, 0x3F, 0xF8, 0x0F, 0xC0,
  0x07, 0xF0, 0x1F, 0xFC, 0x3F, 0xFC, 0x3F, 0xFE, 0x7E, 0x3E, 0x7C, 0x00,
  0x78, 0x00, 0xF8, 0x00, 0xF9, 0xF0, 0xFF, 0xFC, 0xFF, 0xFE, 0xFC, 0x3E,
  0xFC, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0x78, 0x3F, 0x7C, 0x3E,
  0x7F, 0xFE, 0x3F, 0xFC, 0x1F, 0xF8, 0x07, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xC0, 0x0F, 0x80, 0x1E, 0x00, 0x78, 0x01,
  0xF0, 0x03, 0xC0, 0x0F, 0x80, 0x1E, 0x00, 0x7C, 0x00, 0xF8, 0x01, 0xE0,
  0x07, 0xC0, 0x0F, 0x80, 0x1F, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0xF0, 0x03,
  0xE0, 0x00, 0x07, 0xC0, 0x1F, 0xF0, 0x3F, 0xF8, 0x3F, 0xF8, 0x7C, 0x3C,
  0x78, 0x1C, 0x78, 0x1C, 0x78, 0x1C, 0x3C, 0x38, 0x1F, 0xF8, 0x0F, 0xF0,
  0x3F, 0xFC, 0x7C, 0x3E, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F,
  0xFC, 0x3F, 0x7F, 0xFE, 0x3F, 0xFC, 0x1F, 0xF8, 0x07, 0xE0, 0x07, 0xE0,
  0x1F, 0xF8, 0x3F, 0xFC, 0x7F, 0xFE, 0x7C, 0x3E, 0xF8, 0x1E, 0xF8, 0x1F,
  0xF8, 0x1F, 0xF8, 0x1F, 0xF8, 0x1F, 0xFC, 0x3F, 0x7F, 0xFF, 0x3F, 0xFF,
  0x1F, 0xDF, 0x0F, 0x9F, 0x00, 0x1E, 0x00, 0x3E, 0xFC, 0x7E, 0x7F, 0xFC,
  0x7F, 0xFC, 0x3F, 0xF0, 0x0F, 0xE0, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFF };

const GFXglyph FreeSansBold16pt7bGlyphs[] PROGMEM = {
  {     0,  16,  22,  17,    1,  -21 },   // 0x30 '0'
  {    44,   9,  22,  17,    3,  -21 },   // 0x31 '1'
  {    69,  16,  22,  17,    1,  -21 },   // 0x32 '2'
  {   113,  16,  22,  17,    1,  -21 },   // 0x33 '3'
  {   157,  14,  22,  17,    2,  -21 },   // 0x34 '4'
  {   196,  16,  22,  17,    1,  -21 },   // 0x35 '5'
  {   240,  16,  22,  17,    1,  -21 },   // 0x36 '6'
  {   284,  15,  22,  17,    1,  -21 },   // 0x37 '7'
  {   326,  16,  22,  17,    1,  -21 },   // 0x38 '8'
  {   370,  16,  22,  17,    1,  -21 },   // 0x39 '9'
  {   414,   5,  16,   8,    2,  -15 } }; // 0x3A ':'

const GFXfont FreeSansBold16pt7b PROGMEM = {
  (uint8_t  *)FreeSansBold16pt7bBitmaps,
  (GFXglyph *)FreeSansBold16pt7bGlyphs,
  0x30, 0x3A, 38 };

// Approx. 508 bytes

#endif // FreeSansBold16pt7b_H
