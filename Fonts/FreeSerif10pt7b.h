#ifndef FreeSerif10pt7b_H
#define FreeSerif10pt7b_H

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

const uint8_t FreeSerif10pt7bBitmaps[] PROGMEM = {
  0x00, 0x3F, 0xFE, 0x80, 0xF0, 0xCF, 0x3C, 0xF3, 0x88, 0x09, 0x86, 0x41,
  0x10, 0x44, 0x7F, 0xC4, 0x41, 0x30, 0xC8, 0xFF, 0x88, 0x82, 0x20, 0x88,
  0x22, 0x00, 0x08, 0x1F, 0x1A, 0xD9, 0x2C, 0x87, 0x41, 0xE0, 0x3C, 0x0F,
  0x04, 0xE2, 0x71, 0x3C, 0xB3, 0xF0, 0x20, 0x1C, 0x20, 0xE7, 0xC3, 0x89,
  0x06, 0x12, 0x0C, 0x28, 0x18, 0xA3, 0x93, 0x4C, 0xB9, 0x31, 0x02, 0xE2,
  0x09, 0x84, 0x13, 0x10, 0x46, 0x61, 0x07, 0x80, 0x07, 0x00, 0x22, 0x01,
  0x88, 0x06, 0x20, 0x19, 0x00, 0x79, 0xE0, 0xC3, 0x0F, 0x88, 0x66, 0x23,
  0x0D, 0x0C, 0x38, 0x30, 0x60, 0xE1, 0xC5, 0xF9, 0xE0, 0xFF, 0x80, 0x00,
  0x44, 0x46, 0x23, 0x18, 0xC6, 0x31, 0x84, 0x30, 0x82, 0x08, 0x00, 0x04,
  0x10, 0x43, 0x08, 0x63, 0x18, 0xC6, 0x31, 0x18, 0x88, 0x80, 0x00, 0x62,
  0x9A, 0xDC, 0x72, 0xB6, 0x18, 0x08, 0x04, 0x02, 0x01, 0x0F, 0xF8, 0x40,
  0x20, 0x10, 0x08, 0x00, 0x6C, 0xA8, 0xF8, 0xF0, 0x04, 0x30, 0x82, 0x18,
  0x41, 0x0C, 0x20, 0x86, 0x10, 0x43, 0x00, 0x1E, 0x0C, 0xC6, 0x19, 0x02,
  0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x34, 0x09, 0x86, 0x33, 0x07,
  0x80, 0x37, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x3C, 0x3C, 0x23,
  0x20, 0xD0, 0x60, 0x30, 0x10, 0x18, 0x08, 0x08, 0x0C, 0x0C, 0x0C, 0x1F,
  0xF0, 0x7C, 0x8E, 0x06, 0x04, 0x1C, 0x3E, 0x0F, 0x03, 0x03, 0x03, 0x02,
  0x04, 0xF8, 0x02, 0x06, 0x0E, 0x16, 0x26, 0x26, 0x46, 0x86, 0x86, 0xFF,
  0x06, 0x06, 0x06, 0x00, 0x07, 0xC4, 0x02, 0x03, 0xC0, 0xF8, 0x0E, 0x07,
  0x01, 0x80, 0xC0, 0x60, 0x20, 0x23, 0xE0, 0x03, 0x87, 0x0E, 0x0E, 0x06,
  0x07, 0xF3, 0x8D, 0x83, 0xC1, 0xE0, 0xF0, 0x6C, 0x36, 0x30, 0xF0, 0x7F,
  0x81, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x10, 0x10,
  0x3C, 0x66, 0xC3, 0xC3, 0xE3, 0x74, 0x38, 0x2C, 0x46, 0xC3, 0xC3, 0xC3,
  0x66, 0x3C, 0x3C, 0x66, 0xC2, 0xC3, 0xC3, 0xC3, 0xC3, 0x63, 0x3F, 0x06,
  0x06, 0x0C, 0x1C, 0x38, 0x60, 0xF0, 0x03, 0xC0, 0xD8, 0x00, 0x03, 0x65,
  0x40, 0x00, 0x00, 0x70, 0x70, 0x70, 0x70, 0x30, 0x0E, 0x00, 0xE0, 0x0E,
  0x00, 0xF0, 0x04, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x80, 0x3C,
  0x01, 0xC0, 0x1C, 0x01, 0xC0, 0x30, 0x38, 0x38, 0x38, 0x38, 0x00, 0x00,
  0x3D, 0x8E, 0x1C, 0x30, 0x60, 0x81, 0x04, 0x08, 0x10, 0x20, 0x01, 0x83,
  0x00, 0x07, 0xC0, 0x60, 0xC3, 0x01, 0x98, 0x02, 0x63, 0xA7, 0x19, 0x9C,
  0x66, 0x73, 0x11, 0xCC, 0x47, 0x33, 0x26, 0x77, 0x0C, 0x00, 0x18, 0x10,
  0x1F, 0x80, 0x01, 0x00, 0x0C, 0x00, 0x38, 0x01, 0x60, 0x05, 0x80, 0x23,
  0x00, 0x8C, 0x06, 0x18, 0x1F, 0xE0, 0x40, 0xC2, 0x03, 0x18, 0x0E, 0xF0,
  0x7C, 0xFF, 0xC3, 0x06, 0x30, 0x33, 0x03, 0x30, 0x33, 0x06, 0x3F, 0x83,
  0x06, 0x30, 0x33, 0x03, 0x30, 0x33, 0x06, 0xFF, 0xC0, 0x0F, 0x93, 0x87,
  0x60, 0x36, 0x03, 0xC0, 0x1C, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x0C, 0x00,
  0x60, 0x06, 0x01, 0x38, 0x20, 0xFC, 0xFF, 0x80, 0xC3, 0xC3, 0x03, 0x8C,
  0x06, 0x30, 0x0C, 0xC0, 0x33, 0x00, 0xCC, 0x03, 0x30, 0x0C, 0xC0, 0x63,
  0x03, 0x8C, 0x1C, 0xFF, 0xC0, 0xFF, 0xCC, 0x09, 0x80, 0x30, 0x06, 0x00,
  0xC1, 0x1F, 0xE3, 0x04, 0x60, 0x0C, 0x01, 0x80, 0xB0, 0x2F, 0xFC, 0xFF,
  0xD8, 0x16, 0x01, 0x80, 0x60, 0x18, 0x27, 0xF9, 0x82, 0x60, 0x18, 0x06,
  0x01, 0x80, 0xF0, 0x00, 0x0F, 0x91, 0xC3, 0x98, 0x0C, 0xC0, 0x2C, 0x00,
  0x60, 0x03, 0x01, 0xF8, 0x06, 0xC0, 0x36, 0x01, 0x98, 0x0C, 0xC0, 0x63,
  0x83, 0x07, 0xE0, 0xF0, 0xF6, 0x06, 0x60, 0x66, 0x06, 0x60, 0x66, 0x06,
  0x7F, 0xE6, 0x06, 0x60, 0x66, 0x06, 0x60, 0x66, 0x06, 0xF0, 0xF0, 0xFB,
  0x18, 0xC6, 0x31, 0x8C, 0x63, 0x18, 0xCF, 0x80, 0x1E, 0x18, 0x30, 0x60,
  0xC1, 0x83, 0x06, 0x0C, 0x18, 0x36, 0x4F, 0x00, 0xF1, 0xF3, 0x06, 0x18,
  0x60, 0xC6, 0x06, 0x60, 0x34, 0x01, 0xF0, 0x0D, 0xC0, 0x63, 0x03, 0x0C,
  0x18, 0x30, 0xC1, 0xCF, 0x1F, 0x80, 0xF0, 0x06, 0x00, 0x60, 0x06, 0x00,
  0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x36, 0x06,
  0xFF, 0xE0, 0xF8, 0x03, 0x9C, 0x03, 0x8F, 0x01, 0xC7, 0x81, 0x62, 0xE0,
  0xB1, 0x70, 0x98, 0x9C, 0x4C, 0x4E, 0x46, 0x23, 0xA3, 0x10, 0xE1, 0x88,
  0x70, 0xC4, 0x10, 0x67, 0x08, 0x78, 0xE0, 0x77, 0x02, 0x78, 0x25, 0x82,
  0x5C, 0x24, 0xE2, 0x47, 0x24, 0x3A, 0x41, 0xA4, 0x0E, 0x40, 0xE4, 0x06,
  0xE0, 0x20, 0x0F, 0x03, 0x0C, 0x60, 0x66, 0x06, 0xC0, 0x3C, 0x03, 0xC0,
  0x3C, 0x03, 0xC0, 0x3C, 0x03, 0x60, 0x66, 0x06, 0x30, 0xC0, 0xF0, 0xFF,
  0x18, 0x66, 0x0D, 0x83, 0x60, 0xD8, 0x36, 0x19, 0xFC, 0x60, 0x18, 0x06,
  0x01, 0x80, 0xF0, 0x00, 0x0F, 0x03, 0x0C, 0x60, 0x66, 0x06, 0xC0, 0x3C,
  0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0x40, 0x66, 0x06, 0x30, 0xC1,
  0xF8, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x07, 0xFF, 0x06, 0x18, 0x60, 0xC6,
  0x0C, 0x60, 0xC6, 0x18, 0x7E, 0x06, 0x60, 0x67, 0x06, 0x38, 0x61, 0xC6,
  0x0E, 0xF0, 0x70, 0x1E, 0x8C, 0x66, 0x09, 0x81, 0x70, 0x0E, 0x01, 0xE0,
  0x1E, 0x01, 0xC0, 0x38, 0x0D, 0x03, 0x61, 0x97, 0xC0, 0xFF, 0xFC, 0x63,
  0x86, 0x10, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60, 0x06, 0x00, 0x60,
  0x06, 0x00, 0x60, 0x0F, 0x00, 0xF0, 0x76, 0x02, 0x60, 0x26, 0x02, 0x60,
  0x26, 0x02, 0x60, 0x26, 0x02, 0x60, 0x26, 0x02, 0x60, 0x23, 0x04, 0x1F,
  0x80, 0xFC, 0x3D, 0xC0, 0x63, 0x01, 0x06, 0x04, 0x18, 0x20, 0x30, 0x80,
  0xC4, 0x01, 0x90, 0x06, 0x80, 0x0E, 0x00, 0x38, 0x00, 0x40, 0x01, 0x00,
  0xFB, 0xF1, 0xEE, 0x18, 0x18, 0xC3, 0x02, 0x18, 0x30, 0x41, 0x86, 0x10,
  0x31, 0x62, 0x03, 0x2C, 0x80, 0x65, 0xD0, 0x0F, 0x1A, 0x00, 0xE3, 0x80,
  0x18, 0x30, 0x01, 0x06, 0x00, 0x20, 0x80, 0xFC, 0x7C, 0xE0, 0x41, 0x82,
  0x03, 0x10, 0x06, 0x80, 0x1C, 0x00, 0x38, 0x01, 0xE0, 0x0C, 0xC0, 0x23,
  0x81, 0x07, 0x08, 0x0E, 0xF8, 0xFC, 0xFC, 0x7D, 0xC0, 0x43, 0x82, 0x07,
  0x08, 0x0C, 0x40, 0x1A, 0x00, 0x70, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x00,
  0x30, 0x00, 0xC0, 0x0F, 0xC0, 0x3F, 0xE6, 0x0C, 0x40, 0xC0, 0x18, 0x03,
  0x00, 0x70, 0x06, 0x00, 0xC0, 0x1C, 0x03, 0x81, 0x38, 0x17, 0x02, 0xFF,
  0xE0, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCF, 0x83, 0x04, 0x10,
  0x60, 0x82, 0x0C, 0x10, 0x41, 0x82, 0x08, 0x30, 0xF3, 0x33, 0x33, 0x33,
  0x33, 0x33, 0x33, 0x3F, 0x0C, 0x0E, 0x05, 0x86, 0x42, 0x33, 0x09, 0x06,
  0xFF, 0xC0, 0x84, 0x20, 0x79, 0x9B, 0x30, 0x63, 0xC9, 0xB3, 0x66, 0x7E,
  0x20, 0x70, 0x18, 0x0C, 0x06, 0x03, 0x71, 0xCC, 0xC3, 0x61, 0xB0, 0xD8,
  0x6C, 0x26, 0x31, 0xE0, 0x3C, 0xCD, 0x06, 0x0C, 0x18, 0x30, 0x31, 0x3C,
  0x01, 0x03, 0x80, 0xC0, 0x60, 0x31, 0xD9, 0x9C, 0x86, 0xC3, 0x61, 0xB0,
  0xD8, 0x66, 0x31, 0xF8, 0x1E, 0x31, 0xBF, 0xD8, 0x0C, 0x06, 0x03, 0x84,
  0xE2, 0x3E, 0x00, 0x0F, 0x13, 0x30, 0x30, 0x30, 0x7C, 0x30, 0x30, 0x30,
  0x30, 0x30, 0x30, 0x30, 0xF8, 0x1C, 0x09, 0xF6, 0x31, 0x8C, 0x73, 0x07,
  0x82, 0x01, 0x00, 0x7F, 0x10, 0x2C, 0x0B, 0x02, 0xE1, 0x1F, 0x80, 0x20,
  0x38, 0x06, 0x01, 0x80, 0x60, 0x1B, 0xC7, 0x19, 0x86, 0x61, 0x98, 0x66,
  0x19, 0x86, 0x61, 0xBC, 0xF0, 0x31, 0x80, 0x00, 0x09, 0xC6, 0x31, 0x8C,
  0x63, 0x7C, 0x0C, 0x30, 0x00, 0x00, 0x31, 0xC3, 0x0C, 0x30, 0xC3, 0x0C,
  0x30, 0xC3, 0x0C, 0x2F, 0x00, 0x20, 0x38, 0x06, 0x01, 0x80, 0x60, 0x19,
  0xE6, 0x21, 0x90, 0x78, 0x1E, 0x06, 0xC1, 0x98, 0x63, 0x3D, 0xF0, 0x13,
  0x8C, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0x63, 0x7C, 0xEE, 0x71, 0xCE, 0x66,
  0x31, 0x98, 0xC6, 0x63, 0x19, 0x8C, 0x66, 0x31, 0x98, 0xC6, 0xF7, 0xBC,
  0xEF, 0x1C, 0x66, 0x19, 0x86, 0x61, 0x98, 0x66, 0x19, 0x86, 0xF3, 0xC0,
  0x3E, 0x31, 0xB0, 0xF8, 0x3C, 0x1E, 0x0F, 0x86, 0xC6, 0x3E, 0x00, 0xEE,
  0x39, 0x98, 0x6C, 0x36, 0x1B, 0x0D, 0x84, 0xC6, 0x7E, 0x30, 0x18, 0x0C,
  0x06, 0x07, 0x80, 0x3D, 0x31, 0x90, 0xD8, 0x6C, 0x36, 0x1B, 0x0C, 0xC6,
  0x3F, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x3C, 0x6C, 0xE1, 0x83, 0x06, 0x0C,
  0x18, 0x30, 0xF0, 0x76, 0x38, 0x70, 0x78, 0x78, 0xF3, 0xB8, 0x21, 0x8F,
  0x18, 0x61, 0x86, 0x18, 0x61, 0x83, 0x80, 0xE3, 0x98, 0x66, 0x19, 0x86,
  0x61, 0x98, 0x66, 0x19, 0x8E, 0x3D, 0xC0, 0xF3, 0xB0, 0x88, 0x46, 0x41,
  0x20, 0xD0, 0x30, 0x18, 0x08, 0x00, 0xF7, 0x9D, 0x8C, 0x26, 0x31, 0x08,
  0x44, 0x33, 0x90, 0x52, 0x81, 0xCE, 0x02, 0x10, 0x08, 0x40, 0xF7, 0x99,
  0x0D, 0x03, 0x00, 0xC0, 0xB0, 0x98, 0x86, 0xE7, 0x80, 0xF1, 0xB0, 0x58,
  0x46, 0x23, 0x20, 0xD0, 0x68, 0x18, 0x0C, 0x02, 0x02, 0x01, 0x05, 0x03,
  0x80, 0xFE, 0x86, 0x0C, 0x18, 0x10, 0x30, 0x61, 0xC3, 0xFE, 0x19, 0x8C,
  0x63, 0x18, 0xC6, 0x63, 0x0C, 0x63, 0x18, 0xC6, 0x30, 0xC0, 0xFF, 0xFC,
  0xC3, 0x18, 0xC6, 0x31, 0x8C, 0x31, 0x98, 0xC6, 0x31, 0x8C, 0x66, 0x00,
  0x78, 0x91, 0xE0 };

const GFXglyph FreeSerif10pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   5,    0,    0 },   // 0x20 ' '
  {     1,   2,  14,   7,    3,  -13 },   // 0x21 '!'
  {     5,   6,   5,   8,    1,  -13 },   // 0x22 '"'
  {     9,  10,  13,  10,    0,  -12 },   // 0x23 '#'
  {    26,   9,  15,  10,    1,  -13 },   // 0x24 '$'
  {    43,  15,  13,  17,    1,  -12 },   // 0x25 '%'
  {    68,  14,  14,  16,    1,  -13 },   // 0x26 '&'
  {    93,   2,   5,   4,    1,  -13 },   // 0x27 '''
  {    95,   5,  18,   7,    1,  -13 },   // 0x28 '('
  {   107,   5,  18,   7,    1,  -13 },   // 0x29 ')'
  {   119,   6,   8,  10,    3,  -12 },   // 0x2A '*'
  {   125,   9,   9,  11,    1,   -8 },   // 0x2B '+'
  {   136,   3,   5,   5,    1,   -1 },   // 0x2C ','
  {   138,   5,   1,   7,    1,   -4 },   // 0x2D '-'
  {   139,   2,   2,   5,    1,   -1 },   // 0x2E '.'
  {   140,   6,  14,   6,    0,  -13 },   // 0x2F '/'
  {   151,  10,  14,  10,    0,  -13 },   // 0x30 '0'
  {   169,   5,  14,  10,    2,  -13 },   // 0x31 '1'
  {   178,   9,  13,  10,    1,  -12 },   // 0x32 '2'
  {   193,   8,  13,  10,    1,  -12 },   // 0x33 '3'
  {   206,   8,  13,  10,    1,  -12 },   // 0x34 '4'
  {   219,   9,  14,  10,    0,  -13 },   // 0x35 '5'
  {   235,   9,  14,  10,    1,  -13 },   // 0x36 '6'
  {   251,   8,  13,  10,    0,  -12 },   // 0x37 '7'
  {   264,   8,  14,  10,    1,  -13 },   // 0x38 '8'
  {   278,   8,  15,  10,    1,  -13 },   // 0x39 '9'
  {   293,   2,   9,   5,    1,   -8 },   // 0x3A ':'
  {   296,   3,  12,   5,    1,   -8 },   // 0x3B ';'
  {   301,  10,  11,  11,    1,  -10 },   // 0x3C '<'
  {   315,  10,   5,  11,    1,   -6 },   // 0x3D '='
  {   322,  10,  11,  11,    0,   -9 },   // 0x3E '>'
  {   336,   7,  14,   9,    1,  -13 },   // 0x3F '?'
  {   349,  14,  14,  17,    2,  -13 },   // 0x40 '@'
  {   374,  14,  13,  14,    0,  -12 },   // 0x41 'A'
  {   397,  12,  13,  13,    0,  -12 },   // 0x42 'B'
  {   417,  12,  14,  13,    1,  -13 },   // 0x43 'C'
  {   438,  14,  13,  14,    0,  -12 },   // 0x44 'D'
  {   461,  11,  13,  12,    1,  -12 },   // 0x45 'E'
  {   479,  10,  13,  11,    1,  -12 },   // 0x46 'F'
  {   496,  13,  14,  14,    1,  -13 },   // 0x47 'G'
  {   519,  12,  13,  14,    1,  -12 },   // 0x48 'H'
  {   539,   5,  13,   7,    1,  -12 },   // 0x49 'I'
  {   548,   7,  13,   8,    0,  -12 },   // 0x4A 'J'
  {   560,  13,  13,  14,    1,  -12 },   // 0x4B 'K'
  {   582,  12,  13,  12,    1,  -12 },   // 0x4C 'L'
  {   602,  17,  13,  18,    0,  -12 },   // 0x4D 'M'
  {   630,  12,  13,  15,    1,  -12 },   // 0x4E 'N'
  {   650,  12,  14,  14,    1,  -13 },   // 0x4F 'O'
  {   671,  10,  13,  12,    1,  -12 },   // 0x50 'P'
  {   688,  12,  18,  14,    1,  -13 },   // 0x51 'Q'
  {   715,  12,  13,  13,    1,  -12 },   // 0x52 'R'
  {   735,  10,  14,  11,    0,  -13 },   // 0x53 'S'
  {   753,  12,  13,  12,    0,  -12 },   // 0x54 'T'
  {   773,  12,  13,  14,    1,  -12 },   // 0x55 'U'
  {   793,  14,  13,  14,    0,  -12 },   // 0x56 'V'
  {   816,  19,  13,  19,    0,  -12 },   // 0x57 'W'
  {   847,  14,  13,  14,    0,  -12 },   // 0x58 'X'
  {   870,  14,  13,  14,    0,  -12 },   // 0x59 'Y'
  {   893,  12,  13,  12,    0,  -12 },   // 0x5A 'Z'
  {   913,   4,  16,   7,    2,  -12 },   // 0x5B '['
  {   921,   6,  14,   6,    0,  -13 },   // 0x5C '\'
  {   932,   4,  16,   7,    1,  -12 },   // 0x5D ']'
  {   940,   9,   7,   9,    0,  -12 },   // 0x5E '^'
  {   948,  10,   1,  10,    0,    3 },   // 0x5F '_'
  {   950,   4,   3,   5,    0,  -12 },   // 0x60 '`'
  {   952,   7,   9,   9,    1,   -8 },   // 0x61 'a'
  {   960,   9,  14,  10,    1,  -13 },   // 0x62 'b'
  {   976,   7,   9,   9,    1,   -8 },   // 0x63 'c'
  {   984,   9,  14,  10,    1,  -13 },   // 0x64 'd'
  {  1000,   9,   9,   9,    1,   -8 },   // 0x65 'e'
  {  1011,   8,  14,   7,    0,  -13 },   // 0x66 'f'
  {  1025,  10,  14,   9,    0,   -8 },   // 0x67 'g'
  {  1043,  10,  14,  10,    0,  -13 },   // 0x68 'h'
  {  1061,   5,  14,   6,    0,  -13 },   // 0x69 'i'
  {  1070,   6,  19,   7,    0,  -13 },   // 0x6A 'j'
  {  1085,  10,  14,  10,    1,  -13 },   // 0x6B 'k'
  {  1103,   5,  14,   5,    0,  -13 },   // 0x6C 'l'
  {  1112,  14,   9,  16,    1,   -8 },   // 0x6D 'm'
  {  1128,  10,   9,  10,    0,   -8 },   // 0x6E 'n'
  {  1140,   9,   9,  10,    1,   -8 },   // 0x6F 'o'
  {  1151,   9,  14,  10,    1,   -8 },   // 0x70 'p'
  {  1167,   9,  14,  10,    1,   -8 },   // 0x71 'q'
  {  1183,   7,   9,   7,    1,   -8 },   // 0x72 'r'
  {  1191,   6,   9,   7,    1,   -8 },   // 0x73 's'
  {  1198,   6,  11,   6,    0,  -10 },   // 0x74 't'
  {  1207,  10,   9,  10,    0,   -8 },   // 0x75 'u'
  {  1219,   9,   9,   9,    0,   -8 },   // 0x76 'v'
  {  1230,  14,   9,  14,    0,   -8 },   // 0x77 'w'
  {  1246,   9,   9,  10,    0,   -8 },   // 0x78 'x'
  {  1257,   9,  14,   9,    0,   -8 },   // 0x79 'y'
  {  1273,   8,   9,   8,    1,   -8 },   // 0x7A 'z'
  {  1282,   5,  18,  10,    2,  -13 },   // 0x7B '{'
  {  1294,   1,  14,   4,    1,  -13 },   // 0x7C '|'
  {  1296,   5,  18,  10,    3,  -13 },   // 0x7D '}'
  {  1308,  10,   2,  10,    0,   -5 } }; // 0x7E '~'

const GFXfont FreeSerif10pt7b PROGMEM = {
  (uint8_t  *)FreeSerif10pt7bBitmaps,
  (GFXglyph *)FreeSerif10pt7bGlyphs,
  0x20, 0x7E, 24 };

// Approx. 1983 bytes

#endif // FreeSerif10pt7b_H
