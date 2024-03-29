#ifndef FreeSansOblique9pt7b_H
#define FreeSansOblique9pt7b_H

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

const uint8_t FreeSansOblique9pt7bBitmaps[] PROGMEM = {
  0x00, 0x10, 0x84, 0x22, 0x10, 0x84, 0x42, 0x10, 0x08, 0x00, 0xDE, 0xE5,
  0x20, 0x06, 0x40, 0x88, 0x13, 0x06, 0x43, 0xFE, 0x32, 0x04, 0x40, 0x98,
  0x32, 0x1F, 0xF0, 0x98, 0x22, 0x04, 0xC0, 0x02, 0x01, 0xF8, 0x6B, 0x99,
  0x33, 0x40, 0x68, 0x0F, 0x00, 0xF8, 0x07, 0xC1, 0x1B, 0x23, 0x64, 0x4E,
  0x98, 0xFC, 0x04, 0x00, 0x80, 0x3C, 0x08, 0xCC, 0x23, 0x18, 0x86, 0x32,
  0x0C, 0x64, 0x19, 0x90, 0x1E, 0x40, 0x01, 0x1E, 0x02, 0x66, 0x09, 0x8C,
  0x23, 0x18, 0x86, 0x62, 0x07, 0x80, 0x0F, 0x06, 0x63, 0x18, 0xC6, 0x3F,
  0x07, 0x03, 0xC1, 0xB3, 0xC7, 0xB0, 0xCC, 0x33, 0x3E, 0x79, 0x80, 0xFA,
  0x04, 0x10, 0x60, 0x83, 0x04, 0x18, 0x30, 0xC1, 0x83, 0x06, 0x0C, 0x18,
  0x10, 0x30, 0x20, 0x08, 0x18, 0x10, 0x30, 0x60, 0xC1, 0x83, 0x06, 0x18,
  0x30, 0x41, 0x82, 0x0C, 0x10, 0x40, 0x19, 0x73, 0x16, 0x48, 0x04, 0x04,
  0x02, 0x1F, 0xF0, 0x80, 0x80, 0x40, 0x20, 0x6D, 0x28, 0xF0, 0xC0, 0x01,
  0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80,
  0x0F, 0x19, 0xC8, 0x6C, 0x36, 0x1A, 0x0F, 0x05, 0x86, 0xC3, 0x61, 0xB1,
  0x9C, 0x87, 0x80, 0x08, 0xCD, 0xE3, 0x18, 0xC4, 0x23, 0x18, 0xC4, 0x00,
  0x07, 0x83, 0x1C, 0x41, 0x98, 0x30, 0x06, 0x01, 0x80, 0x60, 0x38, 0x1C,
  0x06, 0x01, 0x80, 0x20, 0x0F, 0xF8, 0x0F, 0x86, 0x73, 0x0C, 0x83, 0x00,
  0xC0, 0x60, 0xE0, 0x06, 0x01, 0xB0, 0x6C, 0x13, 0x8C, 0x7C, 0x00, 0x00,
  0x80, 0xC0, 0xE0, 0xA0, 0x90, 0x98, 0x8C, 0x86, 0xFF, 0x81, 0x01, 0x80,
  0xC0, 0x60, 0x0F, 0xC3, 0x00, 0x40, 0x08, 0x03, 0x00, 0x7F, 0x1C, 0x70,
  0x06, 0x00, 0xC0, 0x1B, 0x06, 0x71, 0x87, 0xE0, 0x0F, 0x86, 0x73, 0x0D,
  0x80, 0x60, 0x1F, 0xCF, 0x3B, 0x86, 0xC1, 0xB0, 0x6C, 0x33, 0x98, 0x3C,
  0x00, 0x7F, 0xC0, 0x20, 0x10, 0x0C, 0x06, 0x01, 0x00, 0x80, 0x60, 0x10,
  0x0C, 0x02, 0x01, 0x80, 0x40, 0x00, 0x0F, 0x86, 0x73, 0x0C, 0xC3, 0x30,
  0xCC, 0x61, 0xE1, 0x86, 0x41, 0xB0, 0x6C, 0x13, 0x8C, 0x3E, 0x00, 0x0F,
  0x06, 0x73, 0x0D, 0x83, 0x60, 0xD8, 0x77, 0x3C, 0xFE, 0x01, 0x80, 0x6C,
  0x33, 0x98, 0x7C, 0x00, 0x30, 0x00, 0x00, 0x00, 0xC0, 0x18, 0x00, 0x00,
  0x00, 0x0C, 0x62, 0x11, 0x00, 0x00, 0x01, 0xC3, 0x8F, 0x0C, 0x07, 0x00,
  0xE0, 0x1E, 0x03, 0x00, 0x7F, 0xC0, 0x00, 0x03, 0xFE, 0x60, 0x3C, 0x03,
  0x80, 0x70, 0x18, 0x78, 0xE1, 0xC0, 0x00, 0x00, 0x1F, 0x30, 0xD0, 0x78,
  0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00,
  0xFE, 0x00, 0xC0, 0xE0, 0xC0, 0x18, 0x61, 0xD3, 0x31, 0x9C, 0xD8, 0xC2,
  0x36, 0x31, 0x8F, 0x18, 0x67, 0xC6, 0x11, 0xB1, 0x8C, 0xCC, 0x67, 0x63,
  0x0E, 0xF0, 0x60, 0x00, 0x1C, 0x00, 0x01, 0x81, 0x00, 0x1F, 0xC0, 0x01,
  0xC0, 0x1C, 0x03, 0xC0, 0x24, 0x06, 0x60, 0x46, 0x0C, 0x61, 0x86, 0x1F,
  0xE3, 0x06, 0x20, 0x26, 0x03, 0x40, 0x30, 0x1F, 0xE1, 0x87, 0x30, 0x33,
  0x03, 0x30, 0x23, 0x06, 0x3F, 0xC6, 0x06, 0x60, 0x66, 0x06, 0x60, 0x66,
  0x0C, 0x7F, 0x80, 0x07, 0xC1, 0x86, 0x30, 0x32, 0x03, 0x60, 0x04, 0x00,
  0xC0, 0x0C, 0x00, 0xC0, 0x6C, 0x06, 0xC0, 0xC6, 0x18, 0x3E, 0x00, 0x1F,
  0xE0, 0xC1, 0x84, 0x06, 0x60, 0x33, 0x01, 0x98, 0x0C, 0x80, 0x64, 0x02,
  0x60, 0x33, 0x01, 0x98, 0x18, 0x81, 0x87, 0xF0, 0x00, 0x1F, 0xF1, 0x80,
  0x10, 0x03, 0x00, 0x30, 0x03, 0x00, 0x3F, 0xE2, 0x00, 0x60, 0x06, 0x00,
  0x60, 0x04, 0x00, 0x7F, 0xC0, 0x1F, 0xF1, 0x80, 0x10, 0x03, 0x00, 0x30,
  0x03, 0x00, 0x3F, 0xC2, 0x00, 0x60, 0x06, 0x00, 0x60, 0x04, 0x00, 0x40,
  0x00, 0x07, 0xE0, 0xE1, 0x8C, 0x06, 0xC0, 0x36, 0x00, 0x60, 0x03, 0x07,
  0xF8, 0x02, 0xC0, 0x36, 0x01, 0x98, 0x1C, 0xE1, 0xC1, 0xF2, 0x00, 0x18,
  0x08, 0xC0, 0xC4, 0x06, 0x60, 0x33, 0x01, 0x18, 0x18, 0xFF, 0xC4, 0x06,
  0x60, 0x23, 0x01, 0x18, 0x18, 0x80, 0xC4, 0x06, 0x00, 0x33, 0x32, 0x26,
  0x66, 0x44, 0xCC, 0xC0, 0x00, 0xC0, 0x60, 0x18, 0x06, 0x01, 0x80, 0x60,
  0x30, 0x0C, 0x03, 0x30, 0xCC, 0x63, 0x18, 0x7C, 0x00, 0x18, 0x18, 0x60,
  0xC1, 0x0E, 0x0C, 0x60, 0x33, 0x00, 0xD8, 0x03, 0xF0, 0x0C, 0xC0, 0x61,
  0x81, 0x86, 0x06, 0x0C, 0x10, 0x30, 0x40, 0x60, 0x18, 0x0C, 0x04, 0x06,
  0x03, 0x01, 0x80, 0xC0, 0x40, 0x60, 0x30, 0x18, 0x08, 0x07, 0xF8, 0x18,
  0x06, 0x18, 0x0E, 0x18, 0x0E, 0x34, 0x1E, 0x34, 0x36, 0x34, 0x34, 0x24,
  0x64, 0x24, 0x6C, 0x64, 0xCC, 0x64, 0x8C, 0x65, 0x88, 0x43, 0x08, 0x43,
  0x18, 0x18, 0x08, 0xE0, 0x47, 0x06, 0x6C, 0x33, 0x61, 0x99, 0x08, 0x8C,
  0xC4, 0x66, 0x61, 0xB3, 0x0D, 0x18, 0x38, 0x81, 0xC4, 0x06, 0x00, 0x07,
  0xC0, 0xC3, 0x8C, 0x0E, 0xC0, 0x36, 0x01, 0xE0, 0x0F, 0x00, 0x78, 0x03,
  0xC0, 0x36, 0x01, 0xB8, 0x18, 0xE1, 0x81, 0xF0, 0x00, 0x1F, 0xE1, 0x83,
  0x10, 0x33, 0x03, 0x30, 0x33, 0x06, 0x3F, 0xC2, 0x00, 0x60, 0x06, 0x00,
  0x60, 0x04, 0x00, 0x40, 0x00, 0x07, 0xC0, 0xC3, 0x8C, 0x0E, 0xC0, 0x36,
  0x01, 0xE0, 0x0F, 0x00, 0x78, 0x03, 0xC0, 0x36, 0x09, 0xB8, 0x78, 0xE3,
  0x81, 0xF6, 0x00, 0x10, 0x1F, 0xF0, 0xC0, 0xC4, 0x06, 0x60, 0x33, 0x01,
  0x18, 0x18, 0xFF, 0x04, 0x0C, 0x60, 0x63, 0x03, 0x18, 0x18, 0x80, 0xC4,
  0x06, 0x00, 0x07, 0xC1, 0x87, 0x30, 0x33, 0x03, 0x30, 0x03, 0xC0, 0x0F,
  0xC0, 0x1E, 0x00, 0x6C, 0x06, 0xC0, 0x46, 0x0C, 0x3F, 0x00, 0xFF, 0xC3,
  0x00, 0xC0, 0x20, 0x18, 0x06, 0x01, 0x80, 0x60, 0x10, 0x0C, 0x03, 0x00,
  0xC0, 0x20, 0x00, 0x30, 0x13, 0x03, 0x20, 0x36, 0x03, 0x60, 0x26, 0x06,
  0x60, 0x64, 0x06, 0xC0, 0x6C, 0x04, 0xC0, 0xCE, 0x18, 0x3E, 0x00, 0xC0,
  0x78, 0x0B, 0x03, 0x20, 0xC4, 0x18, 0xC6, 0x18, 0x83, 0x30, 0x64, 0x0D,
  0x80, 0xA0, 0x1C, 0x03, 0x00, 0xC1, 0x83, 0xC1, 0x83, 0xC3, 0x86, 0xC2,
  0x86, 0xC6, 0x84, 0xC4, 0x8C, 0xCC, 0xC8, 0xC8, 0xD8, 0xD8, 0xD0, 0xD0,
  0xF0, 0x70, 0xE0, 0x60, 0xE0, 0x60, 0xE0, 0x0C, 0x0C, 0x30, 0x60, 0x63,
  0x01, 0x98, 0x02, 0xC0, 0x0E, 0x00, 0x38, 0x01, 0xE0, 0x0C, 0x80, 0x33,
  0x01, 0x8C, 0x0C, 0x18, 0x60, 0x60, 0xC0, 0x66, 0x0C, 0x60, 0xC2, 0x18,
  0x33, 0x03, 0x60, 0x1C, 0x01, 0x80, 0x18, 0x01, 0x80, 0x18, 0x01, 0x00,
  0x30, 0x00, 0x1F, 0xF0, 0x07, 0x00, 0xE0, 0x0C, 0x01, 0x80, 0x30, 0x06,
  0x00, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x00, 0xFF, 0xC0, 0x0E, 0x10,
  0x20, 0x41, 0x02, 0x04, 0x08, 0x20, 0x40, 0x81, 0x04, 0x08, 0x10, 0x20,
  0xE0, 0xAA, 0xA9, 0x55, 0x40, 0x0E, 0x08, 0x10, 0x20, 0x41, 0x02, 0x04,
  0x08, 0x20, 0x40, 0x81, 0x04, 0x08, 0x10, 0xE0, 0x0C, 0x18, 0x51, 0xA2,
  0x4C, 0x50, 0x80, 0xFF, 0xE0, 0xC8, 0x80, 0x0F, 0x86, 0x33, 0x0C, 0x03,
  0x03, 0xDF, 0xEE, 0x0B, 0x02, 0xC1, 0x9F, 0xE0, 0x10, 0x04, 0x01, 0x00,
  0xDC, 0x39, 0x88, 0x32, 0x0D, 0x83, 0x40, 0xD0, 0x64, 0x1B, 0x8C, 0xBC,
  0x00, 0x1F, 0x18, 0xD8, 0x6C, 0x0C, 0x06, 0x03, 0x01, 0x86, 0x66, 0x3E,
  0x00, 0x00, 0x20, 0x08, 0x01, 0x0F, 0x23, 0x14, 0xC1, 0x18, 0x26, 0x04,
  0xC0, 0x98, 0x23, 0x04, 0x71, 0x87, 0xD0, 0x0F, 0x0C, 0x76, 0x0D, 0x83,
  0xFF, 0xF0, 0x0C, 0x03, 0x06, 0x63, 0x0F, 0x80, 0x1C, 0xC2, 0x1E, 0x20,
  0x84, 0x10, 0x41, 0x04, 0x20, 0x80, 0x0F, 0x46, 0x33, 0x0C, 0xC1, 0x60,
  0xD8, 0x26, 0x09, 0x86, 0x71, 0x8F, 0xE0, 0x10, 0x04, 0xC2, 0x1F, 0x00,
  0x10, 0x04, 0x01, 0x00, 0x9F, 0x39, 0x88, 0x22, 0x09, 0x02, 0x40, 0x90,
  0x44, 0x12, 0x04, 0x81, 0x00, 0x10, 0x02, 0x22, 0x64, 0x44, 0x48, 0x80,
  0x04, 0x00, 0x01, 0x08, 0x20, 0x82, 0x08, 0x41, 0x04, 0x10, 0x42, 0x08,
  0xE0, 0x10, 0x08, 0x04, 0x04, 0x32, 0x31, 0x20, 0xA0, 0xB8, 0x6C, 0x22,
  0x11, 0x90, 0xC8, 0x30, 0x11, 0x22, 0x22, 0x64, 0x44, 0x48, 0x80, 0x2F,
  0x3C, 0x63, 0x8C, 0x86, 0x19, 0x08, 0x44, 0x10, 0x88, 0x21, 0x10, 0x82,
  0x21, 0x04, 0x82, 0x11, 0x04, 0x20, 0x00, 0x0B, 0xF3, 0x18, 0x82, 0x20,
  0x90, 0x24, 0x09, 0x04, 0x41, 0x20, 0x48, 0x10, 0x0F, 0x0C, 0x76, 0x0D,
  0x83, 0xC0, 0xF0, 0x3C, 0x1B, 0x06, 0xE3, 0x0F, 0x00, 0x17, 0xC3, 0x1C,
  0x41, 0x98, 0x32, 0x06, 0x40, 0xC8, 0x33, 0x06, 0x71, 0x8B, 0xC1, 0x00,
  0x20, 0x08, 0x01, 0x00, 0x00, 0x1E, 0xCC, 0x66, 0x09, 0x82, 0xC0, 0xB0,
  0x4C, 0x13, 0x04, 0x63, 0x0F, 0xC0, 0x20, 0x08, 0x02, 0x00, 0x80, 0x2C,
  0x60, 0x81, 0x04, 0x08, 0x10, 0x20, 0x81, 0x00, 0x1E, 0x33, 0x63, 0x60,
  0x70, 0x1E, 0x03, 0xC3, 0xC6, 0x7C, 0x22, 0xF2, 0x44, 0x44, 0xCC, 0xCE,
  0x21, 0x20, 0x90, 0x48, 0x24, 0x12, 0x13, 0x09, 0x84, 0xE6, 0x3E, 0x00,
  0xC1, 0xE1, 0xB0, 0xC8, 0xC4, 0x43, 0x61, 0xA0, 0xF0, 0x70, 0x18, 0x00,
  0xC7, 0x1E, 0x38, 0xB3, 0xCD, 0x96, 0x4C, 0xB6, 0x6D, 0xB1, 0x4D, 0x0E,
  0x78, 0x63, 0x83, 0x1C, 0x00, 0x10, 0xC3, 0x10, 0x24, 0x07, 0x80, 0xE0,
  0x1C, 0x07, 0x81, 0x90, 0x23, 0x08, 0x20, 0x30, 0x46, 0x18, 0x42, 0x08,
  0xC1, 0x10, 0x24, 0x07, 0x80, 0xE0, 0x1C, 0x03, 0x00, 0x60, 0x08, 0x03,
  0x01, 0xC0, 0x00, 0x3F, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
  0xC0, 0x7F, 0x00, 0x18, 0x88, 0x42, 0x10, 0x88, 0xC3, 0x18, 0x88, 0x42,
  0x18, 0xE0, 0x11, 0x22, 0x22, 0x24, 0x44, 0x4C, 0x88, 0x88, 0x00, 0x38,
  0xC2, 0x10, 0x88, 0xC6, 0x18, 0x88, 0x42, 0x10, 0x88, 0xC0, 0x70, 0x4E,
  0x41, 0xC0 };

const GFXglyph FreeSansOblique9pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   5,    0,    0 },   // 0x20 ' '
  {     1,   5,  13,   5,    2,  -12 },   // 0x21 '!'
  {    10,   5,   4,   6,    3,  -12 },   // 0x22 '"'
  {    13,  11,  13,  10,    1,  -12 },   // 0x23 '#'
  {    31,  11,  16,  10,    1,  -13 },   // 0x24 '$'
  {    53,  15,  13,  16,    2,  -12 },   // 0x25 '%'
  {    78,  10,  13,  12,    2,  -12 },   // 0x26 '&'
  {    95,   2,   4,   3,    3,  -12 },   // 0x27 '''
  {    96,   7,  17,   6,    2,  -12 },   // 0x28 '('
  {   111,   7,  17,   6,   -1,  -12 },   // 0x29 ')'
  {   126,   6,   5,   7,    3,  -12 },   // 0x2A '*'
  {   130,   9,   8,  11,    2,   -7 },   // 0x2B '+'
  {   139,   3,   5,   5,    1,   -1 },   // 0x2C ','
  {   141,   4,   1,   6,    2,   -4 },   // 0x2D '-'
  {   142,   2,   1,   5,    2,    0 },   // 0x2E '.'
  {   143,   8,  13,   5,    0,  -12 },   // 0x2F '/'
  {   156,   9,  13,  10,    2,  -12 },   // 0x30 '0'
  {   171,   5,  13,  10,    4,  -12 },   // 0x31 '1'
  {   180,  11,  13,  10,    1,  -12 },   // 0x32 '2'
  {   198,  10,  13,  10,    1,  -12 },   // 0x33 '3'
  {   215,   9,  13,  10,    1,  -12 },   // 0x34 '4'
  {   230,  11,  13,  10,    1,  -12 },   // 0x35 '5'
  {   248,  10,  13,  10,    2,  -12 },   // 0x36 '6'
  {   265,  10,  13,  10,    2,  -12 },   // 0x37 '7'
  {   282,  10,  13,  10,    1,  -12 },   // 0x38 '8'
  {   299,  10,  13,  10,    1,  -12 },   // 0x39 '9'
  {   316,   4,   9,   5,    2,   -8 },   // 0x3A ':'
  {   321,   5,  12,   5,    1,   -8 },   // 0x3B ';'
  {   329,   9,   9,  11,    2,   -8 },   // 0x3C '<'
  {   340,  10,   4,  11,    1,   -5 },   // 0x3D '='
  {   345,   9,   9,  11,    1,   -7 },   // 0x3E '>'
  {   356,   9,  13,  10,    3,  -12 },   // 0x3F '?'
  {   371,  18,  16,  18,    1,  -12 },   // 0x40 '@'
  {   407,  12,  13,  12,    0,  -12 },   // 0x41 'A'
  {   427,  12,  13,  12,    1,  -12 },   // 0x42 'B'
  {   447,  12,  13,  13,    2,  -12 },   // 0x43 'C'
  {   467,  13,  13,  13,    1,  -12 },   // 0x44 'D'
  {   489,  12,  13,  12,    1,  -12 },   // 0x45 'E'
  {   509,  12,  13,  11,    1,  -12 },   // 0x46 'F'
  {   529,  13,  13,  14,    2,  -12 },   // 0x47 'G'
  {   551,  13,  13,  13,    1,  -12 },   // 0x48 'H'
  {   573,   4,  13,   5,    2,  -12 },   // 0x49 'I'
  {   580,  10,  13,   9,    1,  -12 },   // 0x4A 'J'
  {   597,  14,  13,  12,    1,  -12 },   // 0x4B 'K'
  {   620,   9,  13,  10,    1,  -12 },   // 0x4C 'L'
  {   635,  16,  13,  15,    1,  -12 },   // 0x4D 'M'
  {   661,  13,  13,  13,    1,  -12 },   // 0x4E 'N'
  {   683,  13,  13,  14,    2,  -12 },   // 0x4F 'O'
  {   705,  12,  13,  12,    1,  -12 },   // 0x50 'P'
  {   725,  13,  14,  14,    2,  -12 },   // 0x51 'Q'
  {   748,  13,  13,  13,    1,  -12 },   // 0x52 'R'
  {   770,  12,  13,  12,    1,  -12 },   // 0x53 'S'
  {   790,  10,  13,  11,    3,  -12 },   // 0x54 'T'
  {   807,  12,  13,  13,    2,  -12 },   // 0x55 'U'
  {   827,  11,  13,  12,    3,  -12 },   // 0x56 'V'
  {   845,  16,  13,  17,    3,  -12 },   // 0x57 'W'
  {   871,  14,  13,  12,    0,  -12 },   // 0x58 'X'
  {   894,  12,  13,  12,    3,  -12 },   // 0x59 'Y'
  {   914,  12,  13,  11,    1,  -12 },   // 0x5A 'Z'
  {   934,   7,  17,   5,    0,  -12 },   // 0x5B '['
  {   949,   2,  13,   5,    3,  -12 },   // 0x5C '\'
  {   953,   7,  17,   5,    0,  -12 },   // 0x5D ']'
  {   968,   7,   7,   8,    2,  -12 },   // 0x5E '^'
  {   975,  11,   1,  10,   -1,    3 },   // 0x5F '_'
  {   977,   3,   3,   6,    3,  -12 },   // 0x60 '`'
  {   979,  10,  10,  10,    1,   -9 },   // 0x61 'a'
  {   992,  10,  13,  10,    1,  -12 },   // 0x62 'b'
  {  1009,   9,  10,   9,    1,   -9 },   // 0x63 'c'
  {  1021,  11,  13,  10,    1,  -12 },   // 0x64 'd'
  {  1039,  10,  10,  10,    1,   -9 },   // 0x65 'e'
  {  1052,   6,  13,   5,    1,  -12 },   // 0x66 'f'
  {  1062,  10,  14,  10,    0,   -9 },   // 0x67 'g'
  {  1080,  10,  13,  10,    1,  -12 },   // 0x68 'h'
  {  1097,   4,  13,   4,    1,  -12 },   // 0x69 'i'
  {  1104,   6,  17,   4,   -1,  -12 },   // 0x6A 'j'
  {  1117,   9,  13,   9,    1,  -12 },   // 0x6B 'k'
  {  1132,   4,  13,   4,    1,  -12 },   // 0x6C 'l'
  {  1139,  15,  10,  15,    1,   -9 },   // 0x6D 'm'
  {  1158,  10,  11,  10,    1,  -10 },   // 0x6E 'n'
  {  1172,  10,  10,  10,    1,   -9 },   // 0x6F 'o'
  {  1185,  11,  14,  10,    0,   -9 },   // 0x70 'p'
  {  1205,  10,  14,  10,    1,   -9 },   // 0x71 'q'
  {  1223,   7,  10,   6,    1,   -9 },   // 0x72 'r'
  {  1232,   8,  10,   9,    1,   -9 },   // 0x73 's'
  {  1242,   4,  12,   5,    2,  -11 },   // 0x74 't'
  {  1248,   9,  10,  10,    2,   -9 },   // 0x75 'u'
  {  1260,   9,  10,   9,    2,   -9 },   // 0x76 'v'
  {  1272,  13,  10,  13,    2,   -9 },   // 0x77 'w'
  {  1289,  11,  10,   9,    0,   -9 },   // 0x78 'x'
  {  1303,  11,  14,   9,    0,   -9 },   // 0x79 'y'
  {  1323,   9,  10,   9,    1,   -9 },   // 0x7A 'z'
  {  1335,   5,  17,   6,    2,  -12 },   // 0x7B '{'
  {  1346,   4,  17,   5,    1,  -12 },   // 0x7C '|'
  {  1355,   5,  17,   6,    0,  -12 },   // 0x7D '}'
  {  1366,   9,   3,  11,    2,   -7 } }; // 0x7E '~'

const GFXfont FreeSansOblique9pt7b PROGMEM = {
  (uint8_t  *)FreeSansOblique9pt7bBitmaps,
  (GFXglyph *)FreeSansOblique9pt7bGlyphs,
  0x20, 0x7E, 21 };

// Approx. 2042 bytes

#endif // FreeSansOblique9pt7b_H
