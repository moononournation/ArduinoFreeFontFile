#ifndef FreeSerifBold16pt7b_H
#define FreeSerifBold16pt7b_H

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

const uint8_t FreeSerifBold16pt7bBitmaps[] PROGMEM = {
  0x00, 0x77, 0xFF, 0xFF, 0xF9, 0xCE, 0x73, 0x88, 0x42, 0x10, 0x00, 0x77,
  0xFF, 0xF7, 0x00, 0x40, 0x5C, 0x1F, 0x83, 0xF0, 0x7E, 0x0F, 0xC1, 0xD0,
  0x12, 0x02, 0x40, 0x40, 0x07, 0x18, 0x0C, 0x30, 0x18, 0x60, 0x30, 0xC0,
  0x63, 0x81, 0xC7, 0x1F, 0xFF, 0xBF, 0xFF, 0x0C, 0x30, 0x18, 0x60, 0x30,
  0xC0, 0x63, 0x8F, 0xFF, 0xFF, 0xFF, 0xC7, 0x18, 0x0C, 0x30, 0x18, 0x60,
  0x30, 0xC0, 0x63, 0x81, 0xC7, 0x03, 0x8E, 0x00, 0x02, 0x00, 0x10, 0x01,
  0xC0, 0x77, 0xC6, 0x27, 0x71, 0x1B, 0x88, 0xDE, 0x42, 0xFA, 0x07, 0xF0,
  0x1F, 0xC0, 0x7F, 0x81, 0xFE, 0x07, 0xF8, 0x0F, 0xC0, 0x5F, 0x02, 0x7C,
  0x11, 0xD0, 0x8E, 0x84, 0x76, 0x23, 0x39, 0x70, 0x7E, 0x00, 0x40, 0x02,
  0x00, 0x10, 0x00, 0x0F, 0x00, 0xC0, 0x39, 0x83, 0x00, 0xE1, 0xFE, 0x03,
  0xC2, 0x08, 0x07, 0x04, 0x30, 0x1E, 0x08, 0xC0, 0x3C, 0x21, 0x00, 0x70,
  0x46, 0x00, 0xE1, 0x08, 0x01, 0xC4, 0x30, 0x01, 0xF0, 0xC1, 0xF0, 0x01,
  0x07, 0x10, 0x06, 0x1C, 0x20, 0x08, 0x78, 0x40, 0x31, 0xE0, 0x80, 0xC3,
  0xC2, 0x01, 0x87, 0x04, 0x06, 0x0E, 0x08, 0x08, 0x1C, 0x20, 0x30, 0x18,
  0x80, 0xC0, 0x1E, 0x00, 0x01, 0xF8, 0x00, 0x18, 0xF0, 0x00, 0xE1, 0xE0,
  0x03, 0x83, 0x80, 0x0F, 0x0E, 0x00, 0x3C, 0x30, 0x00, 0xF9, 0x80, 0x01,
  0xF8, 0x00, 0x07, 0xE1, 0xFC, 0x1F, 0x81, 0xC1, 0xBF, 0x06, 0x0C, 0x7E,
  0x18, 0x70, 0xFC, 0xC3, 0xC3, 0xF2, 0x0F, 0x07, 0xF0, 0x3E, 0x0F, 0xC0,
  0xF8, 0x1F, 0x83, 0xF0, 0x7F, 0x17, 0xE3, 0xFF, 0x9F, 0xF9, 0xFC, 0x1F,
  0x01, 0xE0, 0x5F, 0xFF, 0xD2, 0x40, 0x00, 0x03, 0x04, 0x08, 0x18, 0x30,
  0x30, 0x70, 0x60, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,
  0x60, 0x60, 0x70, 0x30, 0x10, 0x18, 0x08, 0x06, 0x01, 0x00, 0xC0, 0x20,
  0x10, 0x18, 0x0C, 0x0C, 0x0E, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07,
  0x07, 0x07, 0x07, 0x06, 0x06, 0x0E, 0x0C, 0x08, 0x18, 0x30, 0x60, 0x80,
  0x0E, 0x01, 0xC3, 0xB9, 0xFB, 0x7F, 0x5E, 0x3F, 0x0F, 0xE7, 0xAF, 0xE4,
  0xF9, 0xCC, 0x38, 0x07, 0x00, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00,
  0x38, 0x00, 0x1C, 0x00, 0x0E, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07,
  0x00, 0x77, 0xFF, 0xF7, 0x8C, 0x46, 0x66, 0x00, 0xFF, 0xFF, 0xFF, 0xF0,
  0x77, 0xFF, 0xF7, 0x00, 0x01, 0xC0, 0x70, 0x38, 0x0E, 0x03, 0x81, 0xC0,
  0x70, 0x1C, 0x0E, 0x03, 0x80, 0xE0, 0x70, 0x1C, 0x07, 0x03, 0x80, 0xE0,
  0x38, 0x1C, 0x07, 0x01, 0xC0, 0xE0, 0x38, 0x00, 0x07, 0x80, 0x73, 0x83,
  0x87, 0x0E, 0x1C, 0x78, 0x79, 0xE1, 0xEF, 0x87, 0xFE, 0x1F, 0xF8, 0x7F,
  0xE1, 0xFF, 0x87, 0xFE, 0x1F, 0xF8, 0x7F, 0xE1, 0xFF, 0x87, 0xDE, 0x1E,
  0x78, 0x78, 0xE1, 0xC3, 0x87, 0x07, 0x38, 0x07, 0x80, 0x01, 0x80, 0xF0,
  0x7E, 0x37, 0xC0, 0xF8, 0x1F, 0x03, 0xE0, 0x7C, 0x0F, 0x81, 0xF0, 0x3E,
  0x07, 0xC0, 0xF8, 0x1F, 0x03, 0xE0, 0x7C, 0x0F, 0x81, 0xF0, 0x3E, 0x0F,
  0xCF, 0xFE, 0x07, 0xC0, 0x3F, 0x81, 0xFF, 0x0F, 0xFE, 0x61, 0xF9, 0x03,
  0xE0, 0x07, 0x80, 0x1E, 0x00, 0x78, 0x01, 0xC0, 0x0E, 0x00, 0x30, 0x01,
  0x80, 0x0C, 0x00, 0x20, 0x01, 0x01, 0x08, 0x0C, 0x7F, 0xF3, 0xFF, 0x9F,
  0xFE, 0xFF, 0xF8, 0x07, 0xE0, 0x7F, 0xC2, 0x1F, 0x90, 0x3E, 0x00, 0xF8,
  0x03, 0xE0, 0x0F, 0x00, 0x78, 0x01, 0xF0, 0x1F, 0xE0, 0x3F, 0x80, 0x3F,
  0x00, 0x3C, 0x00, 0xF0, 0x01, 0xC0, 0x07, 0x00, 0x19, 0xC0, 0x67, 0x83,
  0x1F, 0x88, 0x3F, 0xC0, 0x00, 0x70, 0x01, 0xC0, 0x0F, 0x00, 0x7C, 0x03,
  0xF0, 0x1B, 0xC0, 0x4F, 0x03, 0x3C, 0x18, 0xF0, 0xC3, 0xC2, 0x0F, 0x18,
  0x3C, 0xC0, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF0, 0x03, 0xC0,
  0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x1F, 0xFC, 0x7F, 0xE1, 0xFF, 0x87, 0xFE,
  0x20, 0x00, 0x80, 0x02, 0x00, 0x1F, 0xE0, 0x7F, 0xE1, 0xFF, 0xC7, 0xFF,
  0x00, 0xFE, 0x00, 0x78, 0x00, 0xE0, 0x01, 0x80, 0x06, 0x00, 0x11, 0xC0,
  0x4F, 0xC2, 0x3F, 0xF0, 0x3F, 0x00, 0x00, 0x1C, 0x03, 0xC0, 0x3C, 0x03,
  0xC0, 0x1E, 0x00, 0xF8, 0x07, 0xC0, 0x1F, 0x00, 0x7F, 0xE3, 0xE3, 0xCF,
  0x8F, 0xBE, 0x1F, 0xF8, 0x7F, 0xE1, 0xFF, 0x87, 0xFE, 0x1F, 0x78, 0x7D,
  0xE1, 0xE3, 0xC7, 0x07, 0x38, 0x07, 0xC0, 0x7F, 0xFD, 0xFF, 0xEF, 0xFF,
  0xBF, 0xFE, 0xC0, 0x32, 0x01, 0xC0, 0x07, 0x00, 0x38, 0x00, 0xE0, 0x03,
  0x80, 0x1C, 0x00, 0x70, 0x01, 0x80, 0x0E, 0x00, 0x38, 0x00, 0xC0, 0x07,
  0x00, 0x1C, 0x00, 0xE0, 0x03, 0x80, 0x0E, 0x00, 0x0F, 0xC0, 0xC3, 0xC6,
  0x07, 0xB8, 0x0E, 0xE0, 0x3B, 0xC0, 0xEF, 0x83, 0x3F, 0x98, 0x7F, 0x80,
  0xFF, 0x81, 0xFF, 0x0F, 0xFE, 0x73, 0xFB, 0x83, 0xFE, 0x07, 0xF8, 0x0F,
  0xE0, 0x3F, 0x80, 0xE7, 0x07, 0x8C, 0x3C, 0x1F, 0x80, 0x0F, 0x80, 0x73,
  0x83, 0x8F, 0x1E, 0x1E, 0xF8, 0x7B, 0xE1, 0xFF, 0x87, 0xFE, 0x1F, 0xF8,
  0x7F, 0xE1, 0xF7, 0xC7, 0xCF, 0x1F, 0x1F, 0xF8, 0x03, 0xE0, 0x0F, 0x00,
  0x7C, 0x01, 0xE0, 0x0F, 0x00, 0xF0, 0x0F, 0x00, 0xE0, 0x00, 0x77, 0xFF,
  0xF7, 0x00, 0x00, 0x00, 0x1D, 0xFF, 0xFD, 0xC0, 0x77, 0xFF, 0xF7, 0x00,
  0x00, 0x00, 0x1D, 0xFF, 0xFD, 0xE3, 0x11, 0x99, 0x80, 0x00, 0x00, 0x00,
  0x01, 0xC0, 0x03, 0xE0, 0x07, 0xF0, 0x0F, 0xE0, 0x1F, 0xC0, 0x3F, 0x00,
  0x7E, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0x1F, 0xC0, 0x01, 0xF8, 0x00, 0x3F,
  0x00, 0x07, 0xF0, 0x00, 0xFE, 0x00, 0x1F, 0x00, 0x03, 0x80, 0x00, 0x40,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x80, 0x00,
  0x70, 0x00, 0x3E, 0x00, 0x1F, 0xC0, 0x03, 0xF8, 0x00, 0x3F, 0x00, 0x07,
  0xE0, 0x00, 0xFE, 0x00, 0x1F, 0x80, 0x0F, 0xC0, 0x1F, 0x80, 0x3F, 0x00,
  0xFE, 0x01, 0xFC, 0x03, 0xF8, 0x01, 0xF0, 0x00, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x86, 0x3C, 0x61, 0xEF, 0x1F, 0xF1, 0xFF, 0x1F, 0x61, 0xF0,
  0x1E, 0x03, 0xE0, 0x38, 0x03, 0x00, 0x40, 0x04, 0x00, 0x40, 0x00, 0x00,
  0x00, 0x0E, 0x01, 0xF0, 0x1F, 0x01, 0xF0, 0x0E, 0x00, 0x00, 0xFE, 0x00,
  0x0E, 0x06, 0x00, 0x60, 0x06, 0x07, 0x00, 0x0C, 0x18, 0x00, 0x10, 0xC0,
  0x3B, 0x27, 0x03, 0xBC, 0x9C, 0x1C, 0xF1, 0xE0, 0x71, 0x87, 0x83, 0x8E,
  0x1E, 0x0E, 0x38, 0x78, 0x70, 0xC1, 0xE1, 0xC7, 0x0F, 0x87, 0x1C, 0x2E,
  0x1C, 0x61, 0x1C, 0x77, 0x88, 0x70, 0xE7, 0xC0, 0xE0, 0x00, 0x01, 0xC0,
  0x00, 0x03, 0x80, 0x00, 0x03, 0x80, 0xE0, 0x03, 0xFC, 0x00, 0x00, 0x60,
  0x00, 0x03, 0x00, 0x00, 0x3C, 0x00, 0x01, 0xE0, 0x00, 0x0F, 0x00, 0x00,
  0xFC, 0x00, 0x07, 0xE0, 0x00, 0x6F, 0x80, 0x02, 0x7C, 0x00, 0x13, 0xF0,
  0x01, 0x8F, 0x80, 0x08, 0x7C, 0x00, 0xC1, 0xF0, 0x04, 0x0F, 0x80, 0x7F,
  0xFE, 0x03, 0x01, 0xF0, 0x10, 0x0F, 0xC1, 0x80, 0x3E, 0x08, 0x01, 0xF8,
  0xE0, 0x0F, 0xCF, 0xC1, 0xFF, 0x80, 0xFF, 0xFC, 0x03, 0xE1, 0xE0, 0x7C,
  0x1E, 0x0F, 0x83, 0xE1, 0xF0, 0x7C, 0x3E, 0x0F, 0x87, 0xC1, 0xF0, 0xF8,
  0x7C, 0x1F, 0x1E, 0x03, 0xFF, 0x80, 0x7C, 0x7C, 0x0F, 0x83, 0xE1, 0xF0,
  0x7C, 0x3E, 0x07, 0xC7, 0xC0, 0xF8, 0xF8, 0x1F, 0x1F, 0x03, 0xE3, 0xE0,
  0x78, 0x7C, 0x1F, 0x1F, 0x87, 0x8F, 0xFF, 0xC0, 0x01, 0xFC, 0x10, 0x78,
  0x7F, 0x0E, 0x01, 0xF1, 0xE0, 0x0F, 0x3C, 0x00, 0x77, 0xC0, 0x03, 0x78,
  0x00, 0x37, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x0F,
  0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x00, 0x07, 0x80, 0x00,
  0x7C, 0x00, 0x03, 0xC0, 0x01, 0x1E, 0x00, 0x30, 0xF0, 0x06, 0x07, 0x81,
  0x80, 0x1F, 0xE0, 0xFF, 0xFC, 0x01, 0xF8, 0x78, 0x07, 0xC1, 0xF0, 0x3E,
  0x07, 0xC1, 0xF0, 0x1E, 0x0F, 0x80, 0xF8, 0x7C, 0x03, 0xC3, 0xE0, 0x1F,
  0x1F, 0x00, 0xF8, 0xF8, 0x07, 0xC7, 0xC0, 0x3E, 0x3E, 0x01, 0xF1, 0xF0,
  0x0F, 0x8F, 0x80, 0x7C, 0x7C, 0x03, 0xC3, 0xE0, 0x3E, 0x1F, 0x01, 0xE0,
  0xF8, 0x0F, 0x07, 0xC0, 0xF0, 0x7E, 0x1E, 0x0F, 0xFF, 0xC0, 0x00, 0xFF,
  0xFF, 0xCF, 0xC0, 0x78, 0xF8, 0x07, 0x1F, 0x00, 0x63, 0xE0, 0x04, 0x7C,
  0x00, 0x8F, 0x82, 0x01, 0xF0, 0x40, 0x3E, 0x18, 0x07, 0xC7, 0x00, 0xFF,
  0xE0, 0x1F, 0x1C, 0x03, 0xE1, 0x80, 0x7C, 0x10, 0x0F, 0x82, 0x01, 0xF0,
  0x02, 0x3E, 0x00, 0x47, 0xC0, 0x18, 0xF8, 0x07, 0x1F, 0x03, 0xEF, 0xFF,
  0xF8, 0xFF, 0xFF, 0x9F, 0x03, 0xCF, 0x80, 0xE7, 0xC0, 0x33, 0xE0, 0x09,
  0xF0, 0x04, 0xF8, 0x20, 0x7C, 0x10, 0x3E, 0x18, 0x1F, 0x1C, 0x0F, 0xFE,
  0x07, 0xC7, 0x03, 0xE1, 0x81, 0xF0, 0x40, 0xF8, 0x20, 0x7C, 0x00, 0x3E,
  0x00, 0x1F, 0x00, 0x0F, 0x80, 0x0F, 0xE0, 0x0F, 0xFC, 0x00, 0x01, 0xFC,
  0x10, 0x1E, 0x0F, 0xC0, 0xE0, 0x1F, 0x07, 0x80, 0x1C, 0x3C, 0x00, 0x71,
  0xF0, 0x00, 0xC7, 0x80, 0x01, 0x3E, 0x00, 0x00, 0xF8, 0x00, 0x03, 0xE0,
  0x00, 0x0F, 0x80, 0x00, 0x3E, 0x00, 0x00, 0xF8, 0x07, 0xFF, 0xE0, 0x07,
  0xEF, 0x80, 0x1F, 0x1F, 0x00, 0x7C, 0x7C, 0x01, 0xF0, 0xF0, 0x07, 0xC1,
  0xE0, 0x1F, 0x03, 0xC0, 0x7C, 0x07, 0x83, 0xE0, 0x07, 0xFC, 0x00, 0xFF,
  0x87, 0xFD, 0xFC, 0x0F, 0xE3, 0xE0, 0x1F, 0x0F, 0x80, 0x7C, 0x3E, 0x01,
  0xF0, 0xF8, 0x07, 0xC3, 0xE0, 0x1F, 0x0F, 0x80, 0x7C, 0x3E, 0x01, 0xF0,
  0xF8, 0x07, 0xC3, 0xFF, 0xFF, 0x0F, 0x80, 0x7C, 0x3E, 0x01, 0xF0, 0xF8,
  0x07, 0xC3, 0xE0, 0x1F, 0x0F, 0x80, 0x7C, 0x3E, 0x01, 0xF0, 0xF8, 0x07,
  0xC3, 0xE0, 0x1F, 0x1F, 0xC0, 0xFE, 0xFF, 0x87, 0xFC, 0xFF, 0xBF, 0x0F,
  0x87, 0xC3, 0xE1, 0xF0, 0xF8, 0x7C, 0x3E, 0x1F, 0x0F, 0x87, 0xC3, 0xE1,
  0xF0, 0xF8, 0x7C, 0x3E, 0x1F, 0x0F, 0x8F, 0xCF, 0xF8, 0x0F, 0xFC, 0x0F,
  0xE0, 0x1F, 0x00, 0x7C, 0x01, 0xF0, 0x07, 0xC0, 0x1F, 0x00, 0x7C, 0x01,
  0xF0, 0x07, 0xC0, 0x1F, 0x00, 0x7C, 0x01, 0xF0, 0x07, 0xC0, 0x1F, 0x00,
  0x7C, 0x01, 0xF0, 0x07, 0xC6, 0x1F, 0x3C, 0x7C, 0xF1, 0xE3, 0x87, 0x86,
  0x3C, 0x0F, 0xC0, 0xFF, 0x8F, 0xF8, 0xFC, 0x07, 0x83, 0xE0, 0x18, 0x0F,
  0x80, 0xC0, 0x3E, 0x06, 0x00, 0xF8, 0x30, 0x03, 0xE1, 0x80, 0x0F, 0x8C,
  0x00, 0x3E, 0x70, 0x00, 0xFB, 0xE0, 0x03, 0xFF, 0x80, 0x0F, 0xBF, 0x00,
  0x3E, 0x7E, 0x00, 0xF8, 0xFC, 0x03, 0xE1, 0xF8, 0x0F, 0x87, 0xF0, 0x3E,
  0x0F, 0xC0, 0xF8, 0x1F, 0x83, 0xE0, 0x3F, 0x1F, 0xC0, 0xFE, 0xFF, 0x8F,
  0xFC, 0xFF, 0xC0, 0x0F, 0xE0, 0x00, 0xF8, 0x00, 0x1F, 0x00, 0x03, 0xE0,
  0x00, 0x7C, 0x00, 0x0F, 0x80, 0x01, 0xF0, 0x00, 0x3E, 0x00, 0x07, 0xC0,
  0x00, 0xF8, 0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00, 0x7C, 0x00, 0x0F, 0x80,
  0x11, 0xF0, 0x02, 0x3E, 0x00, 0xC7, 0xC0, 0x18, 0xF8, 0x07, 0x1F, 0x03,
  0xEF, 0xFF, 0xF8, 0xFF, 0x00, 0x0F, 0xF3, 0xF8, 0x00, 0xFE, 0x1F, 0x80,
  0x0F, 0xC1, 0xF8, 0x01, 0x7C, 0x17, 0xC0, 0x17, 0xC1, 0x7C, 0x03, 0x7C,
  0x13, 0xE0, 0x27, 0xC1, 0x3E, 0x06, 0x7C, 0x11, 0xF0, 0x47, 0xC1, 0x1F,
  0x04, 0x7C, 0x11, 0xF8, 0x87, 0xC1, 0x0F, 0x88, 0x7C, 0x10, 0xF9, 0x87,
  0xC1, 0x07, 0xD0, 0x7C, 0x10, 0x7F, 0x07, 0xC1, 0x03, 0xE0, 0x7C, 0x10,
  0x3E, 0x07, 0xC1, 0x01, 0xC0, 0x7C, 0x10, 0x1C, 0x07, 0xC3, 0x81, 0xC0,
  0xFE, 0xFE, 0x08, 0x1F, 0xF0, 0xFE, 0x01, 0xFB, 0xF8, 0x03, 0x8F, 0xE0,
  0x08, 0x3F, 0x80, 0x41, 0xFC, 0x02, 0x0B, 0xF0, 0x10, 0x5F, 0xC0, 0x82,
  0x7F, 0x04, 0x11, 0xFC, 0x20, 0x87, 0xF1, 0x04, 0x1F, 0xC8, 0x20, 0x7F,
  0x41, 0x01, 0xFA, 0x08, 0x07, 0xF0, 0x40, 0x1F, 0x82, 0x00, 0xFC, 0x10,
  0x03, 0xE0, 0x80, 0x0F, 0x04, 0x00, 0x38, 0x70, 0x00, 0xCF, 0xE0, 0x02,
  0x00, 0x00, 0xFE, 0x00, 0x1E, 0x1E, 0x00, 0xE0, 0x1C, 0x07, 0x80, 0x78,
  0x3C, 0x00, 0xF1, 0xF0, 0x03, 0xE7, 0x80, 0x0F, 0xBE, 0x00, 0x1F, 0xF8,
  0x00, 0x7F, 0xE0, 0x01, 0xFF, 0x80, 0x07, 0xFE, 0x00, 0x1F, 0xF8, 0x00,
  0x7F, 0xE0, 0x01, 0xFF, 0x80, 0x07, 0xDE, 0x00, 0x1E, 0x7C, 0x00, 0xF8,
  0xF0, 0x03, 0xC3, 0xE0, 0x1F, 0x07, 0x80, 0x78, 0x07, 0x87, 0x80, 0x07,
  0xF8, 0x00, 0xFF, 0xF8, 0x1F, 0x0F, 0x0F, 0x87, 0xC7, 0xC1, 0xF3, 0xE0,
  0xF9, 0xF0, 0x7C, 0xF8, 0x3E, 0x7C, 0x1F, 0x3E, 0x1F, 0x1F, 0x1F, 0x0F,
  0xFE, 0x07, 0xC0, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x7C, 0x00,
  0x3E, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x0F, 0xE0, 0x0F, 0xF8, 0x00, 0x01,
  0xFE, 0x00, 0x1E, 0x1E, 0x00, 0xE0, 0x1C, 0x07, 0x80, 0x78, 0x3C, 0x00,
  0xF1, 0xF0, 0x03, 0xE7, 0x80, 0x07, 0xBE, 0x00, 0x1F, 0xF8, 0x00, 0x7F,
  0xE0, 0x01, 0xFF, 0x80, 0x07, 0xFE, 0x00, 0x1F, 0xF8, 0x00, 0x7F, 0xE0,
  0x01, 0xFF, 0x80, 0x07, 0x9E, 0x00, 0x3E, 0x7C, 0x00, 0xF8, 0xF0, 0x03,
  0xC1, 0xE0, 0x1E, 0x03, 0xC0, 0xF0, 0x03, 0xCF, 0x00, 0x07, 0xF8, 0x00,
  0x0F, 0xE0, 0x00, 0x1F, 0xC0, 0x00, 0x3F, 0x80, 0x00, 0x1F, 0xE0, 0xFF,
  0xFC, 0x01, 0xF0, 0xF8, 0x0F, 0x83, 0xE0, 0x7C, 0x0F, 0x83, 0xE0, 0x7C,
  0x1F, 0x03, 0xE0, 0xF8, 0x1F, 0x07, 0xC0, 0xF8, 0x3E, 0x0F, 0x81, 0xF0,
  0xF8, 0x0F, 0xFE, 0x00, 0x7D, 0xF8, 0x03, 0xE7, 0xE0, 0x1F, 0x1F, 0x00,
  0xF8, 0xFC, 0x07, 0xC3, 0xF0, 0x3E, 0x0F, 0xC1, 0xF0, 0x7E, 0x0F, 0x81,
  0xF8, 0xFE, 0x0F, 0xEF, 0xF8, 0x3F, 0x80, 0x0F, 0xC8, 0xE1, 0xE6, 0x03,
  0xB8, 0x06, 0xE0, 0x1B, 0x80, 0x2F, 0x00, 0x3F, 0x00, 0xFF, 0x01, 0xFF,
  0x03, 0xFF, 0x07, 0xFE, 0x07, 0xF8, 0x07, 0xF0, 0x07, 0xE0, 0x0F, 0x80,
  0x1F, 0x00, 0x7C, 0x01, 0xB8, 0x0E, 0xF8, 0x72, 0x3F, 0x00, 0xFF, 0xFF,
  0xFC, 0xF8, 0xFC, 0x3E, 0x1F, 0x0F, 0x83, 0x83, 0xE0, 0x60, 0xF8, 0x10,
  0x3E, 0x00, 0x0F, 0x80, 0x03, 0xE0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x0F,
  0x80, 0x03, 0xE0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x0F, 0x80, 0x03, 0xE0,
  0x00, 0xF8, 0x00, 0x3E, 0x00, 0x1F, 0xC0, 0x1F, 0xFC, 0x00, 0xFF, 0x83,
  0xF7, 0xF0, 0x0E, 0x3E, 0x00, 0x43, 0xE0, 0x04, 0x3E, 0x00, 0x43, 0xE0,
  0x04, 0x3E, 0x00, 0x43, 0xE0, 0x04, 0x3E, 0x00, 0x43, 0xE0, 0x04, 0x3E,
  0x00, 0x43, 0xE0, 0x04, 0x3E, 0x00, 0x43, 0xE0, 0x04, 0x3E, 0x00, 0x43,
  0xE0, 0x04, 0x3E, 0x00, 0x43, 0xE0, 0x04, 0x1F, 0x00, 0x81, 0xF0, 0x18,
  0x07, 0x83, 0x00, 0x1F, 0xC0, 0xFF, 0xE1, 0xFC, 0xFC, 0x01, 0xC1, 0xF0,
  0x02, 0x07, 0xC0, 0x18, 0x1F, 0x80, 0x40, 0x3E, 0x01, 0x00, 0xFC, 0x0C,
  0x01, 0xF0, 0x20, 0x07, 0xC1, 0x80, 0x0F, 0x84, 0x00, 0x3E, 0x10, 0x00,
  0xFC, 0xC0, 0x01, 0xF2, 0x00, 0x07, 0xE8, 0x00, 0x0F, 0xE0, 0x00, 0x3F,
  0x00, 0x00, 0x7C, 0x00, 0x01, 0xE0, 0x00, 0x07, 0x80, 0x00, 0x0E, 0x00,
  0x00, 0x30, 0x00, 0x00, 0x40, 0x00, 0xFF, 0xCF, 0xF8, 0xFC, 0xFC, 0x1F,
  0xC0, 0xE3, 0xF0, 0x3E, 0x01, 0x07, 0xC0, 0x7C, 0x0C, 0x1F, 0x01, 0xF0,
  0x30, 0x7C, 0x07, 0xC0, 0x80, 0xF8, 0x1F, 0x86, 0x03, 0xE0, 0xBE, 0x18,
  0x0F, 0x82, 0xF8, 0x40, 0x1F, 0x19, 0xE3, 0x00, 0x7C, 0x47, 0xCC, 0x00,
  0xF1, 0x1F, 0x20, 0x03, 0xEC, 0x3D, 0x80, 0x0F, 0xA0, 0xFE, 0x00, 0x1E,
  0x81, 0xF0, 0x00, 0x7C, 0x07, 0xC0, 0x01, 0xF0, 0x1F, 0x00, 0x03, 0xC0,
  0x38, 0x00, 0x0E, 0x00, 0xE0, 0x00, 0x38, 0x03, 0x80, 0x00, 0x40, 0x04,
  0x00, 0x01, 0x00, 0x10, 0x00, 0xFF, 0xC7, 0xF3, 0xF8, 0x0F, 0x0F, 0xC0,
  0x60, 0x3F, 0x06, 0x01, 0xF8, 0x20, 0x07, 0xE3, 0x00, 0x1F, 0xB0, 0x00,
  0xFD, 0x00, 0x03, 0xF0, 0x00, 0x0F, 0xC0, 0x00, 0x7E, 0x00, 0x01, 0xF8,
  0x00, 0x0F, 0xE0, 0x00, 0x9F, 0x00, 0x08, 0xFC, 0x00, 0xC3, 0xF0, 0x0C,
  0x1F, 0x80, 0xC0, 0x7E, 0x06, 0x01, 0xF8, 0xF0, 0x0F, 0xCF, 0xE3, 0xFF,
  0x80, 0xFF, 0xC3, 0xFB, 0xF8, 0x07, 0x8F, 0xC0, 0x18, 0x3E, 0x01, 0x81,
  0xF8, 0x08, 0x07, 0xC0, 0xC0, 0x3F, 0x04, 0x00, 0xF8, 0x60, 0x03, 0xE2,
  0x00, 0x1F, 0xA0, 0x00, 0x7F, 0x00, 0x03, 0xF0, 0x00, 0x0F, 0x80, 0x00,
  0x7C, 0x00, 0x03, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0,
  0x00, 0x3E, 0x00, 0x03, 0xF8, 0x00, 0x3F, 0xE0, 0x00, 0x3F, 0xFF, 0xCF,
  0x81, 0xF1, 0xC0, 0x7E, 0x30, 0x1F, 0x86, 0x03, 0xE0, 0x80, 0xFC, 0x00,
  0x1F, 0x00, 0x07, 0xE0, 0x01, 0xF8, 0x00, 0x3E, 0x00, 0x0F, 0xC0, 0x01,
  0xF0, 0x00, 0x7E, 0x00, 0x1F, 0x80, 0x43, 0xE0, 0x08, 0xFC, 0x03, 0x3F,
  0x00, 0x67, 0xE0, 0x19, 0xF8, 0x07, 0x3E, 0x03, 0xEF, 0xFF, 0xFC, 0xFF,
  0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38,
  0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xFC, 0xE0, 0x38,
  0x07, 0x01, 0xC0, 0x70, 0x0E, 0x03, 0x80, 0xE0, 0x1C, 0x07, 0x01, 0xC0,
  0x38, 0x0E, 0x03, 0x80, 0x70, 0x1C, 0x07, 0x00, 0xE0, 0x38, 0x0E, 0x01,
  0x80, 0x70, 0xFE, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38,
  0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0F,
  0xFC, 0x03, 0x80, 0x1E, 0x00, 0x78, 0x03, 0xF0, 0x0C, 0xC0, 0x73, 0x81,
  0x86, 0x0E, 0x1C, 0x30, 0x31, 0xC0, 0xE6, 0x01, 0x80, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE1, 0xC3, 0xC1, 0xC1, 0xC0, 0xC0, 0x1F, 0x80, 0xC7, 0x87, 0x0F,
  0x1E, 0x3C, 0x78, 0xF0, 0x03, 0xC0, 0x1F, 0x03, 0xBC, 0x3C, 0xF1, 0xE3,
  0xCF, 0x8F, 0x3E, 0x3C, 0xF9, 0xF3, 0xFB, 0xE3, 0xC7, 0x00, 0xF8, 0x00,
  0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x78, 0x00, 0x7B, 0xF0,
  0x7C, 0x7C, 0x78, 0x3E, 0x78, 0x3E, 0x78, 0x1F, 0x78, 0x1F, 0x78, 0x1F,
  0x78, 0x1F, 0x78, 0x1F, 0x78, 0x1F, 0x78, 0x1E, 0x78, 0x3E, 0x78, 0x3C,
  0x6C, 0x78, 0x43, 0xE0, 0x0F, 0x83, 0x18, 0xE3, 0xB8, 0x77, 0x0F, 0xE0,
  0x3C, 0x07, 0x80, 0xF0, 0x1E, 0x03, 0xE0, 0x3C, 0x07, 0xE2, 0x7F, 0x83,
  0xE0, 0x01, 0xF8, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80, 0x0F,
  0x03, 0xDE, 0x1E, 0x7C, 0x7C, 0x78, 0xF0, 0xF3, 0xE1, 0xE7, 0xC3, 0xCF,
  0x87, 0x9F, 0x0F, 0x3E, 0x1E, 0x7C, 0x3C, 0xF8, 0x78, 0xF0, 0xF1, 0xF1,
  0xE1, 0xE7, 0xC1, 0xF7, 0xE0, 0x0F, 0x83, 0x9C, 0x70, 0xE7, 0x0E, 0xF0,
  0xEF, 0x0F, 0xFF, 0xFF, 0x00, 0xF0, 0x0F, 0x00, 0xF8, 0x07, 0x81, 0x7C,
  0x63, 0xFC, 0x1F, 0x80, 0x0F, 0xC1, 0xC6, 0x3C, 0x73, 0xC7, 0x3C, 0x73,
  0xC0, 0xFF, 0x83, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03,
  0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xC0, 0x3C, 0x03, 0xE0, 0xFF, 0x80,
  0x1F, 0x03, 0xCF, 0xDC, 0x39, 0xE1, 0xEF, 0x0F, 0x78, 0x7B, 0xC3, 0xCE,
  0x1C, 0x79, 0xE0, 0xFE, 0x0C, 0x00, 0xC0, 0x0E, 0x00, 0x7F, 0xF3, 0xFF,
  0xCF, 0xFF, 0x3F, 0xFE, 0x00, 0xF0, 0x07, 0xC0, 0x63, 0xFC, 0x00, 0xF8,
  0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80, 0x0F, 0x00, 0x1E, 0x3C,
  0x3D, 0xFC, 0x7C, 0x7C, 0xF0, 0x79, 0xE0, 0xF3, 0xC1, 0xE7, 0x83, 0xCF,
  0x07, 0x9E, 0x0F, 0x3C, 0x1E, 0x78, 0x3C, 0xF0, 0x79, 0xE0, 0xF3, 0xC1,
  0xEF, 0xC7, 0xE0, 0x73, 0xEF, 0xBE, 0x70, 0x0F, 0x9E, 0x79, 0xE7, 0x9E,
  0x79, 0xE7, 0x9E, 0x79, 0xE7, 0x9E, 0xFC, 0x03, 0x81, 0xF0, 0x7C, 0x1F,
  0x03, 0x80, 0x00, 0xFC, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0,
  0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3F,
  0x8F, 0xE3, 0xB9, 0xC3, 0xE0, 0xF8, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0,
  0x07, 0x80, 0x0F, 0x00, 0x1E, 0x3F, 0x3C, 0x3C, 0x78, 0x60, 0xF0, 0x81,
  0xE2, 0x03, 0xCC, 0x07, 0xBC, 0x0F, 0xF8, 0x1E, 0xF8, 0x3C, 0xF8, 0x78,
  0xF0, 0xF1, 0xF1, 0xE1, 0xF3, 0xC3, 0xFF, 0xCF, 0xE0, 0xF9, 0xE7, 0x9E,
  0x79, 0xE7, 0x9E, 0x79, 0xE7, 0x9E, 0x79, 0xE7, 0x9E, 0x79, 0xE7, 0x9E,
  0xFC, 0xF8, 0xF0, 0xF0, 0xF7, 0xF3, 0xF1, 0xF1, 0xF8, 0xF3, 0xC1, 0xE1,
  0xE7, 0x83, 0xC3, 0xCF, 0x07, 0x87, 0x9E, 0x0F, 0x0F, 0x3C, 0x1E, 0x1E,
  0x78, 0x3C, 0x3C, 0xF0, 0x78, 0x79, 0xE0, 0xF0, 0xF3, 0xC1, 0xE1, 0xE7,
  0x83, 0xC3, 0xCF, 0x07, 0x87, 0xBF, 0x1F, 0x9F, 0x80, 0xF8, 0xF0, 0xF7,
  0xF1, 0xF1, 0xF3, 0xC1, 0xE7, 0x83, 0xCF, 0x07, 0x9E, 0x0F, 0x3C, 0x1E,
  0x78, 0x3C, 0xF0, 0x79, 0xE0, 0xF3, 0xC1, 0xE7, 0x83, 0xCF, 0x07, 0xBF,
  0x1F, 0x80, 0x0F, 0xC0, 0x73, 0x83, 0x87, 0x1E, 0x1E, 0xF8, 0x7B, 0xE1,
  0xFF, 0x87, 0xFE, 0x1F, 0xF8, 0x7F, 0xE1, 0xF7, 0x87, 0x9E, 0x1E, 0x38,
  0x70, 0x73, 0x80, 0xFC, 0x00, 0xFC, 0xF8, 0x1F, 0x9F, 0x0F, 0x87, 0xC7,
  0x81, 0xE3, 0xC0, 0xF9, 0xE0, 0x7C, 0xF0, 0x3E, 0x78, 0x1F, 0x3C, 0x0F,
  0x9E, 0x07, 0xCF, 0x03, 0xC7, 0x81, 0xE3, 0xC1, 0xE1, 0xF1, 0xE0, 0xF7,
  0xE0, 0x78, 0x00, 0x3C, 0x00, 0x1E, 0x00, 0x0F, 0x00, 0x0F, 0x80, 0x0F,
  0xF0, 0x00, 0x0F, 0x88, 0x39, 0xB0, 0xF1, 0xE3, 0xC3, 0xC7, 0x87, 0x9F,
  0x0F, 0x3E, 0x1E, 0x7C, 0x3C, 0xF8, 0x79, 0xF0, 0xF3, 0xE1, 0xE3, 0xC3,
  0xC7, 0xC7, 0x87, 0x9F, 0x07, 0xDE, 0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0,
  0x01, 0xE0, 0x07, 0xC0, 0x1F, 0xE0, 0xF9, 0xE7, 0xBE, 0x7F, 0xF7, 0xCE,
  0x78, 0x07, 0x80, 0x78, 0x07, 0x80, 0x78, 0x07, 0x80, 0x78, 0x07, 0x80,
  0x78, 0x07, 0x80, 0xFE, 0x00, 0x1F, 0x4E, 0x3B, 0x83, 0x70, 0x2F, 0x05,
  0xF8, 0x1F, 0xC3, 0xFE, 0x1F, 0xE0, 0xFE, 0x07, 0xE0, 0x7C, 0x0F, 0xC3,
  0xA7, 0xC0, 0x08, 0x0C, 0x06, 0x07, 0x07, 0x87, 0xF9, 0xE0, 0xF0, 0x78,
  0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0xBC, 0x9F, 0x87,
  0x80, 0xF8, 0xFC, 0x78, 0x3C, 0x78, 0x3C, 0x78, 0x3C, 0x78, 0x3C, 0x78,
  0x3C, 0x78, 0x3C, 0x78, 0x3C, 0x78, 0x3C, 0x78, 0x3C, 0x78, 0x3C, 0x78,
  0x3C, 0x78, 0x7C, 0x3F, 0xBF, 0x1F, 0x30, 0xFF, 0x3E, 0x78, 0x18, 0xF8,
  0x60, 0xF0, 0xC1, 0xE1, 0x03, 0xE6, 0x03, 0xC8, 0x07, 0xD0, 0x07, 0xE0,
  0x0F, 0x80, 0x1F, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0x40, 0x00,
  0xFE, 0x7F, 0x7B, 0xE1, 0xF0, 0xCF, 0x0F, 0x84, 0x78, 0x3C, 0x63, 0xE3,
  0xE2, 0x0F, 0x1F, 0x10, 0x7C, 0xBD, 0x01, 0xE9, 0xE8, 0x0F, 0x4F, 0xC0,
  0x7E, 0x3C, 0x01, 0xE1, 0xE0, 0x0F, 0x0E, 0x00, 0x30, 0x30, 0x01, 0x81,
  0x80, 0x0C, 0x08, 0x00, 0xFE, 0x7D, 0xF0, 0xE7, 0xC3, 0x0F, 0x98, 0x1F,
  0x40, 0x7E, 0x00, 0xF8, 0x01, 0xF0, 0x07, 0xC0, 0x3F, 0x80, 0x9E, 0x04,
  0x7C, 0x30, 0xF9, 0xC3, 0xEF, 0x9F, 0xC0, 0xFE, 0x7D, 0xE0, 0x47, 0xC3,
  0x0F, 0x08, 0x3C, 0x20, 0xF8, 0x81, 0xE4, 0x07, 0x90, 0x1F, 0x40, 0x3E,
  0x00, 0xF8, 0x01, 0xE0, 0x07, 0x00, 0x1C, 0x00, 0x30, 0x00, 0x80, 0x02,
  0x03, 0x98, 0x0E, 0x40, 0x3B, 0x00, 0x70, 0x00, 0xFF, 0xFE, 0x1F, 0xC3,
  0xE8, 0x3C, 0x07, 0xC0, 0xF8, 0x0F, 0x81, 0xF0, 0x1F, 0x03, 0xE0, 0x3E,
  0x07, 0xC1, 0xFC, 0x3F, 0x87, 0xFF, 0xF0, 0x07, 0x87, 0x87, 0x03, 0x81,
  0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x83, 0x86, 0x00, 0xE0,
  0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x07,
  0x81, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0x3C, 0x07, 0x03,
  0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x80, 0xE0, 0x0C,
  0x38, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1C,
  0x3C, 0x3C, 0x00, 0x3C, 0x01, 0xFE, 0x2F, 0xFF, 0xD0, 0xFE, 0x00, 0xF0 };

const GFXglyph FreeSerifBold16pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   8,    0,    0 },   // 0x20 ' '
  {     1,   5,  21,  10,    3,  -20 },   // 0x21 '!'
  {    15,  11,   9,  17,    3,  -20 },   // 0x22 '"'
  {    28,  15,  21,  15,    0,  -20 },   // 0x23 '#'
  {    68,  13,  26,  16,    1,  -22 },   // 0x24 '$'
  {   111,  23,  21,  31,    4,  -20 },   // 0x25 '%'
  {   172,  22,  21,  26,    2,  -20 },   // 0x26 '&'
  {   230,   3,   9,   9,    2,  -20 },   // 0x27 '''
  {   234,   8,  27,  10,    1,  -21 },   // 0x28 '('
  {   261,   8,  27,  10,    0,  -21 },   // 0x29 ')'
  {   288,  11,  12,  16,    2,  -20 },   // 0x2A '*'
  {   305,  17,  15,  21,    2,  -14 },   // 0x2B '+'
  {   337,   5,  10,   8,    2,   -4 },   // 0x2C ','
  {   344,   7,   4,  10,    1,   -8 },   // 0x2D '-'
  {   348,   5,   5,   8,    1,   -4 },   // 0x2E '.'
  {   352,  10,  22,   9,   -1,  -20 },   // 0x2F '/'
  {   380,  14,  21,  15,    1,  -20 },   // 0x30 '0'
  {   417,  11,  21,  15,    2,  -20 },   // 0x31 '1'
  {   446,  14,  21,  16,    0,  -20 },   // 0x32 '2'
  {   483,  14,  21,  16,    0,  -20 },   // 0x33 '3'
  {   520,  14,  21,  16,    0,  -20 },   // 0x34 '4'
  {   557,  14,  21,  15,    1,  -20 },   // 0x35 '5'
  {   594,  14,  21,  16,    1,  -20 },   // 0x36 '6'
  {   631,  14,  21,  15,    1,  -20 },   // 0x37 '7'
  {   668,  14,  21,  15,    1,  -20 },   // 0x38 '8'
  {   705,  14,  21,  15,    1,  -20 },   // 0x39 '9'
  {   742,   5,  15,  10,    3,  -14 },   // 0x3A ':'
  {   752,   5,  20,  10,    3,  -14 },   // 0x3B ';'
  {   765,  17,  18,  21,    2,  -16 },   // 0x3C '<'
  {   804,  17,  10,  21,    2,  -12 },   // 0x3D '='
  {   826,  17,  18,  21,    2,  -16 },   // 0x3E '>'
  {   865,  12,  21,  15,    2,  -20 },   // 0x3F '?'
  {   897,  22,  22,  29,    3,  -20 },   // 0x40 '@'
  {   958,  21,  21,  22,    1,  -20 },   // 0x41 'A'
  {  1014,  19,  21,  20,    0,  -20 },   // 0x42 'B'
  {  1064,  20,  22,  22,    1,  -20 },   // 0x43 'C'
  {  1119,  21,  21,  23,    0,  -20 },   // 0x44 'D'
  {  1175,  19,  21,  21,    1,  -20 },   // 0x45 'E'
  {  1225,  17,  21,  19,    1,  -20 },   // 0x46 'F'
  {  1270,  22,  22,  24,    1,  -20 },   // 0x47 'G'
  {  1331,  22,  21,  24,    1,  -20 },   // 0x48 'H'
  {  1389,   9,  21,  12,    2,  -20 },   // 0x49 'I'
  {  1413,  14,  24,  16,    0,  -20 },   // 0x4A 'J'
  {  1455,  22,  21,  24,    1,  -20 },   // 0x4B 'K'
  {  1513,  19,  21,  21,    1,  -20 },   // 0x4C 'L'
  {  1563,  28,  21,  29,    0,  -20 },   // 0x4D 'M'
  {  1637,  21,  21,  22,    0,  -20 },   // 0x4E 'N'
  {  1693,  22,  22,  24,    1,  -20 },   // 0x4F 'O'
  {  1754,  17,  21,  20,    1,  -20 },   // 0x50 'P'
  {  1799,  22,  26,  24,    1,  -20 },   // 0x51 'Q'
  {  1871,  21,  21,  22,    1,  -20 },   // 0x52 'R'
  {  1927,  14,  22,  18,    2,  -20 },   // 0x53 'S'
  {  1966,  18,  21,  20,    1,  -20 },   // 0x54 'T'
  {  2014,  20,  22,  22,    1,  -20 },   // 0x55 'U'
  {  2069,  22,  22,  22,    0,  -20 },   // 0x56 'V'
  {  2130,  30,  22,  30,    0,  -20 },   // 0x57 'W'
  {  2213,  21,  21,  22,    1,  -20 },   // 0x58 'X'
  {  2269,  21,  21,  22,    0,  -20 },   // 0x59 'Y'
  {  2325,  19,  21,  20,    1,  -20 },   // 0x5A 'Z'
  {  2375,   7,  26,  10,    2,  -20 },   // 0x5B '['
  {  2398,  10,  22,   9,   -1,  -20 },   // 0x5C '\'
  {  2426,   7,  26,  10,    1,  -20 },   // 0x5D ']'
  {  2449,  14,  11,  18,    2,  -20 },   // 0x5E '^'
  {  2469,  16,   2,  15,    0,    4 },   // 0x5F '_'
  {  2473,   7,   6,  10,    0,  -21 },   // 0x60 '`'
  {  2479,  14,  15,  16,    1,  -14 },   // 0x61 'a'
  {  2506,  16,  21,  17,    1,  -20 },   // 0x62 'b'
  {  2548,  11,  15,  13,    1,  -14 },   // 0x63 'c'
  {  2569,  15,  21,  17,    1,  -20 },   // 0x64 'd'
  {  2609,  12,  15,  14,    1,  -14 },   // 0x65 'e'
  {  2632,  12,  21,  12,    0,  -20 },   // 0x66 'f'
  {  2664,  13,  21,  16,    1,  -14 },   // 0x67 'g'
  {  2699,  15,  21,  17,    1,  -20 },   // 0x68 'h'
  {  2739,   6,  21,   9,    1,  -20 },   // 0x69 'i'
  {  2755,  10,  27,  12,    0,  -20 },   // 0x6A 'j'
  {  2789,  15,  21,  17,    1,  -20 },   // 0x6B 'k'
  {  2829,   6,  21,   9,    1,  -20 },   // 0x6C 'l'
  {  2845,  23,  15,  26,    1,  -14 },   // 0x6D 'm'
  {  2889,  15,  15,  17,    1,  -14 },   // 0x6E 'n'
  {  2918,  14,  15,  16,    1,  -14 },   // 0x6F 'o'
  {  2945,  17,  21,  17,    0,  -14 },   // 0x70 'p'
  {  2990,  15,  21,  17,    1,  -14 },   // 0x71 'q'
  {  3030,  12,  15,  13,    1,  -14 },   // 0x72 'r'
  {  3053,  11,  15,  13,    1,  -14 },   // 0x73 's'
  {  3074,   9,  20,  10,    1,  -19 },   // 0x74 't'
  {  3097,  16,  15,  17,    1,  -14 },   // 0x75 'u'
  {  3127,  15,  15,  15,    0,  -14 },   // 0x76 'v'
  {  3156,  21,  15,  22,    0,  -14 },   // 0x77 'w'
  {  3196,  14,  15,  16,    1,  -14 },   // 0x78 'x'
  {  3223,  14,  21,  15,    0,  -14 },   // 0x79 'y'
  {  3260,  12,  15,  14,    1,  -14 },   // 0x7A 'z'
  {  3283,   9,  27,  12,    1,  -21 },   // 0x7B '{'
  {  3314,   2,  22,   7,    2,  -20 },   // 0x7C '|'
  {  3320,   9,  27,  12,    2,  -21 },   // 0x7D '}'
  {  3351,  14,   5,  16,    1,  -10 } }; // 0x7E '~'

const GFXfont FreeSerifBold16pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBold16pt7bBitmaps,
  (GFXglyph *)FreeSerifBold16pt7bGlyphs,
  0x20, 0x7E, 38 };

// Approx. 4032 bytes

#endif // FreeSerifBold16pt7b_H
