#ifndef FreeSerifBoldItalic9pt7b_H
#define FreeSerifBoldItalic9pt7b_H

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

const uint8_t FreeSerifBoldItalic9pt7bBitmaps[] PROGMEM = {
  0x00, 0x0C, 0x31, 0xC6, 0x18, 0x41, 0x08, 0x20, 0x0E, 0x38, 0xE0, 0xCF,
  0x38, 0xA2, 0x88, 0x02, 0x40, 0xC8, 0x13, 0x06, 0x43, 0xFC, 0x32, 0x06,
  0x40, 0x98, 0x7F, 0x84, 0xC0, 0x90, 0x32, 0x04, 0xC0, 0x01, 0x01, 0xF0,
  0x4B, 0x99, 0x33, 0x24, 0x78, 0x07, 0x80, 0x38, 0x0B, 0x89, 0x31, 0x26,
  0x64, 0xC7, 0x30, 0x3C, 0x04, 0x00, 0x38, 0x41, 0x9F, 0x06, 0x48, 0x31,
  0x60, 0xCD, 0x03, 0x2C, 0x07, 0x27, 0x81, 0x39, 0x05, 0xC4, 0x26, 0x10,
  0x98, 0x84, 0x66, 0x10, 0xE0, 0x03, 0x80, 0x22, 0x03, 0x10, 0x19, 0x00,
  0xF0, 0x0F, 0x3C, 0xF8, 0xCC, 0xC4, 0xE7, 0x47, 0x3E, 0x38, 0xE1, 0xE7,
  0x97, 0xCF, 0x00, 0xFA, 0x80, 0x08, 0x88, 0x84, 0x62, 0x10, 0x84, 0x21,
  0x08, 0x41, 0x00, 0x20, 0x84, 0x10, 0x84, 0x21, 0x08, 0xC6, 0x23, 0x11,
  0x00, 0x18, 0x18, 0xD6, 0x38, 0x18, 0xF7, 0x18, 0x18, 0x08, 0x04, 0x02,
  0x01, 0x0F, 0xF8, 0x40, 0x20, 0x10, 0x08, 0x00, 0x6D, 0x95, 0x00, 0xFF,
  0xC0, 0xFF, 0x80, 0x06, 0x0C, 0x30, 0x60, 0x83, 0x04, 0x18, 0x20, 0xC1,
  0x06, 0x00, 0x0F, 0x0C, 0x8C, 0x6E, 0x37, 0x1B, 0x1F, 0x8F, 0xC7, 0xC7,
  0x63, 0xB1, 0x89, 0x83, 0x80, 0x06, 0x1E, 0x0E, 0x0E, 0x0C, 0x0C, 0x1C,
  0x18, 0x18, 0x18, 0x38, 0x38, 0xFC, 0x1F, 0x13, 0xD0, 0xE0, 0x70, 0x38,
  0x38, 0x18, 0x18, 0x18, 0x08, 0x08, 0x4F, 0xCF, 0xE0, 0x1F, 0x11, 0xC0,
  0xE0, 0x60, 0xC1, 0xF0, 0x38, 0x0C, 0x06, 0x03, 0x01, 0x19, 0x8F, 0x00,
  0x00, 0x80, 0xC0, 0xE1, 0xE0, 0xB0, 0x98, 0x9C, 0x8C, 0xFF, 0x07, 0x03,
  0x01, 0x80, 0x0F, 0x88, 0x08, 0x07, 0x83, 0xE0, 0x78, 0x1C, 0x06, 0x03,
  0x01, 0x80, 0x9C, 0x87, 0x80, 0x03, 0x87, 0x07, 0x07, 0x07, 0x03, 0xE3,
  0x99, 0xCC, 0xC6, 0x63, 0x33, 0x89, 0x87, 0x80, 0x3F, 0xBF, 0x90, 0x80,
  0xC0, 0x40, 0x60, 0x20, 0x30, 0x30, 0x10, 0x18, 0x08, 0x00, 0x1E, 0x13,
  0x31, 0x31, 0x3A, 0x1C, 0x1C, 0x6E, 0xC6, 0xC6, 0xC6, 0x44, 0x38, 0x0E,
  0x1C, 0x8C, 0x6C, 0x36, 0x3B, 0x1D, 0x8E, 0x7E, 0x0E, 0x07, 0x07, 0x0E,
  0x0C, 0x00, 0x39, 0xCE, 0x00, 0x03, 0x9C, 0xE0, 0x39, 0xCE, 0x00, 0x01,
  0x8C, 0x22, 0x20, 0x00, 0x01, 0xC3, 0xC7, 0x8E, 0x06, 0x01, 0xE0, 0x3C,
  0x07, 0x80, 0x40, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x60, 0x1E,
  0x03, 0xC0, 0x78, 0x1C, 0x3C, 0x78, 0xF0, 0x40, 0x00, 0x1C, 0x27, 0x37,
  0x07, 0x0E, 0x1C, 0x30, 0x60, 0x40, 0x00, 0xE0, 0xE0, 0xE0, 0x0F, 0x80,
  0xC3, 0x08, 0x04, 0xC3, 0x3C, 0x24, 0xE2, 0x27, 0x33, 0x39, 0x11, 0xC9,
  0x93, 0x77, 0x18, 0x00, 0x70, 0x40, 0xFC, 0x00, 0x00, 0x80, 0x18, 0x01,
  0x80, 0x38, 0x05, 0x80, 0x5C, 0x09, 0xC1, 0x1C, 0x1F, 0xC2, 0x0C, 0x20,
  0xC4, 0x0E, 0xF3, 0xF0, 0x3F, 0xE0, 0xC7, 0x0C, 0x71, 0xC7, 0x1C, 0xE1,
  0xF0, 0x39, 0xC3, 0x8E, 0x38, 0xE3, 0x0E, 0x71, 0xE7, 0x1C, 0xFF, 0x00,
  0x07, 0xD1, 0xC7, 0x38, 0x27, 0x02, 0x70, 0x0F, 0x00, 0xE0, 0x0E, 0x00,
  0xE0, 0x0E, 0x00, 0x60, 0x87, 0x18, 0x1E, 0x00, 0x3F, 0xE0, 0x30, 0xE0,
  0xC1, 0x87, 0x07, 0x1C, 0x1C, 0x60, 0x73, 0x81, 0xCE, 0x0F, 0x38, 0x38,
  0xC0, 0xE7, 0x07, 0x1C, 0x78, 0xFF, 0x80, 0x1F, 0xF8, 0x61, 0xC3, 0x04,
  0x38, 0x81, 0xCC, 0x0F, 0xE0, 0xE2, 0x07, 0x10, 0x38, 0x81, 0x81, 0x1C,
  0x18, 0xE3, 0x8F, 0xFC, 0x00, 0x3F, 0xF8, 0x61, 0xC3, 0x04, 0x38, 0x81,
  0xCC, 0x0F, 0xE0, 0xE2, 0x07, 0x10, 0x38, 0x81, 0x80, 0x1C, 0x00, 0xE0,
  0x0F, 0x80, 0x00, 0x07, 0x91, 0xC7, 0x38, 0x27, 0x00, 0x70, 0x0F, 0x00,
  0xE1, 0xFE, 0x0E, 0xE0, 0xCE, 0x0C, 0x60, 0xC7, 0x1C, 0x1F, 0x00, 0x1F,
  0x7E, 0x1C, 0x38, 0x30, 0x60, 0xE1, 0xC1, 0xC3, 0x83, 0x06, 0x0F, 0xFC,
  0x1C, 0x38, 0x38, 0x70, 0x60, 0xC1, 0xC3, 0x83, 0x87, 0x0F, 0x9F, 0x00,
  0x3F, 0x0C, 0x0C, 0x1C, 0x1C, 0x18, 0x38, 0x38, 0x38, 0x30, 0x70, 0x70,
  0xF8, 0x07, 0xC0, 0xE0, 0x38, 0x0C, 0x07, 0x01, 0xC0, 0x70, 0x18, 0x0E,
  0x03, 0x80, 0xC3, 0x30, 0xDC, 0x1E, 0x00, 0x1F, 0x78, 0x71, 0x83, 0x18,
  0x39, 0x01, 0xD0, 0x0D, 0x00, 0xFC, 0x07, 0x60, 0x3B, 0x81, 0x8C, 0x1C,
  0x70, 0xE1, 0x8F, 0xBE, 0x00, 0x1F, 0x00, 0xC0, 0x0C, 0x01, 0xC0, 0x1C,
  0x01, 0x80, 0x38, 0x03, 0x80, 0x38, 0x03, 0x01, 0x70, 0x37, 0x0E, 0xFF,
  0xE0, 0x1E, 0x07, 0x87, 0x07, 0x83, 0x83, 0x82, 0xC3, 0xC1, 0x62, 0xE0,
  0xB1, 0x70, 0x99, 0x30, 0x4D, 0xB8, 0x27, 0x9C, 0x13, 0x8C, 0x11, 0xC6,
  0x0C, 0xC7, 0x0F, 0x47, 0xC0, 0x3C, 0x3C, 0x38, 0x20, 0xE0, 0x85, 0xC4,
  0x13, 0x10, 0x4E, 0x42, 0x3A, 0x08, 0x78, 0x21, 0xE0, 0x83, 0x84, 0x0C,
  0x18, 0x10, 0x00, 0x40, 0x07, 0xC1, 0xCE, 0x38, 0x73, 0x87, 0x70, 0x77,
  0x07, 0xF0, 0xFE, 0x0E, 0xE0, 0xEE, 0x1C, 0xE1, 0xC6, 0x38, 0x3E, 0x00,
  0x3F, 0xC0, 0xC7, 0x0C, 0x71, 0xC7, 0x1C, 0x71, 0x8E, 0x3F, 0xC3, 0x80,
  0x30, 0x03, 0x00, 0x70, 0x07, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0xCE, 0x38,
  0x73, 0x87, 0x70, 0x77, 0x07, 0xF0, 0x7E, 0x0E, 0xE0, 0xEE, 0x0C, 0xE1,
  0xC6, 0x38, 0x36, 0x01, 0x80, 0x3C, 0x2D, 0xFC, 0x3F, 0xC0, 0xE7, 0x0C,
  0x71, 0xC7, 0x1C, 0x71, 0x8E, 0x3F, 0x83, 0xB8, 0x3B, 0x83, 0x3C, 0x71,
  0xC7, 0x1C, 0xF9, 0xF0, 0x0C, 0x89, 0x8C, 0x46, 0x23, 0x80, 0xE0, 0x78,
  0x0E, 0x03, 0x21, 0x90, 0xCC, 0xC9, 0xC0, 0x7F, 0xE9, 0xDF, 0x31, 0x4E,
  0x21, 0xC0, 0x38, 0x06, 0x01, 0xC0, 0x38, 0x06, 0x00, 0xC0, 0x38, 0x0F,
  0xC0, 0x7C, 0xF3, 0x82, 0x30, 0x27, 0x04, 0x70, 0x46, 0x04, 0xE0, 0x4E,
  0x08, 0xE0, 0x8E, 0x08, 0xE1, 0x0F, 0x30, 0x3C, 0x00, 0xFC, 0x73, 0x82,
  0x38, 0x23, 0x84, 0x38, 0x83, 0x90, 0x39, 0x01, 0xA0, 0x1C, 0x01, 0xC0,
  0x18, 0x01, 0x00, 0xF9, 0xF7, 0x30, 0xE2, 0x30, 0xC2, 0x38, 0xC4, 0x3B,
  0xC4, 0x3A, 0xE8, 0x3C, 0xE8, 0x3C, 0xF0, 0x18, 0xF0, 0x18, 0x60, 0x10,
  0x60, 0x10, 0x40, 0x3F, 0x78, 0x61, 0x83, 0x98, 0x1D, 0x00, 0x70, 0x03,
  0x80, 0x1C, 0x01, 0x60, 0x0B, 0x80, 0x9C, 0x08, 0x60, 0xC3, 0x8F, 0x7E,
  0x00, 0xF9, 0xE6, 0x18, 0xC2, 0x1C, 0x81, 0xA0, 0x34, 0x07, 0x00, 0xC0,
  0x18, 0x07, 0x00, 0xE0, 0x1C, 0x0F, 0xC0, 0x3F, 0xE6, 0x19, 0x87, 0x21,
  0xC0, 0x30, 0x0E, 0x03, 0x80, 0x60, 0x1C, 0x07, 0x05, 0xC1, 0x38, 0xEF,
  0xFC, 0x0E, 0x08, 0x18, 0x18, 0x18, 0x10, 0x30, 0x30, 0x30, 0x20, 0x60,
  0x60, 0x60, 0x40, 0xF0, 0xC6, 0x10, 0xC6, 0x10, 0x86, 0x30, 0x86, 0x30,
  0x1E, 0x0C, 0x18, 0x20, 0xC1, 0x83, 0x04, 0x18, 0x30, 0x60, 0x83, 0x06,
  0x3C, 0x00, 0x18, 0x1C, 0x34, 0x26, 0x66, 0x43, 0xC3, 0xFF, 0x80, 0xC6,
  0x30, 0x0D, 0x9D, 0x8C, 0xCC, 0x6E, 0x26, 0x33, 0x19, 0xBE, 0x66, 0x00,
  0x00, 0x78, 0x18, 0x30, 0x30, 0x3E, 0x73, 0x63, 0x63, 0x63, 0xC6, 0xC6,
  0xCC, 0x70, 0x0F, 0x3B, 0x70, 0x70, 0xE0, 0xE0, 0xE2, 0xE4, 0x78, 0x00,
  0x00, 0xF0, 0x1C, 0x06, 0x01, 0x83, 0xE3, 0x30, 0xCC, 0x63, 0x19, 0xCC,
  0x63, 0x38, 0xCF, 0x1D, 0x80, 0x0E, 0x75, 0xCB, 0xBE, 0xDE, 0x38, 0x72,
  0x78, 0x00, 0xE0, 0x34, 0x0C, 0x01, 0x80, 0x30, 0x1F, 0x01, 0x80, 0x30,
  0x06, 0x01, 0xC0, 0x30, 0x06, 0x00, 0xC0, 0x30, 0x06, 0x04, 0x80, 0xE0,
  0x00, 0x1C, 0x19, 0xD8, 0xCC, 0x66, 0x60, 0xE1, 0x80, 0xF0, 0x7E, 0x43,
  0x21, 0x8F, 0x00, 0x00, 0x1E, 0x07, 0x03, 0x01, 0x80, 0xD8, 0xFC, 0x76,
  0x33, 0x19, 0x99, 0xCC, 0xD6, 0x77, 0x30, 0x39, 0xC0, 0x0F, 0x31, 0x8C,
  0xC6, 0x31, 0xAE, 0x00, 0x03, 0x81, 0xC0, 0x00, 0x00, 0xE0, 0x30, 0x18,
  0x18, 0x0C, 0x06, 0x03, 0x03, 0x01, 0x80, 0xC2, 0xC1, 0xC0, 0x00, 0x0F,
  0x00, 0xC0, 0x60, 0x18, 0x06, 0xF3, 0x90, 0xC8, 0x34, 0x0F, 0x06, 0xC1,
  0x98, 0x66, 0xB9, 0xC0, 0x03, 0xCC, 0x63, 0x39, 0x8C, 0x66, 0x31, 0x8E,
  0x70, 0x7B, 0x99, 0xAF, 0xCE, 0x66, 0x63, 0x67, 0x33, 0x31, 0x99, 0x8C,
  0xCC, 0xE7, 0xC6, 0x30, 0x73, 0x7F, 0x73, 0x73, 0x63, 0x67, 0xE6, 0xC7,
  0xC6, 0x1E, 0x33, 0x63, 0x63, 0xC3, 0xC6, 0xC6, 0xCC, 0x78, 0x1D, 0xC3,
  0xB1, 0xCC, 0x63, 0x19, 0xCE, 0x63, 0x18, 0xCC, 0x3E, 0x1C, 0x06, 0x03,
  0xE0, 0x0D, 0x99, 0x8C, 0xCC, 0x6E, 0x76, 0x33, 0x19, 0x9C, 0x7C, 0x06,
  0x07, 0x07, 0xC0, 0x76, 0x3A, 0x30, 0x70, 0x60, 0x60, 0x60, 0xE0, 0x3D,
  0x14, 0x58, 0x38, 0x60, 0xA2, 0xF0, 0x08, 0xCC, 0xF6, 0x31, 0x98, 0xC6,
  0x35, 0xC0, 0xE3, 0x63, 0x66, 0x66, 0x66, 0xCC, 0xCC, 0xFE, 0xEC, 0xE6,
  0xCD, 0x8B, 0x26, 0x8E, 0x18, 0x20, 0xE4, 0xD9, 0x36, 0xE5, 0xDA, 0x77,
  0x19, 0xC6, 0x61, 0x10, 0x39, 0xC7, 0xB0, 0xC0, 0x30, 0x0C, 0x03, 0x00,
  0xE1, 0x5A, 0x67, 0x00, 0x39, 0x8C, 0xC3, 0x21, 0xA0, 0xD0, 0x68, 0x38,
  0x0C, 0x04, 0x04, 0x14, 0x0C, 0x00, 0x3E, 0x46, 0x0C, 0x08, 0x10, 0x20,
  0x70, 0x1A, 0x0E, 0x03, 0x0E, 0x0C, 0x0C, 0x08, 0x18, 0x18, 0x10, 0x60,
  0x30, 0x30, 0x30, 0x60, 0x60, 0x60, 0x30, 0xFF, 0xF0, 0x0C, 0x06, 0x06,
  0x06, 0x04, 0x0C, 0x0C, 0x0C, 0x06, 0x18, 0x18, 0x18, 0x30, 0x30, 0x30,
  0xE0, 0x71, 0x8F };

const GFXglyph FreeSerifBoldItalic9pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   5,    0,    0 },   // 0x20 ' '
  {     1,   6,  13,   7,    1,  -11 },   // 0x21 '!'
  {    11,   6,   5,  10,    3,  -11 },   // 0x22 '"'
  {    15,  11,  13,   9,   -1,  -12 },   // 0x23 '#'
  {    33,  11,  15,   9,   -1,  -12 },   // 0x24 '$'
  {    54,  14,  13,  15,    1,  -11 },   // 0x25 '%'
  {    77,  13,  13,  14,    0,  -11 },   // 0x26 '&'
  {    99,   2,   5,   5,    3,  -11 },   // 0x27 '''
  {   101,   5,  16,   6,    1,  -11 },   // 0x28 '('
  {   111,   5,  16,   6,   -1,  -11 },   // 0x29 ')'
  {   121,   8,   8,   9,    1,  -11 },   // 0x2A '*'
  {   129,   9,   9,  10,    0,   -8 },   // 0x2B '+'
  {   140,   3,   6,   5,   -1,   -2 },   // 0x2C ','
  {   143,   5,   2,   6,    0,   -4 },   // 0x2D '-'
  {   145,   3,   3,   4,    0,   -1 },   // 0x2E '.'
  {   147,   7,  12,   6,    0,  -11 },   // 0x2F '/'
  {   158,   9,  13,   9,    0,  -11 },   // 0x30 '0'
  {   173,   8,  13,   9,    0,  -11 },   // 0x31 '1'
  {   186,   9,  13,   9,    0,  -11 },   // 0x32 '2'
  {   201,   9,  13,   9,    0,  -11 },   // 0x33 '3'
  {   216,   9,  12,   9,    0,  -11 },   // 0x34 '4'
  {   230,   9,  13,   9,    0,  -11 },   // 0x35 '5'
  {   245,   9,  13,   9,    1,  -11 },   // 0x36 '6'
  {   260,   9,  12,   9,    1,  -11 },   // 0x37 '7'
  {   274,   8,  13,   9,    0,  -11 },   // 0x38 '8'
  {   287,   9,  13,   9,    0,  -11 },   // 0x39 '9'
  {   302,   5,   9,   5,    0,   -7 },   // 0x3A ':'
  {   308,   5,  11,   5,    0,   -7 },   // 0x3B ';'
  {   315,   9,  10,  10,    1,   -9 },   // 0x3C '<'
  {   327,   9,   5,  10,    1,   -6 },   // 0x3D '='
  {   333,   9,  10,  10,    1,   -9 },   // 0x3E '>'
  {   345,   8,  13,   9,    1,  -11 },   // 0x3F '?'
  {   358,  13,  13,  15,    1,  -12 },   // 0x40 '@'
  {   380,  12,  13,  13,    0,  -11 },   // 0x41 'A'
  {   400,  12,  13,  12,    0,  -11 },   // 0x42 'B'
  {   420,  12,  13,  11,    1,  -11 },   // 0x43 'C'
  {   440,  14,  13,  13,    0,  -11 },   // 0x44 'D'
  {   463,  13,  13,  11,    0,  -11 },   // 0x45 'E'
  {   485,  13,  13,  11,    0,  -11 },   // 0x46 'F'
  {   507,  12,  13,  13,    1,  -11 },   // 0x47 'G'
  {   527,  15,  13,  14,    0,  -11 },   // 0x48 'H'
  {   552,   8,  13,   7,    0,  -11 },   // 0x49 'I'
  {   565,  10,  14,   9,    0,  -11 },   // 0x4A 'J'
  {   583,  13,  13,  12,    0,  -11 },   // 0x4B 'K'
  {   605,  12,  13,  11,    0,  -11 },   // 0x4C 'L'
  {   625,  17,  13,  16,    0,  -11 },   // 0x4D 'M'
  {   653,  14,  13,  13,    0,  -11 },   // 0x4E 'N'
  {   676,  12,  13,  12,    1,  -11 },   // 0x4F 'O'
  {   696,  12,  13,  11,    0,  -11 },   // 0x50 'P'
  {   716,  12,  16,  12,    1,  -11 },   // 0x51 'Q'
  {   740,  12,  13,  12,    0,  -11 },   // 0x52 'R'
  {   760,   9,  13,   9,    0,  -11 },   // 0x53 'S'
  {   775,  11,  13,  11,    2,  -11 },   // 0x54 'T'
  {   793,  12,  13,  13,    2,  -11 },   // 0x55 'U'
  {   813,  12,  12,  13,    2,  -11 },   // 0x56 'V'
  {   831,  16,  12,  17,    2,  -11 },   // 0x57 'W'
  {   855,  13,  13,  13,    0,  -11 },   // 0x58 'X'
  {   877,  11,  13,  11,    2,  -11 },   // 0x59 'Y'
  {   895,  11,  13,  10,    0,  -11 },   // 0x5A 'Z'
  {   913,   8,  15,   6,   -1,  -11 },   // 0x5B '['
  {   928,   5,  12,   7,    2,  -11 },   // 0x5C '\'
  {   936,   7,  15,   6,   -1,  -11 },   // 0x5D ']'
  {   950,   8,   7,  10,    1,  -11 },   // 0x5E '^'
  {   957,   9,   1,   9,    0,    3 },   // 0x5F '_'
  {   959,   4,   3,   6,    2,  -11 },   // 0x60 '`'
  {   961,   9,   9,   9,    0,   -7 },   // 0x61 'a'
  {   972,   8,  14,   9,    0,  -12 },   // 0x62 'b'
  {   986,   8,   9,   8,    0,   -7 },   // 0x63 'c'
  {   995,  10,  14,   9,    0,  -12 },   // 0x64 'd'
  {  1013,   7,   9,   7,    0,   -7 },   // 0x65 'e'
  {  1021,  11,  17,   9,   -2,  -12 },   // 0x66 'f'
  {  1045,   9,  12,   9,    0,   -7 },   // 0x67 'g'
  {  1059,   9,  14,  10,    0,  -12 },   // 0x68 'h'
  {  1075,   5,  13,   5,    1,  -11 },   // 0x69 'i'
  {  1084,   9,  16,   6,   -1,  -11 },   // 0x6A 'j'
  {  1102,  10,  14,   9,    0,  -12 },   // 0x6B 'k'
  {  1120,   5,  14,   5,    1,  -12 },   // 0x6C 'l'
  {  1129,  13,   9,  14,    0,   -7 },   // 0x6D 'm'
  {  1144,   8,   9,   9,    0,   -7 },   // 0x6E 'n'
  {  1153,   8,   9,   9,    0,   -7 },   // 0x6F 'o'
  {  1162,  10,  12,   9,   -2,   -7 },   // 0x70 'p'
  {  1177,   9,  12,   9,    0,   -7 },   // 0x71 'q'
  {  1191,   8,   8,   7,    0,   -7 },   // 0x72 'r'
  {  1199,   6,   9,   6,    0,   -7 },   // 0x73 's'
  {  1206,   5,  12,   5,    1,  -10 },   // 0x74 't'
  {  1214,   8,   9,  10,    1,   -7 },   // 0x75 'u'
  {  1223,   7,   8,   8,    1,   -7 },   // 0x76 'v'
  {  1230,  10,   8,  12,    1,   -7 },   // 0x77 'w'
  {  1240,  10,   9,   9,   -1,   -7 },   // 0x78 'x'
  {  1252,   9,  12,   8,   -1,   -7 },   // 0x79 'y'
  {  1266,   8,   9,   7,    0,   -7 },   // 0x7A 'z'
  {  1275,   8,  16,   6,    0,  -12 },   // 0x7B '{'
  {  1291,   1,  12,   5,    2,  -11 },   // 0x7C '|'
  {  1293,   8,  16,   6,   -2,  -12 },   // 0x7D '}'
  {  1309,   8,   2,  10,    1,   -4 } }; // 0x7E '~'

const GFXfont FreeSerifBoldItalic9pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBoldItalic9pt7bBitmaps,
  (GFXglyph *)FreeSerifBoldItalic9pt7bGlyphs,
  0x20, 0x7E, 21 };

// Approx. 1983 bytes

#endif // FreeSerifBoldItalic9pt7b_H
