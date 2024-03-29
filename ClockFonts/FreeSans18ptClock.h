#ifndef FreeSans18pt7b_H
#define FreeSans18pt7b_H

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

const uint8_t FreeSans18pt7bBitmaps[] PROGMEM = {
  0x07, 0xE0, 0x0F, 0xF8, 0x1F, 0xFC, 0x3C, 0x3C, 0x78, 0x1E, 0x70, 0x0E,
  0x70, 0x0E, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07,
  0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x0F,
  0x70, 0x0E, 0x70, 0x0E, 0x78, 0x1E, 0x3C, 0x3C, 0x1F, 0xF8, 0x1F, 0xF0,
  0x07, 0xE0, 0x03, 0x03, 0x07, 0x0F, 0x3F, 0xFF, 0xFF, 0x07, 0x07, 0x07,
  0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
  0x07, 0x07, 0x07, 0x07, 0xE0, 0x1F, 0xF8, 0x3F, 0xFC, 0x7C, 0x3E, 0x70,
  0x0F, 0xF0, 0x0F, 0xE0, 0x07, 0xE0, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00,
  0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0xF8, 0x03, 0xF0, 0x07, 0xC0, 0x1F,
  0x00, 0x3C, 0x00, 0x38, 0x00, 0x70, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xF0, 0x07, 0xFE, 0x07, 0xFF, 0x87,
  0x83, 0xC3, 0x80, 0xF3, 0x80, 0x39, 0xC0, 0x1C, 0xE0, 0x0E, 0x00, 0x07,
  0x00, 0x0F, 0x00, 0x7F, 0x00, 0x3F, 0x00, 0x1F, 0xE0, 0x00, 0x78, 0x00,
  0x1E, 0x00, 0x07, 0x00, 0x03, 0xF0, 0x01, 0xF8, 0x00, 0xFE, 0x00, 0x77,
  0x00, 0x73, 0xE0, 0xF8, 0xFF, 0xF8, 0x3F, 0xF8, 0x07, 0xF0, 0x00, 0x00,
  0x38, 0x00, 0x38, 0x00, 0x78, 0x00, 0xF8, 0x00, 0xF8, 0x01, 0xF8, 0x03,
  0xB8, 0x03, 0x38, 0x07, 0x38, 0x0E, 0x38, 0x1C, 0x38, 0x18, 0x38, 0x38,
  0x38, 0x70, 0x38, 0x60, 0x38, 0xE0, 0x38, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38, 0x00,
  0x38, 0x1F, 0xFF, 0x0F, 0xFF, 0x8F, 0xFF, 0xC7, 0x00, 0x03, 0x80, 0x01,
  0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x39, 0xF0, 0x3F, 0xFE, 0x1F, 0xFF,
  0x8F, 0x83, 0xE7, 0x00, 0xF0, 0x00, 0x3C, 0x00, 0x0E, 0x00, 0x07, 0x00,
  0x03, 0x80, 0x01, 0xC0, 0x00, 0xFC, 0x00, 0xEF, 0x00, 0x73, 0xC0, 0xF0,
  0xFF, 0xF8, 0x3F, 0xF8, 0x07, 0xE0, 0x00, 0x03, 0xE0, 0x0F, 0xF8, 0x1F,
  0xFC, 0x3C, 0x1E, 0x38, 0x0E, 0x70, 0x0E, 0x70, 0x00, 0x60, 0x00, 0xE0,
  0x00, 0xE3, 0xE0, 0xEF, 0xF8, 0xFF, 0xFC, 0xFC, 0x3E, 0xF0, 0x0E, 0xF0,
  0x0F, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0x60, 0x07, 0x70, 0x0F, 0x70,
  0x0E, 0x3C, 0x3E, 0x3F, 0xFC, 0x1F, 0xF8, 0x07, 0xE0, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x18, 0x00,
  0x38, 0x00, 0x70, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x01, 0xC0, 0x01,
  0x80, 0x03, 0x80, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x0E,
  0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x07,
  0xF0, 0x0F, 0xFE, 0x0F, 0xFF, 0x87, 0x83, 0xC7, 0x80, 0xF3, 0x80, 0x39,
  0xC0, 0x1C, 0xE0, 0x0E, 0x78, 0x0F, 0x1E, 0x0F, 0x07, 0xFF, 0x01, 0xFF,
  0x03, 0xFF, 0xE3, 0xE0, 0xF9, 0xC0, 0x1D, 0xE0, 0x0F, 0xE0, 0x03, 0xF0,
  0x01, 0xF8, 0x00, 0xFC, 0x00, 0xF7, 0x00, 0x73, 0xE0, 0xF8, 0xFF, 0xF8,
  0x3F, 0xF8, 0x07, 0xF0, 0x00, 0x07, 0xE0, 0x1F, 0xF8, 0x3F, 0xFC, 0x7C,
  0x3C, 0x70, 0x0E, 0xF0, 0x0E, 0xE0, 0x06, 0xE0, 0x07, 0xE0, 0x07, 0xE0,
  0x07, 0xE0, 0x0F, 0x70, 0x0F, 0x7C, 0x3F, 0x3F, 0xFF, 0x1F, 0xF7, 0x0F,
  0xC7, 0x00, 0x07, 0x00, 0x06, 0x00, 0x0E, 0x70, 0x0E, 0x70, 0x1C, 0x78,
  0x3C, 0x3F, 0xF8, 0x1F, 0xF0, 0x07, 0xC0, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x80 };

const GFXglyph FreeSans18pt7bGlyphs[] PROGMEM = {
  {     0,  16,  25,  19,    2,  -24 },   // 0x30 '0'
  {    50,   8,  25,  19,    4,  -24 },   // 0x31 '1'
  {    75,  16,  25,  19,    2,  -24 },   // 0x32 '2'
  {   125,  17,  25,  19,    1,  -24 },   // 0x33 '3'
  {   179,  16,  25,  19,    1,  -24 },   // 0x34 '4'
  {   229,  17,  25,  19,    1,  -24 },   // 0x35 '5'
  {   283,  16,  25,  19,    2,  -24 },   // 0x36 '6'
  {   333,  16,  25,  19,    2,  -24 },   // 0x37 '7'
  {   383,  17,  25,  19,    1,  -24 },   // 0x38 '8'
  {   437,  16,  25,  19,    1,  -24 },   // 0x39 '9'
  {   487,   3,  19,   9,    3,  -18 } }; // 0x3A ':'

const GFXfont FreeSans18pt7b PROGMEM = {
  (uint8_t  *)FreeSans18pt7bBitmaps,
  (GFXglyph *)FreeSans18pt7bGlyphs,
  0x30, 0x3A, 42 };

// Approx. 579 bytes

#endif // FreeSans18pt7b_H
