#ifndef FreeSerifItalic10pt7b_H
#define FreeSerifItalic10pt7b_H

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

const uint8_t FreeSerifItalic10pt7bBitmaps[] PROGMEM = {
  0x00, 0x18, 0xC6, 0x23, 0x10, 0x84, 0x40, 0x01, 0x8C, 0x00, 0xCF, 0x38,
  0xA2, 0x90, 0x04, 0x40, 0x88, 0x32, 0x04, 0x43, 0xFE, 0x22, 0x04, 0x40,
  0x98, 0xFF, 0x84, 0x41, 0x90, 0x22, 0x04, 0xC0, 0x01, 0x01, 0xE0, 0x6B,
  0x19, 0x23, 0x24, 0x64, 0x07, 0x80, 0x70, 0x07, 0x80, 0xB8, 0x13, 0x24,
  0x64, 0x8C, 0xD3, 0x0F, 0x80, 0xC0, 0x10, 0x00, 0x1C, 0x61, 0xCF, 0x0E,
  0x28, 0x30, 0xA0, 0xC3, 0x03, 0x14, 0xE4, 0xA6, 0xDC, 0xB1, 0x05, 0xC4,
  0x16, 0x10, 0x98, 0x82, 0x66, 0x10, 0xF0, 0x03, 0x80, 0x4C, 0x0C, 0xC0,
  0xD0, 0x0E, 0x01, 0xCF, 0x6E, 0x24, 0x64, 0xC6, 0x8C, 0x38, 0xC3, 0x0E,
  0x78, 0x78, 0xF0, 0xFA, 0x80, 0x04, 0x21, 0x0C, 0x21, 0x86, 0x30, 0xC3,
  0x0C, 0x30, 0xC1, 0x04, 0x08, 0x00, 0x10, 0x20, 0x82, 0x0C, 0x30, 0xC3,
  0x0C, 0x71, 0x86, 0x30, 0x84, 0x20, 0x00, 0x30, 0x62, 0x9B, 0xC6, 0x94,
  0xCC, 0x18, 0x08, 0x04, 0x02, 0x01, 0x0F, 0xF8, 0x40, 0x20, 0x10, 0x08,
  0x00, 0x6C, 0xA8, 0xF0, 0xF0, 0x01, 0x80, 0x80, 0x80, 0xC0, 0x40, 0x60,
  0x20, 0x30, 0x10, 0x10, 0x18, 0x08, 0x0C, 0x00, 0x0E, 0x0C, 0x8C, 0x6C,
  0x36, 0x1B, 0x0F, 0x87, 0x83, 0xC3, 0xE1, 0xB0, 0xD8, 0xC4, 0xC1, 0xC0,
  0x02, 0x3C, 0x18, 0x20, 0x41, 0x83, 0x04, 0x18, 0x30, 0x60, 0x83, 0x1F,
  0x80, 0x1E, 0x11, 0xD0, 0x60, 0x30, 0x18, 0x18, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x08, 0x2F, 0xE0, 0x0F, 0x08, 0xC0, 0x60, 0x30, 0x30, 0x60, 0xF8,
  0x0E, 0x03, 0x01, 0x80, 0xC0, 0x40, 0x47, 0xC0, 0x00, 0x40, 0x20, 0x18,
  0x0E, 0x05, 0x02, 0x41, 0x30, 0x8C, 0x42, 0x3F, 0xE0, 0x60, 0x18, 0x04,
  0x03, 0x00, 0x03, 0xC3, 0x00, 0x80, 0x38, 0x07, 0x00, 0xE0, 0x18, 0x06,
  0x01, 0x80, 0x40, 0x30, 0x18, 0xF8, 0x00, 0x01, 0xC1, 0xC0, 0xC0, 0x60,
  0x30, 0x1B, 0x87, 0x63, 0x8C, 0xC3, 0x30, 0xCC, 0x33, 0x18, 0x46, 0x0E,
  0x00, 0x3F, 0xD0, 0x20, 0x10, 0x0C, 0x02, 0x01, 0x80, 0x40, 0x20, 0x18,
  0x04, 0x02, 0x00, 0x80, 0x40, 0x00, 0x1E, 0x19, 0xCC, 0x66, 0x33, 0x18,
  0xD0, 0x30, 0x6C, 0x47, 0x61, 0xB0, 0xD8, 0x66, 0x61, 0xE0, 0x0F, 0x06,
  0x63, 0x0D, 0x83, 0x60, 0xD8, 0x36, 0x1C, 0xC6, 0x3F, 0x80, 0xC0, 0x60,
  0x30, 0x38, 0x30, 0x00, 0x33, 0x00, 0x00, 0x0C, 0xC0, 0x18, 0xC0, 0x00,
  0x00, 0x0C, 0x61, 0x10, 0x00, 0x00, 0x00, 0x30, 0x38, 0x38, 0x78, 0x30,
  0x0F, 0x00, 0x70, 0x07, 0x00, 0x70, 0x04, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0xFF, 0xC0, 0x00, 0x38, 0x03, 0x80, 0x38, 0x03, 0x80, 0x30, 0x1C, 0x1C,
  0x1C, 0x3C, 0x08, 0x00, 0x3C, 0x8D, 0x18, 0x30, 0xC3, 0x0C, 0x20, 0x40,
  0x80, 0x06, 0x0C, 0x00, 0x07, 0xC0, 0x60, 0xC3, 0x00, 0x98, 0xEB, 0xC6,
  0x67, 0x19, 0x9C, 0xC4, 0x73, 0x11, 0xCC, 0xC9, 0x9D, 0xC3, 0x00, 0x06,
  0x04, 0x07, 0xE0, 0x00, 0x80, 0x18, 0x01, 0x80, 0x28, 0x04, 0xC0, 0x8C,
  0x08, 0xC1, 0xFC, 0x10, 0xC2, 0x04, 0x20, 0x64, 0x06, 0xF1, 0xF0, 0x1F,
  0xE0, 0xC3, 0x0C, 0x30, 0xC3, 0x18, 0x61, 0xF8, 0x18, 0xC1, 0x86, 0x30,
  0x63, 0x06, 0x30, 0xE7, 0x1C, 0xFF, 0x00, 0x07, 0xC8, 0xE1, 0x8C, 0x04,
  0xE0, 0x26, 0x00, 0x60, 0x03, 0x00, 0x18, 0x00, 0xC0, 0x06, 0x00, 0x18,
  0x10, 0xC1, 0x01, 0xF0, 0x00, 0x1F, 0xE0, 0x30, 0xC0, 0xC1, 0x83, 0x03,
  0x18, 0x0C, 0x60, 0x31, 0x80, 0xC6, 0x03, 0x30, 0x18, 0xC0, 0x63, 0x03,
  0x1C, 0x38, 0xFF, 0x80, 0x1F, 0xFC, 0x30, 0x20, 0xC0, 0x83, 0x00, 0x18,
  0xC0, 0x7F, 0x01, 0x88, 0x06, 0x20, 0x30, 0x00, 0xC0, 0x43, 0x02, 0x1C,
  0x18, 0xFF, 0xE0, 0x1F, 0xFC, 0x30, 0x30, 0xC0, 0x83, 0x00, 0x18, 0x40,
  0x63, 0x01, 0xFC, 0x06, 0x20, 0x30, 0x80, 0xC0, 0x03, 0x00, 0x1C, 0x00,
  0xF8, 0x00, 0x07, 0xC4, 0x30, 0xF3, 0x00, 0x8C, 0x02, 0x60, 0x03, 0x80,
  0x0C, 0x0F, 0xB0, 0x1C, 0xC0, 0x63, 0x01, 0x86, 0x06, 0x1C, 0x30, 0x1F,
  0x80, 0x1F, 0x1E, 0x18, 0x18, 0x30, 0x30, 0x60, 0xC1, 0x81, 0x83, 0x03,
  0x07, 0xFE, 0x0C, 0x18, 0x30, 0x30, 0x60, 0x60, 0xC1, 0x83, 0x03, 0x0F,
  0x9F, 0x80, 0x1F, 0x0C, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x30, 0x30,
  0x30, 0x70, 0xF8, 0x07, 0xC0, 0xC0, 0x30, 0x0C, 0x02, 0x01, 0x80, 0x60,
  0x18, 0x0C, 0x03, 0x00, 0xC3, 0x20, 0xF0, 0x00, 0x1F, 0x3C, 0x30, 0x60,
  0xC2, 0x03, 0x10, 0x09, 0x80, 0x78, 0x01, 0xE0, 0x06, 0xC0, 0x31, 0x80,
  0xC6, 0x03, 0x0C, 0x18, 0x38, 0xF9, 0xF0, 0x1F, 0x00, 0xC0, 0x0C, 0x00,
  0xC0, 0x18, 0x01, 0x80, 0x18, 0x01, 0x80, 0x30, 0x03, 0x01, 0x30, 0x37,
  0x06, 0xFF, 0xE0, 0x1E, 0x03, 0xC3, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x2C,
  0x16, 0x16, 0x05, 0x85, 0x81, 0x22, 0x60, 0x49, 0x18, 0x23, 0x4C, 0x08,
  0xE3, 0x02, 0x30, 0xC1, 0x0C, 0x60, 0xF2, 0x3E, 0x00, 0x1C, 0x1E, 0x18,
  0x18, 0x38, 0x20, 0x50, 0x40, 0xB1, 0x02, 0x62, 0x04, 0x44, 0x08, 0xD8,
  0x20, 0xA0, 0x41, 0xC0, 0x81, 0x83, 0x02, 0x0F, 0x04, 0x00, 0x03, 0xC0,
  0xC6, 0x18, 0x33, 0x03, 0x60, 0x36, 0x03, 0xC0, 0x3C, 0x06, 0xC0, 0x6C,
  0x0C, 0xC1, 0x86, 0x30, 0x3E, 0x00, 0x1F, 0xC0, 0xC7, 0x0C, 0x30, 0xC3,
  0x18, 0x31, 0x86, 0x1F, 0xC1, 0x80, 0x30, 0x03, 0x00, 0x30, 0x06, 0x00,
  0xF8, 0x00, 0x03, 0xC0, 0xC6, 0x18, 0x23, 0x03, 0x60, 0x36, 0x03, 0xE0,
  0x3C, 0x07, 0xC0, 0x6C, 0x06, 0xC0, 0xCC, 0x08, 0x61, 0x03, 0xE0, 0x10,
  0x07, 0x82, 0x8F, 0xC0, 0x1F, 0xE0, 0xC7, 0x0C, 0x30, 0xC3, 0x18, 0x61,
  0xFC, 0x1B, 0x01, 0x98, 0x31, 0x83, 0x18, 0x30, 0xC6, 0x0C, 0xF8, 0xF0,
  0x0F, 0x23, 0x18, 0xC1, 0x18, 0x03, 0x80, 0x38, 0x03, 0xC0, 0x1C, 0x01,
  0x88, 0x31, 0x06, 0x31, 0x89, 0xE0, 0x7F, 0xF4, 0x63, 0x86, 0x20, 0xC0,
  0x0C, 0x00, 0xC0, 0x08, 0x01, 0x80, 0x18, 0x01, 0x80, 0x30, 0x03, 0x00,
  0xFC, 0x00, 0x7C, 0x3C, 0xE0, 0x43, 0x01, 0x0C, 0x08, 0x70, 0x21, 0x80,
  0x86, 0x02, 0x18, 0x10, 0xC0, 0x43, 0x01, 0x0C, 0x08, 0x18, 0x40, 0x3E,
  0x00, 0xF8, 0xF6, 0x06, 0x60, 0x46, 0x04, 0x60, 0x83, 0x10, 0x31, 0x03,
  0x20, 0x34, 0x03, 0x40, 0x38, 0x01, 0x00, 0x10, 0x00, 0xF3, 0xC7, 0x61,
  0x82, 0x61, 0x82, 0x61, 0x84, 0x63, 0x84, 0x63, 0x88, 0x34, 0x90, 0x34,
  0xD0, 0x38, 0xE0, 0x38, 0xE0, 0x30, 0xC0, 0x30, 0xC0, 0x20, 0x80, 0x3E,
  0x3C, 0x30, 0x60, 0xC2, 0x01, 0x90, 0x06, 0x80, 0x1C, 0x00, 0x30, 0x01,
  0xC0, 0x09, 0x80, 0x46, 0x02, 0x0C, 0x18, 0x30, 0xF3, 0xF0, 0x79, 0xE6,
  0x08, 0xC2, 0x08, 0x41, 0x90, 0x34, 0x07, 0x00, 0xC0, 0x18, 0x03, 0x00,
  0x40, 0x18, 0x0F, 0xC0, 0x1F, 0xF8, 0x83, 0x88, 0x18, 0x01, 0xC0, 0x1C,
  0x01, 0xC0, 0x1C, 0x00, 0xC0, 0x0C, 0x00, 0xE0, 0x8E, 0x0C, 0xE0, 0xCF,
  0xFE, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x10, 0x20, 0x20,
  0x20, 0x20, 0x40, 0x40, 0x40, 0x70, 0xC0, 0x81, 0x81, 0x03, 0x02, 0x06,
  0x04, 0x08, 0x18, 0x10, 0x30, 0x20, 0x1C, 0x10, 0x42, 0x08, 0x20, 0x84,
  0x10, 0x41, 0x04, 0x20, 0x82, 0x38, 0x18, 0x1C, 0x34, 0x26, 0x62, 0x43,
  0xC1, 0xFF, 0xC0, 0xD8, 0x80, 0x0F, 0xC6, 0x33, 0x09, 0x82, 0x61, 0xB0,
  0x6C, 0x33, 0x3D, 0x73, 0x80, 0x00, 0x0E, 0x01, 0x80, 0x60, 0x10, 0x04,
  0xE3, 0xCC, 0xC3, 0x30, 0xD8, 0x76, 0x19, 0x0C, 0x46, 0x1F, 0x00, 0x0F,
  0x18, 0xD8, 0x0C, 0x0C, 0x06, 0x03, 0x01, 0xC4, 0x7C, 0x00, 0x00, 0x00,
  0x70, 0x04, 0x03, 0x00, 0x81, 0xA1, 0x98, 0xC6, 0x61, 0x18, 0x4C, 0x33,
  0x0C, 0xCF, 0x5C, 0xE0, 0x0F, 0x19, 0x31, 0x62, 0xEC, 0xD0, 0xC0, 0xC2,
  0x7C, 0x00, 0x78, 0x04, 0xC0, 0x40, 0x02, 0x00, 0x30, 0x07, 0xE0, 0x08,
  0x00, 0x40, 0x06, 0x00, 0x30, 0x01, 0x00, 0x08, 0x00, 0xC0, 0x06, 0x00,
  0x20, 0x01, 0x00, 0x90, 0x07, 0x00, 0x00, 0x1E, 0x19, 0xD8, 0xCC, 0x66,
  0x60, 0xE1, 0x80, 0xE0, 0x5C, 0x42, 0x21, 0x18, 0x87, 0x80, 0x00, 0x0E,
  0x00, 0x80, 0x60, 0x10, 0x04, 0x73, 0x6C, 0xE3, 0x31, 0x8C, 0x66, 0x19,
  0x8C, 0x43, 0x50, 0xE0, 0x33, 0x00, 0xE2, 0x64, 0x4C, 0xCE, 0xC0, 0x03,
  0x03, 0x00, 0x00, 0x0E, 0x06, 0x04, 0x04, 0x0C, 0x0C, 0x08, 0x08, 0x18,
  0x18, 0x10, 0xD0, 0xE0, 0x00, 0x1C, 0x06, 0x03, 0x01, 0x00, 0x9C, 0xC4,
  0x68, 0x28, 0x1C, 0x1B, 0x09, 0x84, 0x66, 0x18, 0x09, 0x84, 0x63, 0x10,
  0x8C, 0x62, 0x11, 0x8D, 0x70, 0x73, 0x9C, 0xD6, 0xB3, 0x9C, 0x8C, 0x66,
  0x63, 0x19, 0x8C, 0x44, 0x21, 0x11, 0x8D, 0xC6, 0x38, 0x73, 0x9E, 0xCC,
  0x66, 0x26, 0x13, 0x19, 0x0C, 0x8D, 0xC7, 0x00, 0x0F, 0x18, 0xD8, 0x6C,
  0x3C, 0x1E, 0x1B, 0x0D, 0x8C, 0x78, 0x00, 0x1C, 0xE0, 0xF3, 0x0C, 0x30,
  0xC3, 0x08, 0x31, 0x86, 0x18, 0xC1, 0x18, 0x1F, 0x03, 0x00, 0x30, 0x02,
  0x00, 0xF8, 0x00, 0x0E, 0xC6, 0x63, 0x19, 0x86, 0x61, 0x30, 0xCC, 0x33,
  0x3C, 0x72, 0x01, 0x80, 0x60, 0x10, 0x1F, 0x00, 0x73, 0x3F, 0x30, 0x30,
  0x20, 0x60, 0x60, 0x40, 0x40, 0x1A, 0x6C, 0xC9, 0xC1, 0x81, 0xA3, 0x66,
  0xB8, 0x11, 0x9E, 0x42, 0x31, 0x08, 0xC6, 0xB8, 0xE1, 0xB0, 0xD0, 0x48,
  0x6C, 0x36, 0x7A, 0x39, 0x2D, 0xE7, 0x00, 0xE1, 0x61, 0x61, 0x32, 0x32,
  0x34, 0x38, 0x30, 0x20, 0xE0, 0x0B, 0x10, 0x4D, 0x42, 0x6A, 0x23, 0x91,
  0x1C, 0x90, 0xE5, 0x06, 0x30, 0x21, 0x00, 0x18, 0xCB, 0xD0, 0xE0, 0x10,
  0x04, 0x03, 0x01, 0x60, 0x8A, 0xE3, 0x00, 0x30, 0x8C, 0x46, 0x21, 0x20,
  0x90, 0x68, 0x38, 0x08, 0x04, 0x04, 0x04, 0x02, 0x0E, 0x00, 0x3F, 0x42,
  0x04, 0x08, 0x10, 0x30, 0x20, 0x60, 0xF0, 0x1A, 0x0C, 0x06, 0x10, 0x20,
  0xC1, 0x02, 0x0C, 0x38, 0x20, 0x41, 0x83, 0x04, 0x08, 0x30, 0x60, 0xE0,
  0xE0, 0xFF, 0xF8, 0x0F, 0x07, 0x03, 0x02, 0x02, 0x06, 0x06, 0x04, 0x04,
  0x0C, 0x0E, 0x08, 0x08, 0x18, 0x10, 0x10, 0x30, 0x60, 0x78, 0xC7, 0x80 };

const GFXglyph FreeSerifItalic10pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   5,    0,    0 },   // 0x20 ' '
  {     1,   5,  13,   7,    1,  -12 },   // 0x21 '!'
  {    10,   6,   5,   7,    3,  -12 },   // 0x22 '"'
  {    14,  11,  13,  10,    0,  -12 },   // 0x23 '#'
  {    32,  11,  17,  10,    0,  -14 },   // 0x24 '$'
  {    56,  14,  13,  17,    2,  -12 },   // 0x25 '%'
  {    79,  12,  13,  16,    2,  -12 },   // 0x26 '&'
  {    99,   2,   5,   4,    3,  -12 },   // 0x27 '''
  {   101,   6,  17,   7,    1,  -12 },   // 0x28 '('
  {   114,   6,  17,   7,    0,  -12 },   // 0x29 ')'
  {   127,   7,   8,  10,    3,  -12 },   // 0x2A '*'
  {   134,   9,   9,  14,    2,   -8 },   // 0x2B '+'
  {   145,   3,   5,   5,   -1,   -1 },   // 0x2C ','
  {   147,   4,   1,   7,    1,   -4 },   // 0x2D '-'
  {   148,   2,   2,   5,    1,   -1 },   // 0x2E '.'
  {   149,   9,  13,   6,    0,  -12 },   // 0x2F '/'
  {   164,   9,  14,  10,    1,  -13 },   // 0x30 '0'
  {   180,   7,  14,  10,    1,  -13 },   // 0x31 '1'
  {   193,   9,  13,  10,    0,  -12 },   // 0x32 '2'
  {   208,   9,  14,  10,    1,  -13 },   // 0x33 '3'
  {   224,  10,  14,  10,    0,  -13 },   // 0x34 '4'
  {   242,  10,  13,  10,    0,  -12 },   // 0x35 '5'
  {   259,  10,  14,  10,    1,  -13 },   // 0x36 '6'
  {   277,  10,  13,  10,    1,  -12 },   // 0x37 '7'
  {   294,   9,  14,  10,    1,  -13 },   // 0x38 '8'
  {   310,  10,  14,  10,    0,  -13 },   // 0x39 '9'
  {   328,   4,   9,   5,    1,   -8 },   // 0x3A ':'
  {   333,   5,  12,   5,    0,   -8 },   // 0x3B ';'
  {   341,  10,  11,  11,    1,  -10 },   // 0x3C '<'
  {   355,  10,   5,  13,    2,   -6 },   // 0x3D '='
  {   362,  10,  11,  11,    1,  -10 },   // 0x3E '>'
  {   376,   7,  13,   9,    3,  -12 },   // 0x3F '?'
  {   388,  14,  13,  16,    1,  -12 },   // 0x40 '@'
  {   411,  12,  13,  13,    0,  -12 },   // 0x41 'A'
  {   431,  12,  13,  12,    0,  -12 },   // 0x42 'B'
  {   451,  13,  13,  12,    1,  -12 },   // 0x43 'C'
  {   473,  14,  13,  14,    0,  -12 },   // 0x44 'D'
  {   496,  14,  13,  11,    0,  -12 },   // 0x45 'E'
  {   519,  14,  13,  12,    0,  -12 },   // 0x46 'F'
  {   542,  14,  13,  14,    1,  -12 },   // 0x47 'G'
  {   565,  15,  13,  14,    0,  -12 },   // 0x48 'H'
  {   590,   8,  13,   6,    0,  -12 },   // 0x49 'I'
  {   603,  10,  13,   9,    0,  -12 },   // 0x4A 'J'
  {   620,  14,  13,  13,    0,  -12 },   // 0x4B 'K'
  {   643,  12,  13,  11,    0,  -12 },   // 0x4C 'L'
  {   663,  18,  13,  16,    0,  -12 },   // 0x4D 'M'
  {   693,  15,  13,  14,    0,  -12 },   // 0x4E 'N'
  {   718,  12,  13,  13,    1,  -12 },   // 0x4F 'O'
  {   738,  12,  13,  11,    0,  -12 },   // 0x50 'P'
  {   758,  12,  17,  13,    1,  -12 },   // 0x51 'Q'
  {   784,  12,  13,  12,    0,  -12 },   // 0x52 'R'
  {   804,  11,  13,   9,    0,  -12 },   // 0x53 'S'
  {   822,  12,  13,  12,    2,  -12 },   // 0x54 'T'
  {   842,  14,  13,  14,    2,  -12 },   // 0x55 'U'
  {   865,  12,  13,  13,    3,  -12 },   // 0x56 'V'
  {   885,  16,  13,  18,    3,  -12 },   // 0x57 'W'
  {   911,  14,  13,  13,    0,  -12 },   // 0x58 'X'
  {   934,  11,  13,  12,    2,  -12 },   // 0x59 'Y'
  {   952,  13,  13,  11,    0,  -12 },   // 0x5A 'Z'
  {   974,   8,  16,   8,    0,  -12 },   // 0x5B '['
  {   990,   7,  13,  10,    2,  -12 },   // 0x5C '\'
  {  1002,   6,  16,   8,    1,  -12 },   // 0x5D ']'
  {  1014,   8,   7,   8,    0,  -12 },   // 0x5E '^'
  {  1021,  10,   1,  10,    0,    3 },   // 0x5F '_'
  {  1023,   3,   3,   5,    3,  -12 },   // 0x60 '`'
  {  1025,  10,   9,  10,    0,   -8 },   // 0x61 'a'
  {  1037,  10,  14,  10,    0,  -13 },   // 0x62 'b'
  {  1055,   9,   9,   8,    0,   -8 },   // 0x63 'c'
  {  1066,  10,  14,  10,    0,  -13 },   // 0x64 'd'
  {  1084,   8,   9,   8,    0,   -8 },   // 0x65 'e'
  {  1093,  13,  18,   9,   -2,  -13 },   // 0x66 'f'
  {  1123,   9,  13,   9,    0,   -8 },   // 0x67 'g'
  {  1138,  10,  14,  10,    0,  -13 },   // 0x68 'h'
  {  1156,   4,  13,   5,    1,  -12 },   // 0x69 'i'
  {  1163,   8,  17,   6,   -1,  -12 },   // 0x6A 'j'
  {  1180,   9,  14,   9,    0,  -13 },   // 0x6B 'k'
  {  1196,   5,  14,   5,    1,  -13 },   // 0x6C 'l'
  {  1205,  14,   9,  14,    0,   -8 },   // 0x6D 'm'
  {  1221,   9,   9,  10,    0,   -8 },   // 0x6E 'n'
  {  1232,   9,   9,   9,    1,   -8 },   // 0x6F 'o'
  {  1243,  12,  13,   9,   -2,   -8 },   // 0x70 'p'
  {  1263,  10,  13,  10,    0,   -8 },   // 0x71 'q'
  {  1280,   8,   9,   7,    0,   -8 },   // 0x72 'r'
  {  1289,   7,   9,   7,    0,   -8 },   // 0x73 's'
  {  1297,   5,  11,   5,    1,  -10 },   // 0x74 't'
  {  1304,   9,   9,  10,    1,   -8 },   // 0x75 'u'
  {  1315,   8,   9,   9,    1,   -8 },   // 0x76 'v'
  {  1324,  13,   9,  14,    1,   -8 },   // 0x77 'w'
  {  1339,  10,   9,   9,   -1,   -8 },   // 0x78 'x'
  {  1351,   9,  13,   9,    0,   -8 },   // 0x79 'y'
  {  1366,   8,  11,   8,    0,   -8 },   // 0x7A 'z'
  {  1377,   7,  18,   8,    1,  -13 },   // 0x7B '{'
  {  1393,   1,  13,   6,    2,  -12 },   // 0x7C '|'
  {  1395,   8,  18,   8,   -1,  -14 },   // 0x7D '}'
  {  1413,   9,   2,  11,    1,   -5 } }; // 0x7E '~'

const GFXfont FreeSerifItalic10pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic10pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic10pt7bGlyphs,
  0x20, 0x7E, 24 };

// Approx. 2088 bytes

#endif // FreeSerifItalic10pt7b_H
