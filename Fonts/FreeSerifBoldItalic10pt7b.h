#ifndef FreeSerifBoldItalic10pt7b_H
#define FreeSerifBoldItalic10pt7b_H

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

const uint8_t FreeSerifBoldItalic10pt7bBitmaps[] PROGMEM = {
  0x00, 0x0C, 0x31, 0xC7, 0x18, 0x61, 0x84, 0x10, 0x80, 0x00, 0xE3, 0x8E,
  0x00, 0xC7, 0x8F, 0x1C, 0x28, 0x50, 0x80, 0x03, 0x20, 0x26, 0x06, 0x60,
  0x44, 0x3F, 0xE0, 0x88, 0x19, 0x81, 0x90, 0x7F, 0xC3, 0x20, 0x26, 0x06,
  0x60, 0x44, 0x00, 0x00, 0x80, 0x70, 0x0D, 0xE1, 0x93, 0x1A, 0x21, 0xA2,
  0x1E, 0x00, 0xE0, 0x07, 0x00, 0x78, 0x05, 0x84, 0xD8, 0x49, 0x8E, 0x98,
  0x3B, 0x01, 0xE0, 0x10, 0x00, 0x1C, 0x20, 0x67, 0xC1, 0x89, 0x07, 0x12,
  0x0C, 0x28, 0x18, 0x90, 0x32, 0x40, 0x38, 0x8E, 0x02, 0x72, 0x04, 0xC4,
  0x13, 0x88, 0x26, 0x20, 0x8C, 0x41, 0x19, 0x04, 0x1C, 0x00, 0x01, 0xC0,
  0x08, 0x80, 0x62, 0x01, 0x98, 0x06, 0x80, 0x1C, 0x01, 0xF3, 0xCD, 0xC6,
  0x63, 0x11, 0x8E, 0xCE, 0x3A, 0x38, 0xF8, 0xE1, 0xC1, 0xC7, 0x93, 0xE7,
  0x80, 0xFE, 0xA0, 0x04, 0x21, 0x8C, 0x61, 0x8E, 0x30, 0xC3, 0x0C, 0x30,
  0xC1, 0x04, 0x08, 0x20, 0x20, 0x40, 0x82, 0x0C, 0x30, 0xC3, 0x0C, 0x31,
  0xC6, 0x18, 0xC2, 0x10, 0x80, 0x0C, 0x06, 0x12, 0x6D, 0x71, 0xC3, 0xFD,
  0x26, 0x18, 0x0C, 0x00, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x18, 0x18, 0x18,
  0x18, 0xFD, 0x95, 0x00, 0xFF, 0xC0, 0xFF, 0x80, 0x03, 0x02, 0x06, 0x04,
  0x0C, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x20, 0x60, 0x40, 0xC0, 0x0E, 0x0C,
  0x8E, 0x66, 0x37, 0x1B, 0x8F, 0x8F, 0xC7, 0xE3, 0xF1, 0xB1, 0xD8, 0xCC,
  0x62, 0x60, 0xE0, 0x03, 0x1F, 0x07, 0x06, 0x0E, 0x0E, 0x0E, 0x0C, 0x1C,
  0x1C, 0x18, 0x18, 0x38, 0x38, 0xFE, 0x0F, 0x04, 0xF2, 0x1C, 0x07, 0x01,
  0xC0, 0x60, 0x38, 0x0C, 0x06, 0x03, 0x00, 0x80, 0x40, 0x30, 0x9F, 0xCF,
  0xF0, 0x0F, 0x84, 0xF0, 0x1C, 0x07, 0x03, 0x81, 0x81, 0xF0, 0x1C, 0x03,
  0x00, 0xC0, 0x30, 0x0C, 0x02, 0x39, 0x0F, 0x80, 0x00, 0x40, 0x30, 0x1C,
  0x0F, 0x05, 0x82, 0xE1, 0x38, 0x8C, 0x43, 0x11, 0xCF, 0xF8, 0x18, 0x06,
  0x03, 0x80, 0x0F, 0x87, 0xE1, 0x00, 0x80, 0x3C, 0x0F, 0x81, 0xE0, 0x1C,
  0x03, 0x00, 0xC0, 0x30, 0x0C, 0x06, 0x31, 0x0F, 0x80, 0x01, 0x83, 0x87,
  0x07, 0x03, 0x03, 0xE1, 0x99, 0xCC, 0xE6, 0x63, 0x31, 0x99, 0xCC, 0xC2,
  0x61, 0xE0, 0x3F, 0xCF, 0xE4, 0x18, 0x0C, 0x02, 0x01, 0x80, 0x40, 0x30,
  0x18, 0x06, 0x03, 0x00, 0xC0, 0x60, 0x18, 0x00, 0x0F, 0x86, 0x33, 0x0C,
  0xC3, 0x38, 0xCF, 0x61, 0xE0, 0x7C, 0x67, 0xB0, 0xEC, 0x1B, 0x06, 0xC1,
  0x18, 0xC3, 0xC0, 0x0F, 0x06, 0x23, 0x8C, 0xC3, 0x70, 0xD8, 0x76, 0x1D,
  0x87, 0x63, 0x8F, 0xE0, 0x70, 0x38, 0x1C, 0x1C, 0x0C, 0x00, 0x39, 0xCE,
  0x00, 0x00, 0x1C, 0xE7, 0x00, 0x39, 0xCE, 0x00, 0x01, 0x1C, 0xE1, 0x10,
  0x88, 0x00, 0x00, 0x00, 0x70, 0x78, 0x78, 0xF8, 0x38, 0x0F, 0x00, 0xF0,
  0x0F, 0x00, 0xF0, 0x04, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00,
  0x38, 0x07, 0x80, 0x78, 0x07, 0xC0, 0x70, 0x3C, 0x3C, 0x3C, 0x3C, 0x08,
  0x00, 0x3C, 0x66, 0x67, 0x07, 0x07, 0x0E, 0x1C, 0x10, 0x20, 0x60, 0x00,
  0x00, 0xC0, 0xE0, 0xE0, 0x07, 0xE0, 0x70, 0xC3, 0x00, 0x98, 0x32, 0x61,
  0xB7, 0x0C, 0x9C, 0x36, 0x71, 0x99, 0xC6, 0x67, 0x1F, 0xA6, 0x37, 0x0C,
  0x00, 0x18, 0x10, 0x1F, 0x80, 0x00, 0x40, 0x06, 0x00, 0x30, 0x03, 0x80,
  0x2C, 0x01, 0x60, 0x13, 0x81, 0x1C, 0x08, 0xE0, 0xFF, 0x04, 0x38, 0x40,
  0xC2, 0x07, 0x30, 0x3B, 0xC7, 0xE0, 0x1F, 0xE0, 0x71, 0xC3, 0x8E, 0x1C,
  0x70, 0xE3, 0x8E, 0x38, 0x7E, 0x03, 0x9C, 0x1C, 0x71, 0xC3, 0x8E, 0x1C,
  0x70, 0xE7, 0x0E, 0x3C, 0xF3, 0xFE, 0x00, 0x07, 0xC8, 0x71, 0xC7, 0x06,
  0x70, 0x27, 0x01, 0x38, 0x03, 0xC0, 0x1C, 0x00, 0xE0, 0x07, 0x00, 0x38,
  0x01, 0xC0, 0x06, 0x04, 0x38, 0x40, 0x7C, 0x00, 0x1F, 0xF0, 0x1C, 0x30,
  0x38, 0x70, 0x70, 0x70, 0xE0, 0xE3, 0x81, 0xC7, 0x03, 0x8E, 0x07, 0x18,
  0x0E, 0x70, 0x38, 0xE0, 0x71, 0xC1, 0xC7, 0x07, 0x0F, 0x1C, 0x3F, 0xE0,
  0x00, 0x1F, 0xFC, 0x38, 0x70, 0xE0, 0x83, 0x82, 0x0E, 0x20, 0x71, 0x81,
  0xFE, 0x07, 0x10, 0x1C, 0x40, 0xE1, 0x03, 0x81, 0x0E, 0x0C, 0x70, 0x71,
  0xE3, 0x8F, 0xFE, 0x00, 0x1F, 0xFC, 0x3C, 0x70, 0xE0, 0x83, 0x82, 0x0E,
  0x20, 0x71, 0x81, 0xFE, 0x07, 0x10, 0x1C, 0x40, 0xE1, 0x03, 0x80, 0x0E,
  0x00, 0x78, 0x01, 0xE0, 0x0F, 0xC0, 0x00, 0x07, 0xC8, 0x71, 0xC6, 0x04,
  0x70, 0x27, 0x00, 0x38, 0x03, 0xC0, 0x1C, 0x1F, 0xE0, 0x77, 0x03, 0xB8,
  0x19, 0xC1, 0xC6, 0x0E, 0x18, 0x70, 0x7E, 0x00, 0x1F, 0xBF, 0x0F, 0x0E,
  0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1F, 0xF8,
  0x1C, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x70, 0x30, 0x70, 0x78, 0x70,
  0xFD, 0xFC, 0x1F, 0x87, 0x83, 0x81, 0xC0, 0xE0, 0xE0, 0x70, 0x38, 0x18,
  0x1C, 0x0E, 0x07, 0x03, 0x03, 0xC3, 0xF0, 0x07, 0xE0, 0x38, 0x07, 0x00,
  0xE0, 0x38, 0x07, 0x00, 0xE0, 0x18, 0x07, 0x00, 0xE0, 0x1C, 0x07, 0x00,
  0xE1, 0x9C, 0x37, 0x03, 0xC0, 0x1F, 0xBC, 0x3C, 0x60, 0xE1, 0x03, 0x88,
  0x0E, 0x40, 0x72, 0x01, 0xD0, 0x07, 0xE0, 0x1F, 0x80, 0xE7, 0x03, 0x9C,
  0x0E, 0x38, 0x70, 0xE1, 0xE3, 0xCF, 0xDF, 0x80, 0x1F, 0x80, 0x78, 0x03,
  0x80, 0x1C, 0x00, 0xE0, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x18, 0x01, 0xC0,
  0x0E, 0x00, 0x70, 0x37, 0x03, 0x38, 0x3B, 0xFF, 0xC0, 0x1E, 0x03, 0xE1,
  0xC0, 0x78, 0x3C, 0x1E, 0x07, 0x83, 0xC0, 0xF0, 0xB8, 0x2E, 0x36, 0x05,
  0xC5, 0xC0, 0xB9, 0x38, 0x13, 0x67, 0x04, 0x68, 0xC0, 0x8F, 0x38, 0x11,
  0xC7, 0x06, 0x30, 0xE0, 0xC6, 0x3C, 0x3C, 0x8F, 0xC0, 0x1E, 0x1F, 0x0E,
  0x06, 0x0F, 0x04, 0x0F, 0x04, 0x0B, 0x84, 0x13, 0x88, 0x11, 0xC8, 0x11,
  0xC8, 0x11, 0xD0, 0x20, 0xF0, 0x20, 0xF0, 0x20, 0x70, 0x60, 0x60, 0x60,
  0x20, 0x00, 0x20, 0x03, 0xC0, 0x73, 0x87, 0x0C, 0x70, 0x73, 0x83, 0xB8,
  0x1D, 0xC0, 0xFE, 0x0F, 0xE0, 0x77, 0x03, 0xB8, 0x39, 0xC1, 0xC6, 0x1C,
  0x39, 0xC0, 0xF8, 0x00, 0x1F, 0xE0, 0x71, 0x83, 0x8E, 0x1C, 0x70, 0xE3,
  0x8E, 0x3C, 0x71, 0xC3, 0xF8, 0x18, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x07,
  0x00, 0x38, 0x03, 0xF0, 0x00, 0x03, 0xC0, 0x73, 0x87, 0x0C, 0x70, 0x73,
  0x83, 0xB8, 0x1D, 0xC0, 0xFE, 0x0F, 0xE0, 0x77, 0x03, 0xB8, 0x39, 0xC1,
  0xC6, 0x1C, 0x30, 0xC0, 0x78, 0x02, 0x00, 0x7E, 0x36, 0xFE, 0x00, 0x1F,
  0xE0, 0x79, 0x83, 0x8E, 0x1C, 0x70, 0xE3, 0x8E, 0x38, 0x73, 0xC3, 0xF8,
  0x1F, 0x81, 0xCE, 0x0E, 0x70, 0x73, 0x83, 0x8E, 0x3C, 0x73, 0xF3, 0xE0,
  0x0E, 0x46, 0x73, 0x08, 0xC2, 0x38, 0x0F, 0x01, 0xE0, 0x7C, 0x07, 0x00,
  0xE0, 0x19, 0x06, 0x41, 0x98, 0xC9, 0xE0, 0x7F, 0xFB, 0x39, 0xF3, 0x85,
  0x1C, 0x20, 0xE0, 0x07, 0x00, 0x70, 0x03, 0x80, 0x1C, 0x01, 0xC0, 0x0E,
  0x00, 0x70, 0x03, 0x80, 0x3C, 0x03, 0xF8, 0x00, 0x7E, 0x7C, 0xF0, 0x63,
  0x81, 0x0E, 0x04, 0x38, 0x11, 0xC0, 0x87, 0x02, 0x1C, 0x08, 0x60, 0x23,
  0x81, 0x0E, 0x04, 0x38, 0x10, 0xE0, 0x81, 0xC6, 0x03, 0xE0, 0x00, 0xFC,
  0x7B, 0x81, 0x9C, 0x08, 0xE0, 0x87, 0x84, 0x1C, 0x40, 0xE4, 0x07, 0x20,
  0x3A, 0x01, 0xD0, 0x0F, 0x00, 0x30, 0x01, 0x80, 0x08, 0x00, 0xF9, 0xF7,
  0xB8, 0x70, 0x9C, 0x38, 0x8E, 0x1C, 0x47, 0x1E, 0x21, 0x97, 0x20, 0xEB,
  0x90, 0x79, 0xD0, 0x3C, 0xE8, 0x1C, 0x38, 0x0E, 0x1C, 0x06, 0x0C, 0x03,
  0x06, 0x01, 0x02, 0x00, 0x3F, 0xBC, 0x38, 0x60, 0xE1, 0x01, 0xC8, 0x07,
  0x40, 0x1E, 0x00, 0x30, 0x00, 0xE0, 0x07, 0x80, 0x16, 0x00, 0x9C, 0x04,
  0x70, 0x21, 0xC1, 0x87, 0x8F, 0x3F, 0x00, 0xF9, 0xEE, 0x19, 0xC2, 0x38,
  0x43, 0x90, 0x74, 0x0E, 0x80, 0xE0, 0x18, 0x07, 0x00, 0xE0, 0x1C, 0x07,
  0x00, 0xF0, 0x3F, 0x00, 0x1F, 0xF8, 0xC3, 0x84, 0x3C, 0x43, 0xC0, 0x1C,
  0x01, 0xE0, 0x1E, 0x00, 0xE0, 0x0F, 0x00, 0xF0, 0x07, 0x04, 0x78, 0x67,
  0x82, 0x38, 0x73, 0xFF, 0x80, 0x0F, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x18,
  0x30, 0x30, 0x30, 0x30, 0x20, 0x60, 0x60, 0x60, 0x60, 0xF8, 0xC6, 0x10,
  0x86, 0x30, 0x84, 0x31, 0x84, 0x21, 0x8C, 0x1F, 0x03, 0x06, 0x06, 0x06,
  0x06, 0x0C, 0x0C, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x30, 0x30, 0xF0,
  0x0C, 0x0E, 0x05, 0x86, 0xC2, 0x33, 0x19, 0x86, 0xFF, 0xC0, 0xCC, 0x61,
  0x0F, 0xC6, 0xE3, 0x19, 0x86, 0x63, 0x30, 0xCC, 0x73, 0x18, 0xDE, 0x99,
  0xC0, 0x00, 0x78, 0x18, 0x38, 0x30, 0x30, 0x36, 0x7B, 0x73, 0x63, 0x63,
  0xE6, 0xC6, 0xC4, 0xC8, 0x70, 0x0E, 0x3B, 0x33, 0x70, 0xE0, 0xE0, 0xE0,
  0xE2, 0xE4, 0x78, 0x01, 0xE0, 0x1C, 0x03, 0x80, 0x60, 0x0C, 0x1F, 0x86,
  0x61, 0x8C, 0x71, 0x8C, 0x73, 0x8E, 0x63, 0x8C, 0x71, 0x97, 0x1C, 0xC0,
  0x0F, 0x0C, 0xCC, 0x6E, 0x37, 0x37, 0xE3, 0x81, 0xC2, 0xE2, 0x3E, 0x00,
  0x00, 0x70, 0x0F, 0x01, 0x80, 0x18, 0x03, 0x80, 0x30, 0x0F, 0xC0, 0x30,
  0x07, 0x00, 0x60, 0x06, 0x00, 0xE0, 0x0E, 0x00, 0xC0, 0x0C, 0x00, 0xC0,
  0x18, 0x0D, 0x00, 0xE0, 0x00, 0x1E, 0x0C, 0x76, 0x19, 0x86, 0x63, 0x07,
  0x86, 0x01, 0xE0, 0x3F, 0x31, 0xC8, 0x32, 0x08, 0x7C, 0x00, 0x1E, 0x03,
  0x00, 0xC0, 0x30, 0x1C, 0x06, 0x61, 0xF8, 0xE6, 0x39, 0xCC, 0x63, 0x19,
  0xCE, 0x63, 0x58, 0xE6, 0x30, 0x39, 0xCE, 0x00, 0x0B, 0xCE, 0x63, 0x39,
  0x8C, 0x6B, 0x80, 0x01, 0xC0, 0x70, 0x1C, 0x00, 0x00, 0x03, 0xE0, 0x38,
  0x0C, 0x03, 0x00, 0xC0, 0x70, 0x18, 0x06, 0x03, 0x80, 0xC0, 0x30, 0x98,
  0x3C, 0x00, 0x1E, 0x01, 0x80, 0x30, 0x06, 0x01, 0xC0, 0x37, 0xC6, 0x61,
  0xC8, 0x3A, 0x06, 0xC0, 0xF8, 0x3B, 0x06, 0x60, 0xCF, 0x18, 0xC0, 0x78,
  0xE3, 0x8E, 0x30, 0xC7, 0x18, 0x61, 0x8E, 0x30, 0xC3, 0x4E, 0x00, 0x79,
  0x9C, 0xFE, 0xB3, 0x9C, 0xCE, 0x63, 0x33, 0x9D, 0xCE, 0x67, 0x31, 0x99,
  0xC6, 0x67, 0x1F, 0x98, 0x60, 0x79, 0x9B, 0xCE, 0x67, 0x37, 0x3B, 0x9D,
  0x8C, 0xC6, 0xE3, 0xF1, 0x80, 0x1E, 0x33, 0x63, 0x63, 0xE3, 0xC7, 0xC6,
  0xC6, 0xCC, 0x78, 0x1E, 0xC1, 0xEC, 0x31, 0x8E, 0x31, 0xC6, 0x31, 0x86,
  0x31, 0xCC, 0x39, 0x86, 0xE0, 0xC0, 0x38, 0x0F, 0x80, 0x0F, 0xC6, 0x63,
  0x19, 0x86, 0x63, 0xB0, 0xCC, 0x73, 0x1C, 0xDE, 0x1B, 0x80, 0xE0, 0x70,
  0x3F, 0x00, 0x7B, 0x3F, 0x38, 0x30, 0x70, 0x70, 0x60, 0x60, 0xE0, 0x3A,
  0xCD, 0x8B, 0x83, 0x87, 0x87, 0x46, 0xCD, 0xF0, 0x08, 0x8C, 0xF7, 0x31,
  0x9C, 0xE6, 0x31, 0xAE, 0x00, 0xF1, 0xB9, 0xDC, 0xCC, 0x66, 0x33, 0x33,
  0x19, 0xBC, 0xD6, 0xF3, 0x80, 0xED, 0xB6, 0x5A, 0x69, 0xC6, 0x18, 0x40,
  0xE2, 0x6C, 0xCD, 0x98, 0xB7, 0x27, 0x64, 0xED, 0x19, 0xC3, 0x30, 0x44,
  0x00, 0x3C, 0xE1, 0xAC, 0x38, 0x07, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70,
  0x56, 0x9C, 0x60, 0x39, 0x8C, 0xC6, 0x23, 0x91, 0xD0, 0x68, 0x38, 0x1C,
  0x0C, 0x04, 0x02, 0x1A, 0x0E, 0x00, 0x3F, 0x46, 0x04, 0x0C, 0x18, 0x10,
  0x20, 0x70, 0xF8, 0x1E, 0x0E, 0x03, 0x83, 0x81, 0x81, 0x80, 0xC0, 0x60,
  0x30, 0x30, 0x18, 0x1C, 0x10, 0x06, 0x03, 0x01, 0x81, 0xC0, 0xC0, 0x60,
  0x30, 0x0E, 0x00, 0xFF, 0xFF, 0xFF, 0xF0, 0x0E, 0x03, 0x80, 0xC0, 0x60,
  0x30, 0x18, 0x18, 0x0C, 0x06, 0x01, 0x01, 0xC1, 0x80, 0xC0, 0xE0, 0x60,
  0x30, 0x18, 0x18, 0x38, 0x00, 0x78, 0x03, 0xC0 };

const GFXglyph FreeSerifBoldItalic10pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   5,    0,    0 },   // 0x20 ' '
  {     1,   6,  15,   8,    1,  -13 },   // 0x21 '!'
  {    13,   7,   6,  11,    3,  -13 },   // 0x22 '"'
  {    19,  12,  13,  10,   -1,  -12 },   // 0x23 '#'
  {    39,  12,  17,  10,   -1,  -14 },   // 0x24 '$'
  {    65,  15,  15,  17,    1,  -13 },   // 0x25 '%'
  {    94,  14,  15,  16,    0,  -13 },   // 0x26 '&'
  {   121,   2,   6,   6,    3,  -13 },   // 0x27 '''
  {   123,   6,  17,   7,    1,  -13 },   // 0x28 '('
  {   136,   6,  17,   7,    0,  -13 },   // 0x29 ')'
  {   149,   9,   9,  10,    0,  -13 },   // 0x2A '*'
  {   160,   8,   9,  11,    2,   -8 },   // 0x2B '+'
  {   169,   3,   6,   5,   -1,   -1 },   // 0x2C ','
  {   172,   5,   2,   7,    0,   -4 },   // 0x2D '-'
  {   174,   3,   3,   5,    0,   -1 },   // 0x2E '.'
  {   176,   8,  14,   7,    0,  -13 },   // 0x2F '/'
  {   190,   9,  15,  10,    0,  -13 },   // 0x30 '0'
  {   207,   8,  15,  10,    0,  -13 },   // 0x31 '1'
  {   222,  10,  15,  10,    0,  -13 },   // 0x32 '2'
  {   241,  10,  15,  10,    0,  -13 },   // 0x33 '3'
  {   260,  10,  14,  10,    0,  -13 },   // 0x34 '4'
  {   278,  10,  15,  10,    1,  -13 },   // 0x35 '5'
  {   297,   9,  15,  10,    1,  -13 },   // 0x36 '6'
  {   314,  10,  14,  10,    1,  -13 },   // 0x37 '7'
  {   332,  10,  15,  10,    0,  -13 },   // 0x38 '8'
  {   351,  10,  15,  10,    0,  -13 },   // 0x39 '9'
  {   370,   5,  10,   5,    0,   -8 },   // 0x3A ':'
  {   377,   5,  13,   5,    0,   -8 },   // 0x3B ';'
  {   386,  10,  11,  11,    1,  -10 },   // 0x3C '<'
  {   400,  10,   5,  12,    1,   -6 },   // 0x3D '='
  {   407,  10,  11,  11,    1,  -10 },   // 0x3E '>'
  {   421,   8,  15,  10,    2,  -13 },   // 0x3F '?'
  {   436,  14,  14,  17,    1,  -13 },   // 0x40 '@'
  {   461,  13,  15,  14,    0,  -13 },   // 0x41 'A'
  {   486,  13,  15,  13,    0,  -13 },   // 0x42 'B'
  {   511,  13,  15,  12,    1,  -13 },   // 0x43 'C'
  {   536,  15,  15,  14,    0,  -13 },   // 0x44 'D'
  {   565,  14,  15,  13,    0,  -13 },   // 0x45 'E'
  {   592,  14,  15,  12,    0,  -13 },   // 0x46 'F'
  {   619,  13,  15,  14,    1,  -13 },   // 0x47 'G'
  {   644,  16,  15,  15,    0,  -13 },   // 0x48 'H'
  {   674,   9,  15,   7,    0,  -13 },   // 0x49 'I'
  {   691,  11,  16,  10,    0,  -13 },   // 0x4A 'J'
  {   713,  14,  15,  13,    0,  -13 },   // 0x4B 'K'
  {   740,  13,  15,  12,    0,  -13 },   // 0x4C 'L'
  {   765,  19,  15,  18,    0,  -13 },   // 0x4D 'M'
  {   801,  16,  15,  14,    0,  -13 },   // 0x4E 'N'
  {   831,  13,  15,  14,    1,  -13 },   // 0x4F 'O'
  {   856,  13,  15,  12,    0,  -13 },   // 0x50 'P'
  {   881,  13,  18,  14,    1,  -13 },   // 0x51 'Q'
  {   911,  13,  15,  13,    0,  -13 },   // 0x52 'R'
  {   936,  10,  15,  10,    0,  -13 },   // 0x53 'S'
  {   955,  13,  15,  12,    2,  -13 },   // 0x54 'T'
  {   980,  14,  15,  14,    2,  -13 },   // 0x55 'U'
  {  1007,  13,  14,  14,    3,  -13 },   // 0x56 'V'
  {  1030,  17,  14,  19,    3,  -13 },   // 0x57 'W'
  {  1060,  14,  15,  14,    0,  -13 },   // 0x58 'X'
  {  1087,  11,  15,  13,    3,  -13 },   // 0x59 'Y'
  {  1108,  13,  15,  11,    0,  -13 },   // 0x5A 'Z'
  {  1133,   8,  17,   7,   -1,  -13 },   // 0x5B '['
  {  1150,   5,  14,   8,    2,  -13 },   // 0x5C '\'
  {  1159,   8,  17,   7,   -1,  -13 },   // 0x5D ']'
  {  1176,   9,   7,  11,    1,  -13 },   // 0x5E '^'
  {  1184,  10,   1,  10,    0,    3 },   // 0x5F '_'
  {  1186,   4,   4,   7,    2,  -13 },   // 0x60 '`'
  {  1188,  10,  10,  10,    0,   -8 },   // 0x61 'a'
  {  1201,   8,  16,  10,    1,  -14 },   // 0x62 'b'
  {  1217,   8,  10,   9,    0,   -8 },   // 0x63 'c'
  {  1227,  11,  15,  10,    0,  -13 },   // 0x64 'd'
  {  1248,   9,  10,   8,    0,   -8 },   // 0x65 'e'
  {  1260,  12,  19,  10,   -2,  -14 },   // 0x66 'f'
  {  1289,  10,  13,  10,    0,   -8 },   // 0x67 'g'
  {  1306,  10,  15,  11,    0,  -13 },   // 0x68 'h'
  {  1325,   5,  15,   6,    1,  -13 },   // 0x69 'i'
  {  1335,  10,  18,   7,   -2,  -13 },   // 0x6A 'j'
  {  1358,  11,  15,  10,    0,  -13 },   // 0x6B 'k'
  {  1379,   6,  15,   6,    1,  -13 },   // 0x6C 'l'
  {  1391,  14,  10,  15,    0,   -8 },   // 0x6D 'm'
  {  1409,   9,  10,  11,    0,   -8 },   // 0x6E 'n'
  {  1421,   8,  10,   9,    1,   -8 },   // 0x6F 'o'
  {  1431,  11,  13,  10,   -2,   -8 },   // 0x70 'p'
  {  1449,  10,  13,  10,    0,   -8 },   // 0x71 'q'
  {  1466,   8,   9,   8,    0,   -8 },   // 0x72 'r'
  {  1475,   7,  10,   7,    0,   -8 },   // 0x73 's'
  {  1484,   5,  13,   6,    1,  -11 },   // 0x74 't'
  {  1493,   9,  10,  11,    1,   -8 },   // 0x75 'u'
  {  1505,   6,   9,   9,    2,   -8 },   // 0x76 'v'
  {  1512,  11,   9,  13,    2,   -8 },   // 0x77 'w'
  {  1525,  11,  10,  10,   -1,   -8 },   // 0x78 'x'
  {  1539,   9,  13,   9,   -1,   -8 },   // 0x79 'y'
  {  1554,   8,  11,   8,    0,   -8 },   // 0x7A 'z'
  {  1565,   9,  19,   7,    0,  -14 },   // 0x7B '{'
  {  1587,   2,  14,   5,    2,  -13 },   // 0x7C '|'
  {  1591,   9,  19,   7,   -2,  -14 },   // 0x7D '}'
  {  1613,   9,   2,  11,    1,   -5 } }; // 0x7E '~'

const GFXfont FreeSerifBoldItalic10pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBoldItalic10pt7bBitmaps,
  (GFXglyph *)FreeSerifBoldItalic10pt7bGlyphs,
  0x20, 0x7E, 24 };

// Approx. 2288 bytes

#endif // FreeSerifBoldItalic10pt7b_H
