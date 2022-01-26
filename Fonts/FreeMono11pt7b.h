#ifndef FreeMono11pt7b_H
#define FreeMono11pt7b_H

#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#elif defined(__IMXRT1052__) || defined(__IMXRT1062__)
// PROGMEM is defefind for T4 to place data in specific memory section
#undef PROGMEM
#define PROGMEM
#else
#define PROGMEM
#endif

const uint8_t FreeMono11pt7bBitmaps[] PROGMEM = {
  0x00, 0xAA, 0xAA, 0x80, 0xF0, 0xEF, 0xDD, 0x12, 0x24, 0x48, 0x80, 0x12,
  0x09, 0x04, 0x82, 0x41, 0x27, 0xFC, 0x48, 0x2C, 0x14, 0x7F, 0x89, 0x04,
  0x82, 0x41, 0x20, 0x90, 0x08, 0x0E, 0x88, 0xC8, 0x24, 0x02, 0x00, 0xF0,
  0x0E, 0x00, 0x80, 0x60, 0x38, 0x2B, 0xE0, 0x40, 0x20, 0x10, 0x38, 0x26,
  0x11, 0x08, 0x84, 0xC1, 0xC0, 0x0E, 0x38, 0xEF, 0x0C, 0xC4, 0x22, 0x11,
  0x98, 0x78, 0x1E, 0x10, 0x08, 0x04, 0x01, 0x01, 0x81, 0x67, 0x12, 0x8D,
  0x43, 0x11, 0x87, 0xB0, 0xFD, 0x24, 0x80, 0x29, 0x29, 0x24, 0x92, 0x24,
  0x89, 0x89, 0x22, 0x49, 0x24, 0xA4, 0xA4, 0x08, 0x04, 0x02, 0x2F, 0xE0,
  0xC0, 0xA0, 0x88, 0x40, 0x08, 0x04, 0x02, 0x01, 0x0F, 0xF8, 0x40, 0x20,
  0x10, 0x08, 0x00, 0x76, 0x6C, 0xC8, 0xFF, 0xC0, 0xFF, 0x80, 0x00, 0x80,
  0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x0C, 0x04, 0x06, 0x02,
  0x02, 0x01, 0x01, 0x00, 0x80, 0x00, 0x1C, 0x31, 0x90, 0x50, 0x18, 0x0C,
  0x06, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x28, 0x26, 0x30, 0xE0, 0x10, 0x61,
  0x44, 0x81, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x81, 0x1F, 0xC0, 0x3E,
  0x31, 0xA0, 0x70, 0x10, 0x08, 0x0C, 0x04, 0x04, 0x04, 0x0C, 0x08, 0x08,
  0x08, 0x0B, 0xFC, 0x3C, 0x61, 0x00, 0x40, 0x20, 0x10, 0x10, 0x30, 0x04,
  0x01, 0x00, 0x40, 0x20, 0x1C, 0x31, 0xF0, 0x0C, 0x28, 0x51, 0x24, 0x48,
  0xA1, 0x42, 0x85, 0xFC, 0x10, 0x20, 0x43, 0xC0, 0x7E, 0x20, 0x10, 0x08,
  0x04, 0x02, 0xF1, 0x84, 0x01, 0x00, 0x80, 0x40, 0x30, 0x3C, 0x31, 0xF0,
  0x0F, 0x30, 0x20, 0x40, 0x40, 0x80, 0x9C, 0xA2, 0xC1, 0x81, 0x81, 0x41,
  0x62, 0x3C, 0xFF, 0xC0, 0x40, 0x20, 0x20, 0x10, 0x08, 0x08, 0x04, 0x02,
  0x02, 0x01, 0x00, 0x80, 0x80, 0x40, 0x3E, 0x20, 0xA0, 0x30, 0x18, 0x0A,
  0x08, 0xF8, 0xC6, 0x80, 0xC0, 0x60, 0x30, 0x16, 0x31, 0xF0, 0x3C, 0x46,
  0x82, 0x81, 0x81, 0x83, 0x45, 0x39, 0x01, 0x02, 0x02, 0x04, 0x0C, 0xF0,
  0xFF, 0x80, 0x3F, 0xE0, 0x77, 0x70, 0x00, 0x76, 0xEC, 0xC8, 0x01, 0x81,
  0x03, 0x06, 0x0C, 0x03, 0x00, 0x40, 0x18, 0x03, 0x00, 0x40, 0xFF, 0xE0,
  0x00, 0x00, 0x7F, 0xF0, 0xC0, 0x0C, 0x00, 0x80, 0x18, 0x01, 0x80, 0x40,
  0x60, 0x60, 0x60, 0x20, 0x00, 0x7C, 0x82, 0x81, 0x01, 0x01, 0x02, 0x0C,
  0x10, 0x10, 0x00, 0x00, 0x38, 0x38, 0x3C, 0x31, 0x10, 0x50, 0x28, 0x14,
  0x3A, 0x25, 0x22, 0x91, 0x4C, 0xA3, 0xF0, 0x04, 0x03, 0x00, 0xF8, 0x3E,
  0x00, 0x28, 0x01, 0x40, 0x11, 0x00, 0x88, 0x04, 0x40, 0x41, 0x02, 0x08,
  0x1F, 0xC1, 0x01, 0x08, 0x08, 0x40, 0x4F, 0x8F, 0x80, 0xFE, 0x10, 0x44,
  0x09, 0x02, 0x40, 0x90, 0x47, 0xE1, 0x06, 0x40, 0x50, 0x14, 0x05, 0x02,
  0xFF, 0x00, 0x1F, 0x26, 0x1D, 0x00, 0xE0, 0x18, 0x01, 0x00, 0x20, 0x04,
  0x00, 0x80, 0x08, 0x01, 0x00, 0x98, 0x20, 0xF8, 0xFF, 0x08, 0x11, 0x01,
  0x20, 0x34, 0x02, 0x80, 0x50, 0x0A, 0x01, 0x40, 0x28, 0x0D, 0x01, 0x20,
  0x4F, 0xF0, 0xFF, 0x90, 0x24, 0x09, 0x00, 0x40, 0x11, 0x07, 0xC1, 0x10,
  0x40, 0x10, 0x14, 0x05, 0x01, 0xFF, 0xC0, 0xFF, 0xD0, 0x14, 0x05, 0x00,
  0x40, 0x11, 0x07, 0xC1, 0x10, 0x40, 0x10, 0x04, 0x01, 0x00, 0xF8, 0x00,
  0x1F, 0xA3, 0x06, 0x40, 0x2C, 0x00, 0x80, 0x08, 0x00, 0x80, 0x08, 0x1F,
  0x80, 0x28, 0x02, 0x40, 0x23, 0x06, 0x0F, 0x80, 0xE1, 0xD0, 0x24, 0x09,
  0x02, 0x40, 0x90, 0x27, 0xF9, 0x02, 0x40, 0x90, 0x24, 0x09, 0x02, 0xE1,
  0xC0, 0xFE, 0x20, 0x40, 0x81, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x8F,
  0xE0, 0x1F, 0xC0, 0x40, 0x10, 0x04, 0x01, 0x00, 0x40, 0x10, 0x04, 0x81,
  0x20, 0x48, 0x13, 0x08, 0x3C, 0x00, 0xF1, 0xC8, 0x11, 0x04, 0x23, 0x04,
  0xC0, 0xB0, 0x1B, 0x02, 0x10, 0x41, 0x08, 0x21, 0x02, 0x20, 0x4F, 0x0E,
  0xF8, 0x08, 0x02, 0x00, 0x80, 0x20, 0x08, 0x02, 0x00, 0x80, 0x20, 0x48,
  0x12, 0x04, 0x81, 0xFF, 0xC0, 0xE0, 0x76, 0x06, 0x50, 0xA5, 0x0A, 0x49,
  0x24, 0x92, 0x49, 0x24, 0x62, 0x46, 0x24, 0x02, 0x40, 0x24, 0x02, 0xF0,
  0xF0, 0xE1, 0xEC, 0x09, 0x41, 0x28, 0x24, 0x84, 0x90, 0x91, 0x12, 0x12,
  0x42, 0x48, 0x29, 0x05, 0x20, 0x6F, 0x0C, 0x1F, 0x06, 0x31, 0x01, 0x20,
  0x28, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x80, 0x28, 0x09, 0x01, 0x18, 0xC1,
  0xF0, 0xFE, 0x20, 0x90, 0x28, 0x14, 0x0A, 0x05, 0x04, 0xFC, 0x40, 0x20,
  0x10, 0x08, 0x0F, 0x80, 0x1F, 0x06, 0x31, 0x01, 0x20, 0x28, 0x03, 0x00,
  0x60, 0x0C, 0x01, 0x80, 0x28, 0x09, 0x01, 0x18, 0xC1, 0xF0, 0x10, 0x07,
  0xC9, 0x8E, 0xFE, 0x10, 0x44, 0x09, 0x02, 0x40, 0x90, 0x47, 0xE1, 0x18,
  0x42, 0x10, 0x44, 0x11, 0x02, 0xF0, 0xC0, 0x1E, 0x90, 0xD0, 0x28, 0x14,
  0x01, 0x80, 0x38, 0x03, 0x00, 0xC0, 0x60, 0x3C, 0x29, 0xE0, 0xFF, 0xE2,
  0x18, 0x84, 0x20, 0x08, 0x02, 0x00, 0x80, 0x20, 0x08, 0x02, 0x00, 0x80,
  0x20, 0x3E, 0x00, 0xF1, 0xE8, 0x09, 0x01, 0x20, 0x24, 0x04, 0x80, 0x90,
  0x12, 0x02, 0x40, 0x48, 0x09, 0x83, 0x18, 0xC1, 0xF0, 0xF8, 0x79, 0x00,
  0x88, 0x08, 0x40, 0x41, 0x04, 0x08, 0x20, 0x41, 0x01, 0x10, 0x08, 0x80,
  0x28, 0x01, 0x40, 0x0A, 0x00, 0x20, 0x00, 0xF8, 0xFA, 0x00, 0x88, 0x04,
  0x44, 0x22, 0x32, 0x12, 0x90, 0x94, 0x84, 0x94, 0x28, 0xA1, 0x45, 0x0A,
  0x28, 0x60, 0xC1, 0x06, 0x00, 0xF1, 0xEC, 0x08, 0x82, 0x08, 0x80, 0xB0,
  0x1C, 0x01, 0x00, 0x50, 0x19, 0x02, 0x30, 0x82, 0x20, 0x2F, 0x1E, 0xF1,
  0xE8, 0x08, 0x82, 0x08, 0x81, 0x10, 0x14, 0x01, 0x00, 0x20, 0x04, 0x00,
  0x80, 0x10, 0x02, 0x01, 0xF0, 0xFE, 0x82, 0x84, 0x84, 0x08, 0x10, 0x10,
  0x20, 0x20, 0x41, 0x81, 0x81, 0xFF, 0xF2, 0x49, 0x24, 0x92, 0x49, 0x24,
  0xE0, 0x80, 0x40, 0x10, 0x08, 0x02, 0x01, 0x00, 0x40, 0x20, 0x08, 0x06,
  0x01, 0x00, 0xC0, 0x20, 0x08, 0x04, 0x01, 0x00, 0x80, 0xE4, 0x92, 0x49,
  0x24, 0x92, 0x49, 0xE0, 0x08, 0x0E, 0x05, 0x84, 0x44, 0x16, 0x04, 0xFF,
  0xF8, 0x88, 0x80, 0x7E, 0x00, 0x80, 0x47, 0xE4, 0x14, 0x0A, 0x05, 0x8E,
  0x79, 0x80, 0xC0, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x9E, 0x14, 0x33,
  0x02, 0x40, 0x28, 0x05, 0x00, 0xB0, 0x37, 0x0D, 0x9E, 0x00, 0x1E, 0x98,
  0x6C, 0x0A, 0x00, 0x80, 0x20, 0x0C, 0x01, 0x82, 0x3F, 0x00, 0x00, 0xC0,
  0x08, 0x01, 0x00, 0x20, 0x04, 0x3C, 0x98, 0x52, 0x06, 0x80, 0x50, 0x0A,
  0x01, 0x60, 0x66, 0x1C, 0x3C, 0xC0, 0x1F, 0x08, 0x24, 0x06, 0x01, 0xFF,
  0xE0, 0x04, 0x00, 0x81, 0x1F, 0x80, 0x1F, 0x30, 0x20, 0x20, 0x20, 0xFE,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xFE, 0x1E, 0x6C, 0x3B, 0x03,
  0x40, 0x28, 0x05, 0x00, 0x90, 0x33, 0x0A, 0x1E, 0x40, 0x08, 0x01, 0x00,
  0x40, 0xF0, 0xC0, 0x10, 0x04, 0x01, 0x00, 0x40, 0x17, 0xC6, 0x19, 0x02,
  0x40, 0x90, 0x24, 0x09, 0x02, 0x40, 0xB8, 0x70, 0x08, 0x04, 0x00, 0x00,
  0x07, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x0F, 0xF8, 0x10,
  0x40, 0x00, 0xFC, 0x10, 0x41, 0x04, 0x10, 0x41, 0x04, 0x10, 0x43, 0xF8,
  0xC0, 0x10, 0x04, 0x01, 0x00, 0x40, 0x11, 0xE4, 0x61, 0x20, 0x50, 0x1E,
  0x04, 0xC1, 0x18, 0x43, 0x30, 0xF0, 0x78, 0x04, 0x02, 0x01, 0x00, 0x80,
  0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x87, 0xFC, 0xD9, 0xC6,
  0x62, 0x44, 0x24, 0x42, 0x44, 0x24, 0x42, 0x44, 0x24, 0x42, 0xE6, 0x30,
  0x6F, 0x86, 0x18, 0x81, 0x10, 0x22, 0x04, 0x40, 0x88, 0x11, 0x02, 0xF0,
  0xE0, 0x1E, 0x18, 0x64, 0x0A, 0x01, 0x80, 0x60, 0x14, 0x0D, 0x86, 0x1E,
  0x00, 0xCF, 0x0E, 0x19, 0x81, 0xA0, 0x14, 0x02, 0x80, 0x58, 0x12, 0x86,
  0x4F, 0x08, 0x01, 0x00, 0x20, 0x0F, 0x00, 0x1E, 0x6C, 0x3B, 0x03, 0x40,
  0x28, 0x05, 0x00, 0x90, 0x33, 0x0A, 0x1E, 0x40, 0x08, 0x01, 0x00, 0x20,
  0x1E, 0xE7, 0x96, 0x0C, 0x04, 0x02, 0x01, 0x00, 0x80, 0x40, 0xFE, 0x00,
  0x3E, 0xB0, 0xD0, 0x2E, 0x00, 0xF0, 0x06, 0x03, 0x83, 0xBE, 0x00, 0x20,
  0x08, 0x02, 0x00, 0x80, 0xFF, 0x08, 0x02, 0x00, 0x80, 0x20, 0x08, 0x02,
  0x00, 0xC3, 0x1F, 0x00, 0xC3, 0x90, 0x24, 0x09, 0x02, 0x40, 0x90, 0x24,
  0x09, 0x8E, 0x3C, 0xC0, 0xF1, 0xF4, 0x04, 0x20, 0x82, 0x08, 0x11, 0x01,
  0x10, 0x09, 0x00, 0xA0, 0x06, 0x00, 0xE0, 0xE8, 0x09, 0x11, 0x23, 0x24,
  0xA4, 0x55, 0x0A, 0x61, 0x8C, 0x31, 0x80, 0x71, 0xE4, 0x10, 0x44, 0x05,
  0x00, 0x40, 0x16, 0x04, 0x63, 0x06, 0xF1, 0xE0, 0xF1, 0xE8, 0x08, 0x82,
  0x10, 0x41, 0x10, 0x22, 0x02, 0x80, 0x50, 0x04, 0x00, 0x80, 0x20, 0x04,
  0x0F, 0xE0, 0xFE, 0x84, 0x04, 0x08, 0x10, 0x20, 0x40, 0x41, 0xFF, 0x12,
  0x22, 0x22, 0x26, 0x86, 0x22, 0x22, 0x22, 0x10, 0xFF, 0xFF, 0x84, 0x44,
  0x44, 0x46, 0x16, 0x44, 0x44, 0x44, 0x80, 0x70, 0x64, 0x61, 0xC0 };

const GFXglyph FreeMono11pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  13,    0,    0 },   // 0x20 ' '
  {     1,   2,  14,  13,    5,  -13 },   // 0x21 '!'
  {     5,   7,   6,  13,    3,  -12 },   // 0x22 '"'
  {    11,   9,  15,  13,    2,  -13 },   // 0x23 '#'
  {    28,   9,  16,  13,    2,  -13 },   // 0x24 '$'
  {    46,   9,  14,  13,    2,  -13 },   // 0x25 '%'
  {    62,   9,  12,  13,    2,  -11 },   // 0x26 '&'
  {    76,   3,   6,  13,    5,  -12 },   // 0x27 '''
  {    79,   3,  16,  13,    6,  -12 },   // 0x28 '('
  {    85,   3,  16,  13,    4,  -12 },   // 0x29 ')'
  {    91,   9,   8,  13,    2,  -12 },   // 0x2A '*'
  {   100,   9,   9,  13,    2,  -10 },   // 0x2B '+'
  {   111,   4,   6,  13,    3,   -2 },   // 0x2C ','
  {   114,  10,   1,  13,    2,   -6 },   // 0x2D '-'
  {   116,   3,   3,  13,    5,   -2 },   // 0x2E '.'
  {   118,   9,  17,  13,    2,  -14 },   // 0x2F '/'
  {   138,   9,  14,  13,    2,  -13 },   // 0x30 '0'
  {   154,   7,  14,  13,    3,  -13 },   // 0x31 '1'
  {   167,   9,  14,  13,    2,  -13 },   // 0x32 '2'
  {   183,   9,  14,  13,    2,  -13 },   // 0x33 '3'
  {   199,   7,  14,  13,    3,  -13 },   // 0x34 '4'
  {   212,   9,  14,  13,    2,  -13 },   // 0x35 '5'
  {   228,   8,  14,  13,    3,  -13 },   // 0x36 '6'
  {   242,   9,  14,  13,    2,  -13 },   // 0x37 '7'
  {   258,   9,  14,  13,    2,  -13 },   // 0x38 '8'
  {   274,   8,  14,  13,    3,  -13 },   // 0x39 '9'
  {   288,   3,   9,  13,    5,   -8 },   // 0x3A ':'
  {   292,   4,  12,  13,    3,   -8 },   // 0x3B ';'
  {   298,   9,  10,  13,    2,  -10 },   // 0x3C '<'
  {   310,  11,   4,  13,    1,   -7 },   // 0x3D '='
  {   316,  10,  10,  13,    2,  -10 },   // 0x3E '>'
  {   329,   8,  13,  13,    3,  -12 },   // 0x3F '?'
  {   342,   9,  15,  13,    2,  -13 },   // 0x40 '@'
  {   359,  13,  13,  13,    0,  -12 },   // 0x41 'A'
  {   381,  10,  13,  13,    2,  -12 },   // 0x42 'B'
  {   398,  11,  13,  13,    1,  -12 },   // 0x43 'C'
  {   416,  11,  13,  13,    1,  -12 },   // 0x44 'D'
  {   434,  10,  13,  13,    2,  -12 },   // 0x45 'E'
  {   451,  10,  13,  13,    2,  -12 },   // 0x46 'F'
  {   468,  12,  13,  13,    1,  -12 },   // 0x47 'G'
  {   488,  10,  13,  13,    2,  -12 },   // 0x48 'H'
  {   505,   7,  13,  13,    3,  -12 },   // 0x49 'I'
  {   517,  10,  13,  13,    2,  -12 },   // 0x4A 'J'
  {   534,  11,  13,  13,    2,  -12 },   // 0x4B 'K'
  {   552,  10,  13,  13,    2,  -12 },   // 0x4C 'L'
  {   569,  12,  13,  13,    1,  -12 },   // 0x4D 'M'
  {   589,  11,  13,  13,    1,  -12 },   // 0x4E 'N'
  {   607,  11,  13,  13,    1,  -12 },   // 0x4F 'O'
  {   625,   9,  13,  13,    2,  -12 },   // 0x50 'P'
  {   640,  11,  16,  13,    1,  -12 },   // 0x51 'Q'
  {   662,  10,  13,  13,    2,  -12 },   // 0x52 'R'
  {   679,   9,  13,  13,    2,  -12 },   // 0x53 'S'
  {   694,  10,  13,  13,    2,  -12 },   // 0x54 'T'
  {   711,  11,  13,  13,    1,  -12 },   // 0x55 'U'
  {   729,  13,  13,  13,    0,  -12 },   // 0x56 'V'
  {   751,  13,  13,  13,    0,  -12 },   // 0x57 'W'
  {   773,  11,  13,  13,    1,  -12 },   // 0x58 'X'
  {   791,  11,  13,  13,    1,  -12 },   // 0x59 'Y'
  {   809,   8,  13,  13,    3,  -12 },   // 0x5A 'Z'
  {   822,   3,  17,  13,    6,  -13 },   // 0x5B '['
  {   829,   9,  17,  13,    2,  -14 },   // 0x5C '\'
  {   849,   3,  17,  13,    4,  -13 },   // 0x5D ']'
  {   856,   9,   6,  13,    2,  -13 },   // 0x5E '^'
  {   863,  13,   1,  13,    0,    3 },   // 0x5F '_'
  {   865,   3,   3,  13,    3,  -13 },   // 0x60 '`'
  {   867,   9,   9,  13,    2,   -8 },   // 0x61 'a'
  {   878,  11,  14,  13,    1,  -13 },   // 0x62 'b'
  {   898,  10,   9,  13,    2,   -8 },   // 0x63 'c'
  {   910,  11,  14,  13,    1,  -13 },   // 0x64 'd'
  {   930,  10,   9,  13,    1,   -8 },   // 0x65 'e'
  {   942,   8,  14,  13,    3,  -13 },   // 0x66 'f'
  {   956,  11,  13,  13,    1,   -8 },   // 0x67 'g'
  {   974,  10,  14,  13,    2,  -13 },   // 0x68 'h'
  {   992,   9,  13,  13,    2,  -12 },   // 0x69 'i'
  {  1007,   6,  17,  13,    4,  -12 },   // 0x6A 'j'
  {  1020,  10,  14,  13,    2,  -13 },   // 0x6B 'k'
  {  1038,   9,  14,  13,    2,  -13 },   // 0x6C 'l'
  {  1054,  12,   9,  13,    1,   -8 },   // 0x6D 'm'
  {  1068,  11,   9,  13,    1,   -8 },   // 0x6E 'n'
  {  1081,  10,   9,  13,    2,   -8 },   // 0x6F 'o'
  {  1093,  11,  13,  13,    1,   -8 },   // 0x70 'p'
  {  1111,  11,  13,  13,    1,   -8 },   // 0x71 'q'
  {  1129,   9,   9,  13,    3,   -8 },   // 0x72 'r'
  {  1140,   9,   9,  13,    2,   -8 },   // 0x73 's'
  {  1151,  10,  13,  13,    1,  -12 },   // 0x74 't'
  {  1168,  10,   9,  13,    2,   -8 },   // 0x75 'u'
  {  1180,  12,   9,  13,    1,   -8 },   // 0x76 'v'
  {  1194,  11,   9,  13,    1,   -8 },   // 0x77 'w'
  {  1207,  11,   9,  13,    1,   -8 },   // 0x78 'x'
  {  1220,  11,  13,  13,    1,   -8 },   // 0x79 'y'
  {  1238,   8,   9,  13,    3,   -8 },   // 0x7A 'z'
  {  1247,   4,  17,  13,    4,  -13 },   // 0x7B '{'
  {  1256,   1,  16,  13,    6,  -12 },   // 0x7C '|'
  {  1258,   4,  17,  13,    5,  -13 },   // 0x7D '}'
  {  1267,   9,   3,  13,    2,   -7 } }; // 0x7E '~'

const GFXfont FreeMono11pt7b PROGMEM = {
  (uint8_t  *)FreeMono11pt7bBitmaps,
  (GFXglyph *)FreeMono11pt7bGlyphs,
  0x20, 0x7E, 22 };

// Approx. 1943 bytes

#endif // FreeMono11pt7b_H
