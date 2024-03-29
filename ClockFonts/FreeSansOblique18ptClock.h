#ifndef FreeSansOblique18pt7b_H
#define FreeSansOblique18pt7b_H

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

const uint8_t FreeSansOblique18pt7bBitmaps[] PROGMEM = {
  0x00, 0x7C, 0x00, 0x7F, 0xC0, 0x7F, 0xF8, 0x3E, 0x1E, 0x0F, 0x03, 0xC7,
  0x80, 0x71, 0xC0, 0x1C, 0xE0, 0x07, 0x38, 0x01, 0xDE, 0x00, 0x77, 0x00,
  0x1D, 0xC0, 0x0F, 0x70, 0x03, 0xFC, 0x00, 0xEE, 0x00, 0x3B, 0x80, 0x0E,
  0xE0, 0x07, 0xB8, 0x01, 0xCE, 0x00, 0xF3, 0x80, 0x38, 0xF0, 0x1E, 0x1E,
  0x1F, 0x07, 0xFF, 0x80, 0xFF, 0xC0, 0x0F, 0xC0, 0x00, 0x00, 0xC0, 0x70,
  0x3C, 0x3E, 0xFF, 0xBF, 0xEF, 0xF8, 0x1E, 0x07, 0x01, 0xC0, 0x70, 0x1C,
  0x0F, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x07, 0x81, 0xC0, 0x70, 0x1C, 0x07,
  0x01, 0xC0, 0xE0, 0x38, 0x00, 0x00, 0x3F, 0x00, 0x1F, 0xFC, 0x03, 0xFF,
  0xE0, 0x7C, 0x1E, 0x07, 0x80, 0xF0, 0xF0, 0x07, 0x0E, 0x00, 0x70, 0xE0,
  0x07, 0x00, 0x00, 0x70, 0x00, 0x0E, 0x00, 0x01, 0xE0, 0x00, 0x3C, 0x00,
  0x0F, 0x80, 0x03, 0xF0, 0x00, 0xFC, 0x00, 0x1F, 0x00, 0x07, 0xC0, 0x00,
  0xF0, 0x00, 0x1E, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00,
  0xFF, 0xFF, 0x8F, 0xFF, 0xF0, 0xFF, 0xFF, 0x00, 0x00, 0x7E, 0x00, 0x3F,
  0xF0, 0x0F, 0xFF, 0x03, 0xC1, 0xF0, 0x70, 0x0E, 0x1C, 0x01, 0xC3, 0x80,
  0x38, 0xE0, 0x07, 0x00, 0x01, 0xC0, 0x00, 0xF0, 0x03, 0xFC, 0x00, 0x7F,
  0x00, 0x0F, 0xF0, 0x00, 0x1F, 0x00, 0x00, 0xE0, 0x00, 0x1C, 0x00, 0x03,
  0x9C, 0x00, 0x73, 0x80, 0x1E, 0x70, 0x03, 0x8F, 0x00, 0xF1, 0xF0, 0x7C,
  0x1F, 0xFF, 0x01, 0xFF, 0xC0, 0x0F, 0xC0, 0x00, 0x00, 0x01, 0xC0, 0x00,
  0xE0, 0x00, 0x78, 0x00, 0x3E, 0x00, 0x1F, 0x80, 0x0F, 0xE0, 0x07, 0xF0,
  0x03, 0xDC, 0x01, 0xE7, 0x00, 0x71, 0xC0, 0x38, 0xF0, 0x1C, 0x38, 0x0E,
  0x0E, 0x07, 0x03, 0x83, 0x80, 0xE1, 0xC0, 0x70, 0x7F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x70, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80,
  0x00, 0xE0, 0x00, 0x38, 0x00, 0x01, 0xFF, 0xF0, 0x3F, 0xFF, 0x03, 0xFF,
  0xE0, 0x78, 0x00, 0x07, 0x00, 0x00, 0x70, 0x00, 0x0E, 0x00, 0x00, 0xE0,
  0x00, 0x0E, 0xFC, 0x01, 0xFF, 0xF0, 0x1F, 0xFF, 0x83, 0xE0, 0x78, 0x3C,
  0x03, 0xC0, 0x00, 0x1C, 0x00, 0x01, 0xC0, 0x00, 0x1C, 0x00, 0x01, 0xC0,
  0x00, 0x18, 0x00, 0x03, 0x8E, 0x00, 0x78, 0xE0, 0x0F, 0x0F, 0x81, 0xE0,
  0x7F, 0xFC, 0x03, 0xFF, 0x80, 0x0F, 0xE0, 0x00, 0x00, 0x7F, 0x00, 0x3F,
  0xF0, 0x0F, 0xFF, 0x03, 0xE1, 0xF0, 0xF0, 0x0E, 0x1C, 0x01, 0xC7, 0x00,
  0x01, 0xE0, 0x00, 0x38, 0x00, 0x07, 0x1F, 0x01, 0xCF, 0xF8, 0x3B, 0xFF,
  0x87, 0xE0, 0xF8, 0xF0, 0x0F, 0x3C, 0x00, 0xE7, 0x80, 0x1C, 0xE0, 0x03,
  0x9C, 0x00, 0x73, 0x80, 0x1C, 0x70, 0x03, 0x8F, 0x00, 0xE0, 0xF0, 0x78,
  0x1F, 0xFF, 0x01, 0xFF, 0x80, 0x0F, 0xC0, 0x00, 0x3F, 0xFF, 0xCF, 0xFF,
  0xF7, 0xFF, 0xFC, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x00, 0xC0,
  0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x01,
  0xC0, 0x00, 0xE0, 0x00, 0x78, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x03, 0x80,
  0x01, 0xC0, 0x00, 0xF0, 0x00, 0x38, 0x00, 0x1E, 0x00, 0x07, 0x00, 0x03,
  0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x3F, 0xF0, 0x1F, 0xFF,
  0x07, 0xC1, 0xF0, 0xE0, 0x0E, 0x38, 0x01, 0xC7, 0x00, 0x38, 0xE0, 0x0E,
  0x1C, 0x01, 0xC3, 0xC0, 0xF0, 0x3F, 0xFC, 0x03, 0xFE, 0x01, 0xFF, 0xF0,
  0x7C, 0x1E, 0x1E, 0x01, 0xE3, 0x80, 0x1C, 0xE0, 0x03, 0x9C, 0x00, 0x73,
  0x80, 0x0E, 0x70, 0x03, 0x8F, 0x00, 0xF1, 0xF0, 0x7C, 0x1F, 0xFF, 0x01,
  0xFF, 0xC0, 0x0F, 0xC0, 0x00, 0x00, 0x7E, 0x00, 0x3F, 0xF0, 0x1F, 0xFF,
  0x07, 0xC1, 0xE0, 0xE0, 0x1E, 0x38, 0x01, 0xC7, 0x00, 0x39, 0xC0, 0x07,
  0x38, 0x00, 0xE7, 0x00, 0x3C, 0xE0, 0x07, 0x9E, 0x01, 0xE3, 0xE0, 0xFC,
  0x3F, 0xFB, 0x83, 0xFE, 0xF0, 0x3F, 0x1C, 0x00, 0x03, 0x80, 0x00, 0xF0,
  0x00, 0x1C, 0x70, 0x07, 0x8E, 0x01, 0xE1, 0xF0, 0xF8, 0x1F, 0xFE, 0x01,
  0xFF, 0x80, 0x1F, 0xC0, 0x00, 0x0E, 0x3C, 0x78, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0xF1, 0xE3, 0x80 };

const GFXglyph FreeSansOblique18pt7bGlyphs[] PROGMEM = {
  {     0,  18,  25,  19,    3,  -24 },   // 0x30 '0'
  {    57,  10,  25,  19,    7,  -24 },   // 0x31 '1'
  {    89,  20,  25,  19,    2,  -24 },   // 0x32 '2'
  {   152,  19,  25,  19,    2,  -24 },   // 0x33 '3'
  {   212,  18,  25,  19,    2,  -24 },   // 0x34 '4'
  {   269,  20,  25,  19,    2,  -24 },   // 0x35 '5'
  {   332,  19,  25,  19,    3,  -24 },   // 0x36 '6'
  {   392,  18,  25,  19,    5,  -24 },   // 0x37 '7'
  {   449,  19,  25,  19,    3,  -24 },   // 0x38 '8'
  {   509,  19,  25,  19,    2,  -24 },   // 0x39 '9'
  {   569,   7,  19,  10,    4,  -18 } }; // 0x3A ':'

const GFXfont FreeSansOblique18pt7b PROGMEM = {
  (uint8_t  *)FreeSansOblique18pt7bBitmaps,
  (GFXglyph *)FreeSansOblique18pt7bGlyphs,
  0x30, 0x3A, 42 };

// Approx. 670 bytes

#endif // FreeSansOblique18pt7b_H
