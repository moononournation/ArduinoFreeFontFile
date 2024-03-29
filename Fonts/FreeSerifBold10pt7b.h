#ifndef FreeSerifBold10pt7b_H
#define FreeSerifBold10pt7b_H

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

const uint8_t FreeSerifBold10pt7bBitmaps[] PROGMEM = {
  0x00, 0xFF, 0xFE, 0x92, 0x40, 0x7F, 0xC0, 0xC7, 0x8F, 0x1E, 0x38, 0x70,
  0x80, 0x19, 0x86, 0x61, 0x90, 0x44, 0x7F, 0xC4, 0xC3, 0x30, 0xCC, 0xFF,
  0x8C, 0x82, 0x20, 0x98, 0x66, 0x00, 0x10, 0x10, 0x7E, 0xD6, 0xD2, 0xF0,
  0xF0, 0x7C, 0x3E, 0x1F, 0x17, 0x93, 0x93, 0xD6, 0x3C, 0x10, 0x1E, 0x10,
  0x31, 0xF0, 0x61, 0x20, 0xE1, 0x40, 0xC3, 0x40, 0xC2, 0x80, 0xC5, 0x8E,
  0x79, 0x39, 0x03, 0x31, 0x02, 0x71, 0x04, 0x61, 0x0C, 0x62, 0x08, 0x66,
  0x18, 0x38, 0x0F, 0x80, 0x67, 0x01, 0x8C, 0x07, 0x30, 0x1F, 0x00, 0x38,
  0xF1, 0xF1, 0x89, 0xE4, 0x67, 0x93, 0x8F, 0x8E, 0x1E, 0x3C, 0x3C, 0x79,
  0xFC, 0xF9, 0xE0, 0xFF, 0xE0, 0x08, 0x88, 0xC4, 0x23, 0x18, 0xC6, 0x31,
  0x84, 0x20, 0x84, 0x18, 0x82, 0x08, 0x61, 0x08, 0x63, 0x18, 0xC6, 0x31,
  0x08, 0x88, 0x80, 0x18, 0x18, 0xDB, 0xF7, 0x18, 0xF7, 0xDB, 0x18, 0x18,
  0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x3F, 0xF0, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xC0, 0xDF, 0x94, 0xA0, 0xFF, 0xC0, 0xFF, 0x80, 0x0C, 0x30, 0x86,
  0x18, 0x43, 0x0C, 0x21, 0x86, 0x10, 0x43, 0x00, 0x1C, 0x1B, 0x18, 0xCC,
  0x6E, 0x3F, 0x1F, 0x8F, 0xC7, 0xE3, 0xF1, 0xD8, 0xCC, 0x63, 0x60, 0xE0,
  0x08, 0xF2, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x9F,
  0xC0, 0x1E, 0x0F, 0xC4, 0x7A, 0x0E, 0x03, 0x80, 0xE0, 0x30, 0x18, 0x0C,
  0x02, 0x11, 0x04, 0xFE, 0x7F, 0xBF, 0xE0, 0x3E, 0x27, 0xA1, 0xC0, 0xE0,
  0x60, 0x78, 0x7E, 0x0F, 0x03, 0x80, 0xC0, 0x60, 0x2E, 0x23, 0xE0, 0x06,
  0x0E, 0x0E, 0x1E, 0x2E, 0x4E, 0x4E, 0x8E, 0x8E, 0xFF, 0xFF, 0x0E, 0x0E,
  0x0E, 0x1F, 0x8F, 0x8F, 0xC4, 0x02, 0x03, 0xE1, 0xF8, 0x7E, 0x03, 0x00,
  0x80, 0x40, 0x2E, 0x27, 0xE0, 0x03, 0x1C, 0x38, 0x70, 0x70, 0xFC, 0xE6,
  0xE7, 0xE7, 0xE7, 0xE7, 0x67, 0x66, 0x3C, 0x7F, 0x9F, 0xE7, 0xFA, 0x04,
  0x83, 0x00, 0xC0, 0x20, 0x18, 0x06, 0x01, 0x00, 0xC0, 0x30, 0x18, 0x06,
  0x00, 0x3C, 0x33, 0xB0, 0xD8, 0x6E, 0x37, 0xE1, 0xF8, 0x7E, 0x4F, 0xE3,
  0xF0, 0xF8, 0x76, 0x71, 0xE0, 0x3C, 0x66, 0xE6, 0xE7, 0xE7, 0xE7, 0xE7,
  0x67, 0x3F, 0x0E, 0x0E, 0x1C, 0x38, 0xC0, 0xFF, 0x80, 0x3F, 0xE0, 0xFF,
  0x80, 0x37, 0xE5, 0x40, 0x00, 0x00, 0x0C, 0x0F, 0x87, 0xC3, 0xC1, 0xE0,
  0x1E, 0x00, 0xF0, 0x07, 0x80, 0x3C, 0x01, 0x80, 0x00, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x18, 0x03, 0xC0, 0x1E, 0x00,
  0xF0, 0x07, 0x80, 0x78, 0x3C, 0x3E, 0x1F, 0x03, 0x00, 0x00, 0x00, 0x3C,
  0xCE, 0xC7, 0xC7, 0x07, 0x0E, 0x0C, 0x10, 0x10, 0x00, 0x00, 0x18, 0x1C,
  0x18, 0x07, 0xC0, 0x60, 0xC3, 0x01, 0x98, 0x62, 0x63, 0x77, 0x19, 0x9C,
  0x66, 0x73, 0x19, 0xCC, 0xC7, 0x33, 0x26, 0x7F, 0x18, 0x00, 0x18, 0x10,
  0x3F, 0x80, 0x01, 0x00, 0x0C, 0x00, 0x30, 0x01, 0xE0, 0x07, 0x80, 0x2F,
  0x00, 0x9C, 0x02, 0x78, 0x10, 0xE0, 0x7F, 0x82, 0x0F, 0x08, 0x1C, 0x60,
  0x7B, 0xC3, 0xF0, 0xFF, 0x83, 0x9C, 0x38, 0xE3, 0x8E, 0x38, 0xE3, 0x9C,
  0x3F, 0x83, 0x8E, 0x38, 0x73, 0x87, 0x38, 0x73, 0x87, 0x38, 0xEF, 0xF8,
  0x0F, 0x89, 0xC3, 0xCC, 0x0E, 0xE0, 0x3E, 0x00, 0xF0, 0x03, 0x80, 0x1C,
  0x00, 0xE0, 0x07, 0x00, 0x1C, 0x00, 0xE0, 0x33, 0x83, 0x07, 0xE0, 0xFF,
  0x81, 0xC7, 0x0E, 0x1C, 0x70, 0xE3, 0x83, 0x9C, 0x1C, 0xE0, 0xE7, 0x07,
  0x38, 0x39, 0xC1, 0xCE, 0x0C, 0x70, 0xE3, 0x8E, 0x7F, 0xC0, 0xFF, 0xF1,
  0xC1, 0x8E, 0x04, 0x70, 0x23, 0x84, 0x1C, 0x60, 0xFF, 0x07, 0x18, 0x38,
  0x41, 0xC0, 0x4E, 0x02, 0x70, 0x33, 0x83, 0x7F, 0xF8, 0xFF, 0xF3, 0x87,
  0x38, 0x33, 0x81, 0x38, 0x83, 0x98, 0x3F, 0x83, 0x98, 0x38, 0x83, 0x80,
  0x38, 0x03, 0x80, 0x38, 0x0F, 0xE0, 0x0F, 0x91, 0xC7, 0x9C, 0x0C, 0xC0,
  0x6E, 0x01, 0x70, 0x03, 0x80, 0x1C, 0x00, 0xE1, 0xFF, 0x03, 0x9C, 0x1C,
  0xE0, 0xE3, 0x87, 0x07, 0xE0, 0xFD, 0xFD, 0xC1, 0xC7, 0x07, 0x1C, 0x1C,
  0x70, 0x71, 0xC1, 0xC7, 0xFF, 0x1C, 0x1C, 0x70, 0x71, 0xC1, 0xC7, 0x07,
  0x1C, 0x1C, 0x70, 0x73, 0xF7, 0xF0, 0xFE, 0x70, 0xE1, 0xC3, 0x87, 0x0E,
  0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x9F, 0xC0, 0x1F, 0xC1, 0xC0, 0x70, 0x1C,
  0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0xC7, 0x31,
  0xCC, 0x61, 0xF0, 0xFD, 0xF9, 0xC1, 0x87, 0x04, 0x1C, 0x60, 0x73, 0x01,
  0xD8, 0x07, 0xF0, 0x1D, 0xE0, 0x77, 0x81, 0xCF, 0x07, 0x1E, 0x1C, 0x3C,
  0x70, 0x7B, 0xF7, 0xF0, 0xFC, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0,
  0x1C, 0x03, 0x80, 0x70, 0x0E, 0x01, 0xC0, 0xB8, 0x17, 0x0F, 0xFF, 0xC0,
  0xFC, 0x03, 0xCF, 0x01, 0xE3, 0xE0, 0x78, 0xB8, 0x2E, 0x2E, 0x0B, 0x8B,
  0xC4, 0xE2, 0x71, 0x38, 0x9E, 0x4E, 0x23, 0xA3, 0x88, 0xF8, 0xE2, 0x1C,
  0x38, 0x87, 0x0E, 0x20, 0x83, 0x9C, 0x21, 0xF0, 0xF0, 0x3B, 0xC0, 0x9F,
  0x04, 0xFC, 0x25, 0xE1, 0x27, 0x89, 0x1E, 0x48, 0x7A, 0x41, 0xF2, 0x07,
  0x90, 0x1C, 0x80, 0x64, 0x01, 0x70, 0x00, 0x0F, 0x81, 0xC7, 0x1C, 0x1C,
  0xC0, 0xEE, 0x03, 0xF0, 0x1F, 0x80, 0xFC, 0x07, 0xE0, 0x3F, 0x01, 0xD8,
  0x0C, 0xE0, 0xE3, 0x8E, 0x07, 0xC0, 0xFF, 0x8E, 0x39, 0xC3, 0xB8, 0x77,
  0x0E, 0xE1, 0xDC, 0x73, 0xF8, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x01,
  0xF8, 0x00, 0x0F, 0x81, 0xC7, 0x0C, 0x18, 0xE0, 0xE6, 0x03, 0xF0, 0x1F,
  0x80, 0xFC, 0x07, 0xE0, 0x3F, 0x01, 0xF8, 0x0E, 0xC0, 0x63, 0x06, 0x0C,
  0x60, 0x3E, 0x00, 0xF0, 0x03, 0xC0, 0x0F, 0x80, 0xFF, 0xC0, 0xE3, 0x83,
  0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x8E, 0x0F, 0xE0, 0x3B, 0xC0,
  0xE7, 0x83, 0x9F, 0x0E, 0x3C, 0x38, 0x7B, 0xF8, 0xF0, 0x3C, 0xB1, 0xF0,
  0x78, 0x1E, 0x07, 0xC1, 0xF8, 0x7E, 0x0F, 0x81, 0xE0, 0x78, 0x3E, 0x35,
  0xF0, 0xFF, 0xFF, 0x39, 0xF1, 0xC7, 0x0E, 0x10, 0x70, 0x03, 0x80, 0x1C,
  0x00, 0xE0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x0F, 0xE0,
  0xFC, 0x3B, 0x80, 0x9C, 0x04, 0xE0, 0x27, 0x01, 0x38, 0x09, 0xC0, 0x4E,
  0x02, 0x70, 0x13, 0x80, 0x9C, 0x04, 0xE0, 0x43, 0x86, 0x07, 0xC0, 0xFE,
  0x3D, 0xE0, 0x63, 0x81, 0x0F, 0x04, 0x1C, 0x20, 0x78, 0x80, 0xE2, 0x03,
  0x90, 0x0F, 0x40, 0x1E, 0x00, 0x78, 0x00, 0xE0, 0x03, 0x00, 0x04, 0x00,
  0xFC, 0xFC, 0xF7, 0x87, 0x06, 0x38, 0x78, 0x43, 0x83, 0x84, 0x3C, 0x78,
  0x81, 0xC7, 0xC8, 0x1C, 0x5C, 0x80, 0xE9, 0xD0, 0x0E, 0x8D, 0x00, 0xF0,
  0xF0, 0x07, 0x0E, 0x00, 0x70, 0x60, 0x06, 0x06, 0x00, 0x20, 0x40, 0xFE,
  0x7C, 0xF0, 0xC3, 0xC2, 0x07, 0x90, 0x0F, 0x40, 0x3E, 0x00, 0x78, 0x00,
  0xF0, 0x05, 0xC0, 0x27, 0x80, 0x8F, 0x04, 0x1C, 0x30, 0x7B, 0xE7, 0xF0,
  0xFC, 0x7B, 0xC1, 0x8E, 0x08, 0x78, 0x41, 0xC4, 0x0F, 0x40, 0x3A, 0x01,
  0xE0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x0F, 0xE0, 0x7F,
  0xF3, 0x07, 0x10, 0x78, 0x83, 0x80, 0x38, 0x03, 0xC0, 0x1C, 0x01, 0xE0,
  0x1E, 0x00, 0xE0, 0x4F, 0x06, 0x70, 0x27, 0x83, 0x7F, 0xF8, 0xFC, 0xCC,
  0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xF0, 0xC3, 0x04, 0x18, 0x60, 0x83,
  0x0C, 0x10, 0x61, 0x86, 0x08, 0x30, 0xF3, 0x33, 0x33, 0x33, 0x33, 0x33,
  0x33, 0x33, 0xF0, 0x0C, 0x0E, 0x07, 0x86, 0x43, 0x33, 0x09, 0x86, 0xFF,
  0xC0, 0xC7, 0x1C, 0x30, 0x7C, 0x63, 0xB1, 0xC0, 0xE1, 0xF3, 0x3B, 0x9D,
  0xCE, 0xFF, 0x80, 0xF0, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1D, 0xC7, 0xB9,
  0xC7, 0x71, 0xDC, 0x77, 0x1D, 0xC7, 0x73, 0x93, 0xC0, 0x3C, 0xED, 0x9F,
  0x0E, 0x1C, 0x38, 0x39, 0x3C, 0x07, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x8E,
  0xE7, 0x7B, 0x8E, 0xE3, 0xB8, 0xEE, 0x3B, 0x8E, 0x77, 0x8E, 0xF0, 0x3C,
  0x66, 0xE3, 0xFF, 0xE0, 0xE0, 0xE0, 0x71, 0x3E, 0x3C, 0x6D, 0xDB, 0x87,
  0x1F, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x1F, 0x00, 0x38, 0x67, 0xE7,
  0xE7, 0xE7, 0x3E, 0x40, 0xC0, 0xFE, 0x7F, 0xC1, 0xC1, 0x7E, 0xF0, 0x0E,
  0x01, 0xC0, 0x38, 0x07, 0x00, 0xEF, 0x1E, 0x73, 0x8E, 0x71, 0xCE, 0x39,
  0xC7, 0x38, 0xE7, 0x1D, 0xF7, 0xC0, 0x73, 0x9C, 0x00, 0x79, 0xCE, 0x73,
  0x9C, 0xE7, 0x7C, 0x0E, 0x1C, 0x38, 0x00, 0x03, 0xC3, 0x87, 0x0E, 0x1C,
  0x38, 0x70, 0xE1, 0xC3, 0xE7, 0xCC, 0xF0, 0xF0, 0x0E, 0x01, 0xC0, 0x38,
  0x07, 0x00, 0xE7, 0x9C, 0x43, 0x90, 0x76, 0x0F, 0xC1, 0xDC, 0x39, 0xC7,
  0x1D, 0xF7, 0xC0, 0xF3, 0x9C, 0xE7, 0x39, 0xCE, 0x73, 0x9C, 0xE7, 0x7C,
  0xF7, 0x9C, 0x79, 0xEE, 0x71, 0xCE, 0x71, 0xCE, 0x71, 0xCE, 0x71, 0xCE,
  0x71, 0xCE, 0x71, 0xCE, 0xFB, 0xFF, 0xF7, 0x8F, 0x39, 0xC7, 0x38, 0xE7,
  0x1C, 0xE3, 0x9C, 0x73, 0x8E, 0xFB, 0xE0, 0x3E, 0x31, 0xB8, 0xFC, 0x7E,
  0x3F, 0x1F, 0x8E, 0xC6, 0x3E, 0x00, 0xF7, 0x1E, 0xE7, 0x1D, 0xC7, 0x71,
  0xDC, 0x77, 0x1D, 0xCE, 0x7F, 0x1C, 0x07, 0x01, 0xC0, 0xF8, 0x00, 0x3C,
  0x9C, 0xEE, 0x3B, 0x8E, 0xE3, 0xB8, 0xEE, 0x39, 0xCE, 0x3F, 0x80, 0xE0,
  0x38, 0x0E, 0x07, 0xC0, 0xF7, 0x7B, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70,
  0xF8, 0x77, 0x3C, 0x7C, 0x78, 0x78, 0xF3, 0xB8, 0x10, 0xC7, 0x3E, 0x71,
  0xC7, 0x1C, 0x71, 0xC7, 0x4E, 0xF3, 0xCE, 0x39, 0xC7, 0x38, 0xE7, 0x1C,
  0xE3, 0x9C, 0x73, 0x8E, 0x3F, 0xE0, 0xFB, 0xB8, 0x4E, 0x47, 0x21, 0xA0,
  0xF0, 0x70, 0x18, 0x08, 0x00, 0xFB, 0xDD, 0xC6, 0x27, 0x1C, 0x8E, 0xF4,
  0x3A, 0xD0, 0x73, 0x81, 0xCE, 0x02, 0x10, 0x08, 0x40, 0xFB, 0xDC, 0x43,
  0xA0, 0x78, 0x0E, 0x07, 0xC2, 0x70, 0x8E, 0xF7, 0xC0, 0xFB, 0xB8, 0x9C,
  0x47, 0x43, 0xA1, 0xF0, 0x70, 0x38, 0x08, 0x04, 0x02, 0x1A, 0x0E, 0x00,
  0xFF, 0x8F, 0x0E, 0x1C, 0x3C, 0x38, 0x71, 0xF3, 0xFF, 0x1C, 0xE3, 0x0C,
  0x30, 0xC3, 0x0C, 0x33, 0x03, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0xE1, 0xC0,
  0xFF, 0xFF, 0xFF, 0xF0, 0xE1, 0xC3, 0x0C, 0x30, 0xC3, 0x0C, 0x30, 0x33,
  0x0C, 0x30, 0xC3, 0x0C, 0x31, 0xCE, 0x00, 0xF0, 0x47, 0x80 };

const GFXglyph FreeSerifBold10pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   5,    0,    0 },   // 0x20 ' '
  {     1,   3,  14,   7,    2,  -13 },   // 0x21 '!'
  {     7,   7,   6,  11,    2,  -13 },   // 0x22 '"'
  {    13,  10,  13,  10,    0,  -12 },   // 0x23 '#'
  {    30,   8,  16,  10,    1,  -14 },   // 0x24 '$'
  {    46,  16,  14,  20,    2,  -13 },   // 0x25 '%'
  {    74,  14,  14,  17,    1,  -13 },   // 0x26 '&'
  {    99,   2,   6,   6,    2,  -13 },   // 0x27 '''
  {   101,   5,  17,   7,    1,  -13 },   // 0x28 '('
  {   112,   5,  17,   7,    0,  -13 },   // 0x29 ')'
  {   123,   8,   9,  10,    1,  -13 },   // 0x2A '*'
  {   132,  10,  11,  14,    2,   -9 },   // 0x2B '+'
  {   146,   3,   7,   5,    1,   -2 },   // 0x2C ','
  {   149,   5,   2,   7,    1,   -4 },   // 0x2D '-'
  {   151,   3,   3,   5,    1,   -2 },   // 0x2E '.'
  {   153,   6,  14,   6,    0,  -13 },   // 0x2F '/'
  {   164,   9,  14,  10,    0,  -13 },   // 0x30 '0'
  {   180,   7,  14,  10,    2,  -13 },   // 0x31 '1'
  {   193,  10,  14,  10,    0,  -13 },   // 0x32 '2'
  {   211,   9,  14,  10,    0,  -13 },   // 0x33 '3'
  {   227,   8,  14,  10,    1,  -13 },   // 0x34 '4'
  {   241,   9,  14,  10,    0,  -13 },   // 0x35 '5'
  {   257,   8,  14,  10,    1,  -13 },   // 0x36 '6'
  {   271,  10,  14,  10,    0,  -13 },   // 0x37 '7'
  {   289,   9,  14,  10,    1,  -13 },   // 0x38 '8'
  {   305,   8,  14,  10,    1,  -13 },   // 0x39 '9'
  {   319,   3,   9,   7,    2,   -8 },   // 0x3A ':'
  {   323,   3,  12,   7,    2,   -8 },   // 0x3B ';'
  {   328,  11,  12,  14,    1,  -10 },   // 0x3C '<'
  {   345,  11,   6,  14,    1,   -7 },   // 0x3D '='
  {   354,  11,  12,  14,    2,  -10 },   // 0x3E '>'
  {   371,   8,  14,  10,    1,  -13 },   // 0x3F '?'
  {   385,  14,  14,  19,    2,  -13 },   // 0x40 '@'
  {   410,  14,  14,  14,    0,  -13 },   // 0x41 'A'
  {   435,  12,  14,  13,    0,  -13 },   // 0x42 'B'
  {   456,  13,  14,  14,    1,  -13 },   // 0x43 'C'
  {   479,  13,  14,  15,    0,  -13 },   // 0x44 'D'
  {   502,  13,  14,  13,    0,  -13 },   // 0x45 'E'
  {   525,  12,  14,  12,    0,  -13 },   // 0x46 'F'
  {   546,  13,  14,  16,    1,  -13 },   // 0x47 'G'
  {   569,  14,  14,  16,    1,  -13 },   // 0x48 'H'
  {   594,   7,  14,   8,    0,  -13 },   // 0x49 'I'
  {   607,  10,  16,  10,    0,  -13 },   // 0x4A 'J'
  {   627,  14,  14,  15,    1,  -13 },   // 0x4B 'K'
  {   652,  11,  14,  13,    1,  -13 },   // 0x4C 'L'
  {   672,  18,  14,  19,    0,  -13 },   // 0x4D 'M'
  {   704,  13,  14,  14,    1,  -13 },   // 0x4E 'N'
  {   727,  13,  14,  16,    1,  -13 },   // 0x4F 'O'
  {   750,  11,  14,  13,    1,  -13 },   // 0x50 'P'
  {   770,  13,  18,  16,    1,  -13 },   // 0x51 'Q'
  {   800,  14,  14,  14,    0,  -13 },   // 0x52 'R'
  {   825,   9,  14,  11,    1,  -13 },   // 0x53 'S'
  {   841,  13,  14,  13,    0,  -13 },   // 0x54 'T'
  {   864,  13,  14,  14,    1,  -13 },   // 0x55 'U'
  {   887,  14,  14,  14,    0,  -13 },   // 0x56 'V'
  {   912,  20,  14,  20,    0,  -13 },   // 0x57 'W'
  {   947,  14,  14,  14,    0,  -13 },   // 0x58 'X'
  {   972,  13,  14,  14,    0,  -13 },   // 0x59 'Y'
  {   995,  13,  14,  13,    0,  -13 },   // 0x5A 'Z'
  {  1018,   4,  17,   7,    1,  -13 },   // 0x5B '['
  {  1027,   6,  14,   6,   -1,  -13 },   // 0x5C '\'
  {  1038,   4,  17,   7,    1,  -13 },   // 0x5D ']'
  {  1047,   9,   7,  12,    1,  -13 },   // 0x5E '^'
  {  1055,  10,   1,  10,    0,    3 },   // 0x5F '_'
  {  1057,   5,   4,   7,    0,  -14 },   // 0x60 '`'
  {  1060,   9,   9,  10,    1,   -8 },   // 0x61 'a'
  {  1071,  10,  14,  11,    0,  -13 },   // 0x62 'b'
  {  1089,   7,   9,   9,    1,   -8 },   // 0x63 'c'
  {  1097,  10,  14,  11,    1,  -13 },   // 0x64 'd'
  {  1115,   8,   9,   9,    1,   -8 },   // 0x65 'e'
  {  1124,   7,  14,   8,    1,  -13 },   // 0x66 'f'
  {  1137,   8,  13,  10,    1,   -8 },   // 0x67 'g'
  {  1150,  11,  14,  11,    0,  -13 },   // 0x68 'h'
  {  1170,   5,  14,   6,    1,  -13 },   // 0x69 'i'
  {  1179,   7,  18,   8,    0,  -13 },   // 0x6A 'j'
  {  1195,  11,  14,  11,    0,  -13 },   // 0x6B 'k'
  {  1215,   5,  14,   6,    0,  -13 },   // 0x6C 'l'
  {  1224,  16,   9,  17,    0,   -8 },   // 0x6D 'm'
  {  1242,  11,   9,  11,    0,   -8 },   // 0x6E 'n'
  {  1255,   9,   9,  10,    1,   -8 },   // 0x6F 'o'
  {  1266,  10,  13,  11,    0,   -8 },   // 0x70 'p'
  {  1283,  10,  13,  11,    1,   -8 },   // 0x71 'q'
  {  1300,   8,   9,   9,    0,   -8 },   // 0x72 'r'
  {  1309,   6,   9,   8,    1,   -8 },   // 0x73 's'
  {  1316,   6,  12,   7,    0,  -11 },   // 0x74 't'
  {  1325,  11,   9,  11,    0,   -8 },   // 0x75 'u'
  {  1338,   9,   9,  10,    0,   -8 },   // 0x76 'v'
  {  1349,  14,   9,  14,    0,   -8 },   // 0x77 'w'
  {  1365,  10,   9,  10,    0,   -8 },   // 0x78 'x'
  {  1377,   9,  13,  10,    0,   -8 },   // 0x79 'y'
  {  1392,   8,   9,   9,    1,   -8 },   // 0x7A 'z'
  {  1401,   6,  19,   8,    1,  -14 },   // 0x7B '{'
  {  1416,   2,  14,   4,    1,  -13 },   // 0x7C '|'
  {  1420,   6,  19,   8,    1,  -14 },   // 0x7D '}'
  {  1435,   9,   2,  10,    1,   -5 } }; // 0x7E '~'

const GFXfont FreeSerifBold10pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBold10pt7bBitmaps,
  (GFXglyph *)FreeSerifBold10pt7bGlyphs,
  0x20, 0x7E, 24 };

// Approx. 2110 bytes

#endif // FreeSerifBold10pt7b_H
