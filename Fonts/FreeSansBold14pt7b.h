#ifndef FreeSansBold14pt7b_H
#define FreeSansBold14pt7b_H

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

const uint8_t FreeSansBold14pt7bBitmaps[] PROGMEM = {
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x66, 0x66, 0x00, 0xFF, 0xF0, 0xF1,
  0xFE, 0x3F, 0xC7, 0xF8, 0xFF, 0x1E, 0xC1, 0x98, 0x30, 0x07, 0x38, 0x0C,
  0x70, 0x38, 0xE0, 0x71, 0xC7, 0xFF, 0xEF, 0xFF, 0xDF, 0xFF, 0x8E, 0x38,
  0x1C, 0x70, 0x38, 0xC3, 0xFF, 0xF7, 0xFF, 0xEF, 0xFF, 0xC7, 0x1C, 0x0E,
  0x70, 0x18, 0xE0, 0x71, 0xC0, 0xE3, 0x80, 0x01, 0x80, 0x0F, 0xE0, 0x7F,
  0xE1, 0xFF, 0xE7, 0x9B, 0xEE, 0x33, 0xDC, 0x67, 0xBC, 0xC0, 0x7F, 0x80,
  0x7F, 0xC0, 0x7F, 0xE0, 0x1F, 0xE0, 0x1B, 0xE0, 0x33, 0xFC, 0x67, 0xF8,
  0xCF, 0xF9, 0xBE, 0xFF, 0xF8, 0xFF, 0xE0, 0x7F, 0x00, 0x18, 0x00, 0x30,
  0x00, 0x1C, 0x03, 0x81, 0xFC, 0x0C, 0x07, 0xF0, 0x70, 0x38, 0xE1, 0x80,
  0xC1, 0x8E, 0x03, 0x06, 0x30, 0x0E, 0x39, 0xC0, 0x1F, 0xC6, 0x00, 0x7F,
  0x38, 0x00, 0x70, 0xC7, 0x80, 0x06, 0x7F, 0x80, 0x39, 0xFE, 0x00, 0xCE,
  0x1C, 0x07, 0x30, 0x30, 0x18, 0xC0, 0xC0, 0xE3, 0x87, 0x03, 0x07, 0xF8,
  0x1C, 0x1F, 0xE0, 0x60, 0x1E, 0x00, 0x07, 0xC0, 0x07, 0xF8, 0x01, 0xFF,
  0x00, 0xF1, 0xC0, 0x3C, 0x70, 0x0F, 0x9C, 0x01, 0xEE, 0x00, 0x3F, 0x00,
  0x0F, 0x80, 0x0F, 0xF1, 0xC7, 0xDE, 0x73, 0xE7, 0xBC, 0xF0, 0xFE, 0x3C,
  0x1F, 0x8F, 0x03, 0xC3, 0xE3, 0xF8, 0x7F, 0xFF, 0x0F, 0xFB, 0xC0, 0xF8,
  0x78, 0xFF, 0xFF, 0xF6, 0x60, 0x0E, 0x38, 0x71, 0xC3, 0x8E, 0x1C, 0x38,
  0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0xE1, 0xC3, 0x83, 0x87,
  0x06, 0x0E, 0x0C, 0xE0, 0xE1, 0xC1, 0xC3, 0x83, 0x87, 0x0E, 0x0E, 0x1C,
  0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x38, 0x70, 0xE3, 0x87, 0x1C, 0x38,
  0x60, 0x0C, 0x03, 0x04, 0xC9, 0xFE, 0x7F, 0x87, 0x83, 0xF0, 0xCC, 0x12,
  0x00, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x00, 0xFF,
  0xF3, 0x37, 0xE8, 0xFF, 0xFF, 0xF8, 0xFF, 0xF0, 0x06, 0x0C, 0x10, 0x60,
  0xC1, 0x86, 0x0C, 0x18, 0x20, 0xC1, 0x83, 0x0C, 0x18, 0x30, 0x41, 0x83,
  0x00, 0x0F, 0x81, 0xFF, 0x1F, 0xFC, 0xF1, 0xE7, 0x8F, 0x78, 0x3F, 0xC1,
  0xFE, 0x0F, 0xF0, 0x7F, 0x83, 0xFC, 0x1F, 0xE0, 0xFF, 0x07, 0xF8, 0x3D,
  0xE3, 0xCF, 0x1E, 0x7F, 0xF1, 0xFF, 0x03, 0xE0, 0x03, 0x07, 0x1F, 0xFF,
  0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x81, 0xFF, 0x1F, 0xFD, 0xF1, 0xFF, 0x07, 0xF8,
  0x3F, 0xC1, 0xE0, 0x0F, 0x00, 0xF8, 0x0F, 0x80, 0xF8, 0x0F, 0x80, 0xF8,
  0x1F, 0x01, 0xF0, 0x0F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xC0,
  0xFF, 0xC7, 0xFF, 0x3E, 0x3E, 0xF0, 0x7B, 0xC1, 0xE0, 0x0F, 0x00, 0xF8,
  0x03, 0xF0, 0x0F, 0xE0, 0x07, 0x80, 0x0F, 0x00, 0x3F, 0xC0, 0xFF, 0x03,
  0xFE, 0x1F, 0x7F, 0xF8, 0xFF, 0xC0, 0xFC, 0x00, 0x03, 0xE0, 0x3E, 0x07,
  0xE0, 0x7E, 0x0F, 0xE0, 0xDE, 0x19, 0xE3, 0x9E, 0x31, 0xE7, 0x1E, 0x61,
  0xEC, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x1E, 0x01, 0xE0, 0x1E, 0x01,
  0xE0, 0x3F, 0xF1, 0xFF, 0x9F, 0xFC, 0xE0, 0x07, 0x00, 0x38, 0x01, 0xDE,
  0x0F, 0xFC, 0xFF, 0xF7, 0x87, 0x80, 0x1E, 0x00, 0xF0, 0x07, 0x80, 0x3F,
  0x81, 0xFE, 0x1E, 0xFF, 0xF3, 0xFF, 0x07, 0xE0, 0x0F, 0xC0, 0xFF, 0x0F,
  0xFC, 0xF1, 0xF7, 0x80, 0x78, 0x03, 0xDF, 0x1F, 0xFC, 0xFF, 0xF7, 0xC7,
  0xBC, 0x1F, 0xE0, 0xFF, 0x07, 0xF8, 0x3D, 0xC1, 0xEF, 0x1E, 0x7F, 0xF1,
  0xFF, 0x03, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xE0, 0x0F, 0x00,
  0x70, 0x07, 0x80, 0x78, 0x03, 0xC0, 0x3C, 0x01, 0xE0, 0x0E, 0x00, 0xF0,
  0x07, 0x80, 0x3C, 0x01, 0xC0, 0x1E, 0x00, 0xF0, 0x07, 0x80, 0x0F, 0x81,
  0xFF, 0x0F, 0xF8, 0xF1, 0xE7, 0x07, 0x38, 0x39, 0xE3, 0xC7, 0xFC, 0x1F,
  0xC1, 0xFF, 0x1E, 0x3D, 0xE0, 0xFF, 0x07, 0xF8, 0x3F, 0xC1, 0xFF, 0x1F,
  0x7F, 0xF1, 0xFF, 0x07, 0xE0, 0x0F, 0x81, 0xFF, 0x1F, 0xF8, 0xF1, 0xEF,
  0x07, 0x78, 0x3F, 0xC1, 0xFE, 0x0F, 0xF0, 0x7B, 0xC7, 0xDF, 0xFE, 0x7F,
  0xF1, 0xF7, 0x80, 0x3F, 0xC1, 0xCF, 0x1E, 0x7F, 0xE1, 0xFE, 0x03, 0xE0,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0xFF, 0xF1, 0x13, 0xE8, 0x00, 0x08, 0x03, 0xC0, 0xFE, 0x1F, 0xC7, 0xF8,
  0x7E, 0x03, 0x80, 0x1F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7E, 0x00, 0xF0,
  0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0x07, 0x80, 0x3F, 0x80,
  0x7F, 0x80, 0x7F, 0x00, 0x7C, 0x00, 0xE0, 0x3F, 0x07, 0xF1, 0xFE, 0x3F,
  0x81, 0xE0, 0x08, 0x00, 0x00, 0x1F, 0x81, 0xFF, 0x1F, 0xFC, 0xF3, 0xEF,
  0x0F, 0xF8, 0x3F, 0xC1, 0xE0, 0x0F, 0x00, 0xF8, 0x0F, 0x80, 0xF8, 0x0F,
  0x80, 0xF8, 0x07, 0x80, 0x38, 0x00, 0x00, 0x00, 0x00, 0x78, 0x03, 0xC0,
  0x1E, 0x00, 0x00, 0x7F, 0x80, 0x01, 0xFF, 0xE0, 0x07, 0xC0, 0xF8, 0x0F,
  0x00, 0x3C, 0x1E, 0x00, 0x1C, 0x3C, 0x00, 0x0E, 0x38, 0x3E, 0xC6, 0x70,
  0x7E, 0xC3, 0x70, 0xE3, 0xC3, 0xE1, 0xC1, 0xC3, 0xE1, 0xC1, 0x83, 0xE3,
  0x81, 0x83, 0xE3, 0x81, 0x87, 0xE3, 0x83, 0x06, 0xE3, 0x83, 0x0E, 0xE3,
  0xC7, 0x1C, 0x71, 0xFD, 0xF8, 0x70, 0xF9, 0xF0, 0x78, 0x00, 0x00, 0x3C,
  0x00, 0x00, 0x1E, 0x00, 0x80, 0x0F, 0x81, 0xC0, 0x03, 0xFF, 0xC0, 0x00,
  0xFF, 0x00, 0x01, 0xF0, 0x00, 0x3E, 0x00, 0x0F, 0xE0, 0x01, 0xFC, 0x00,
  0x3F, 0x80, 0x0F, 0x78, 0x01, 0xEF, 0x00, 0x3D, 0xE0, 0x0F, 0x1E, 0x01,
  0xE3, 0xC0, 0x3C, 0x78, 0x0F, 0x07, 0x81, 0xE0, 0xF0, 0x3F, 0xFE, 0x0F,
  0xFF, 0xE1, 0xFF, 0xFC, 0x7C, 0x07, 0x8F, 0x00, 0x79, 0xE0, 0x0F, 0x7C,
  0x01, 0xE0, 0xFF, 0xF0, 0xFF, 0xF8, 0xFF, 0xFC, 0xF0, 0x3E, 0xF0, 0x1E,
  0xF0, 0x1E, 0xF0, 0x1E, 0xF0, 0x3C, 0xFF, 0xF8, 0xFF, 0xF8, 0xFF, 0xFC,
  0xF0, 0x1E, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x1F,
  0xFF, 0xFE, 0xFF, 0xFC, 0xFF, 0xF0, 0x03, 0xF0, 0x07, 0xFE, 0x07, 0xFF,
  0x87, 0xC3, 0xE7, 0xC0, 0xF3, 0xC0, 0x3F, 0xC0, 0x1F, 0xE0, 0x00, 0xF0,
  0x00, 0x78, 0x00, 0x3C, 0x00, 0x1E, 0x00, 0x0F, 0x00, 0x07, 0x80, 0x3D,
  0xE0, 0x1E, 0xF8, 0x1E, 0x3E, 0x1F, 0x1F, 0xFF, 0x03, 0xFF, 0x00, 0xFE,
  0x00, 0xFF, 0xE0, 0xFF, 0xF8, 0xFF, 0xFC, 0xF0, 0x3C, 0xF0, 0x1E, 0xF0,
  0x1E, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0,
  0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x1E, 0xF0, 0x1E, 0xF0, 0x3C, 0xFF,
  0xFC, 0xFF, 0xF8, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x3C, 0x00, 0xFF, 0xFB, 0xFF, 0xEF, 0xFF,
  0xBC, 0x00, 0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x0F, 0x00,
  0x78, 0x03, 0xC0, 0x1E, 0x00, 0xFF, 0xF7, 0xFF, 0xBF, 0xFD, 0xE0, 0x0F,
  0x00, 0x78, 0x03, 0xC0, 0x1E, 0x00, 0xF0, 0x07, 0x80, 0x3C, 0x01, 0xE0,
  0x00, 0x03, 0xF8, 0x03, 0xFF, 0x81, 0xFF, 0xF0, 0xF8, 0x3E, 0x7C, 0x03,
  0xDE, 0x00, 0xFF, 0x80, 0x03, 0xC0, 0x00, 0xF0, 0x00, 0x3C, 0x07, 0xFF,
  0x01, 0xFF, 0xC0, 0x7F, 0xF0, 0x01, 0xDE, 0x00, 0x77, 0x80, 0x3D, 0xF0,
  0x1F, 0x3F, 0x0F, 0xC7, 0xFF, 0xB0, 0xFF, 0xCC, 0x0F, 0xC3, 0xF0, 0x0F,
  0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F,
  0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xF0, 0x0F,
  0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F,
  0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0xF0, 0x0F, 0x00, 0xF0, 0x0F, 0x00, 0xF0, 0x0F, 0x00, 0xF0, 0x0F,
  0x00, 0xF0, 0x0F, 0x00, 0xF0, 0x0F, 0x00, 0xFF, 0x0F, 0xF0, 0xFF, 0x0F,
  0xF9, 0xF7, 0xFE, 0x7F, 0xC1, 0xF8, 0xF0, 0x1F, 0x78, 0x1F, 0x3C, 0x1F,
  0x1E, 0x0F, 0x0F, 0x0F, 0x07, 0x8F, 0x03, 0xCF, 0x81, 0xEF, 0x80, 0xFF,
  0x80, 0x7F, 0xC0, 0x3F, 0xF0, 0x1F, 0xFC, 0x0F, 0x9F, 0x07, 0x87, 0x83,
  0xC3, 0xE1, 0xE0, 0xF8, 0xF0, 0x3E, 0x78, 0x0F, 0x3C, 0x07, 0xDE, 0x01,
  0xF0, 0xF0, 0x07, 0x80, 0x3C, 0x01, 0xE0, 0x0F, 0x00, 0x78, 0x03, 0xC0,
  0x1E, 0x00, 0xF0, 0x07, 0x80, 0x3C, 0x01, 0xE0, 0x0F, 0x00, 0x78, 0x03,
  0xC0, 0x1E, 0x00, 0xF0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x07,
  0xFF, 0xC0, 0xFF, 0xF8, 0x3F, 0xFF, 0x07, 0xFF, 0xE0, 0xFF, 0xFC, 0x1F,
  0xFD, 0xC3, 0xFF, 0xB8, 0xEF, 0xF7, 0x1D, 0xFE, 0xE3, 0xBF, 0xCE, 0x77,
  0xF9, 0xDC, 0xFF, 0x3B, 0x9F, 0xE7, 0x73, 0xFC, 0xFE, 0x7F, 0x8F, 0xCF,
  0xF1, 0xF1, 0xFE, 0x3E, 0x3F, 0xC7, 0xC7, 0xF8, 0x78, 0xF0, 0xF0, 0x0F,
  0xF8, 0x0F, 0xFC, 0x0F, 0xFC, 0x0F, 0xFE, 0x0F, 0xFE, 0x0F, 0xFF, 0x0F,
  0xF7, 0x0F, 0xF7, 0x8F, 0xF3, 0xCF, 0xF3, 0xCF, 0xF1, 0xEF, 0xF0, 0xEF,
  0xF0, 0xFF, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x3F, 0xF0, 0x1F, 0xF0, 0x1F,
  0xF0, 0x0F, 0x03, 0xF8, 0x01, 0xFF, 0xC0, 0x7F, 0xFC, 0x1F, 0x07, 0xC7,
  0xC0, 0x7C, 0xF0, 0x07, 0xBE, 0x00, 0xF7, 0x80, 0x0F, 0xF0, 0x01, 0xFE,
  0x00, 0x3F, 0xC0, 0x07, 0xF8, 0x00, 0xFF, 0x00, 0x1F, 0xF0, 0x07, 0xDE,
  0x00, 0xF3, 0xE0, 0x3E, 0x3E, 0x0F, 0x83, 0xFF, 0xE0, 0x3F, 0xF8, 0x01,
  0xFC, 0x00, 0xFF, 0xF1, 0xFF, 0xF3, 0xFF, 0xF7, 0x81, 0xFF, 0x01, 0xFE,
  0x03, 0xFC, 0x07, 0xF8, 0x0F, 0xF0, 0x3F, 0xFF, 0xFB, 0xFF, 0xE7, 0xFF,
  0x8F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x03,
  0xC0, 0x07, 0x80, 0x00, 0x03, 0xF8, 0x01, 0xFF, 0xC0, 0x7F, 0xFC, 0x1F,
  0x07, 0xC7, 0xC0, 0x7C, 0xF0, 0x07, 0xBE, 0x00, 0xF7, 0x80, 0x0F, 0xF0,
  0x01, 0xFE, 0x00, 0x3F, 0xC0, 0x07, 0xF8, 0x00, 0xFF, 0x00, 0x1F, 0xF0,
  0x37, 0xDE, 0x0F, 0xF3, 0xE0, 0xFE, 0x3E, 0x0F, 0x83, 0xFF, 0xF0, 0x3F,
  0xFF, 0x81, 0xFC, 0xE0, 0x00, 0x08, 0xFF, 0xF8, 0x7F, 0xFF, 0x3F, 0xFF,
  0x9E, 0x03, 0xEF, 0x00, 0xF7, 0x80, 0x7B, 0xC0, 0x3D, 0xE0, 0x1E, 0xF0,
  0x1E, 0x7F, 0xFE, 0x3F, 0xFE, 0x1F, 0xFF, 0x8F, 0x03, 0xE7, 0x80, 0xF3,
  0xC0, 0x79, 0xE0, 0x3C, 0xF0, 0x1E, 0x78, 0x0F, 0x3C, 0x07, 0x9E, 0x01,
  0xF0, 0x0F, 0xE0, 0x3F, 0xF8, 0x7F, 0xFC, 0xF8, 0x3E, 0xF0, 0x1E, 0xF0,
  0x1E, 0xF0, 0x00, 0xF8, 0x00, 0x7F, 0x80, 0x7F, 0xF8, 0x1F, 0xFE, 0x01,
  0xFE, 0x00, 0x1F, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF8, 0x1E, 0x7F,
  0xFE, 0x3F, 0xFC, 0x0F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x1E,
  0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80,
  0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x03,
  0xC0, 0x07, 0x80, 0x0F, 0x00, 0x1E, 0x00, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0,
  0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0,
  0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0,
  0x0F, 0xF8, 0x0F, 0x7C, 0x3E, 0x7F, 0xFE, 0x1F, 0xF8, 0x07, 0xE0, 0xF0,
  0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0x78, 0x1E, 0x78, 0x1E, 0x78, 0x1E, 0x3C,
  0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x1C, 0x38, 0x1E, 0x78, 0x1E, 0x70, 0x0E,
  0x70, 0x0F, 0xF0, 0x0F, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xC0, 0x03,
  0xC0, 0x03, 0xC0, 0x78, 0x1E, 0x07, 0xBC, 0x0F, 0x03, 0xDE, 0x0F, 0x81,
  0xEF, 0x07, 0xE1, 0xE3, 0xC3, 0xF0, 0xF1, 0xE1, 0xF8, 0x78, 0xF0, 0xFC,
  0x3C, 0x38, 0xE6, 0x1C, 0x1E, 0x73, 0x9E, 0x0F, 0x39, 0xCF, 0x07, 0x9C,
  0xE7, 0x01, 0xCE, 0x73, 0x80, 0xEE, 0x1D, 0xC0, 0x7F, 0x0F, 0xE0, 0x1F,
  0x87, 0xE0, 0x0F, 0xC3, 0xF0, 0x07, 0xE1, 0xF8, 0x03, 0xE0, 0x7C, 0x00,
  0xF0, 0x3C, 0x00, 0x78, 0x1E, 0x00, 0xF8, 0x1F, 0x3C, 0x0F, 0x1F, 0x0F,
  0x87, 0x87, 0x81, 0xE7, 0xC0, 0xFB, 0xC0, 0x3F, 0xC0, 0x1F, 0xE0, 0x07,
  0xE0, 0x01, 0xF0, 0x01, 0xF8, 0x00, 0xFC, 0x00, 0xFF, 0x00, 0x7F, 0xC0,
  0x79, 0xE0, 0x7C, 0xF8, 0x3C, 0x3C, 0x3E, 0x1F, 0x1E, 0x07, 0xDF, 0x01,
  0xE0, 0x78, 0x0F, 0xBE, 0x07, 0xCF, 0x03, 0xC7, 0xC3, 0xE1, 0xE1, 0xE0,
  0xF1, 0xF0, 0x3C, 0xF0, 0x1E, 0x78, 0x07, 0xF8, 0x03, 0xFC, 0x00, 0xFC,
  0x00, 0x7E, 0x00, 0x1E, 0x00, 0x0F, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01,
  0xE0, 0x00, 0xF0, 0x00, 0x78, 0x00, 0x3C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x01, 0xE0, 0x07, 0xC0, 0x1F, 0x00, 0x7C, 0x00, 0xF0, 0x03,
  0xE0, 0x0F, 0x80, 0x3E, 0x00, 0x7C, 0x01, 0xF0, 0x07, 0xC0, 0x0F, 0x00,
  0x3E, 0x00, 0xF8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF,
  0xFC, 0xF3, 0xCF, 0x3C, 0xF3, 0xCF, 0x3C, 0xF3, 0xCF, 0x3C, 0xF3, 0xCF,
  0x3C, 0xF3, 0xCF, 0xFF, 0xFC, 0xC0, 0xC0, 0x60, 0x60, 0x60, 0x30, 0x30,
  0x30, 0x18, 0x18, 0x18, 0x0C, 0x0C, 0x0C, 0x06, 0x06, 0x06, 0x03, 0x03,
  0xFF, 0xFF, 0xCF, 0x3C, 0xF3, 0xCF, 0x3C, 0xF3, 0xCF, 0x3C, 0xF3, 0xCF,
  0x3C, 0xF3, 0xCF, 0x3C, 0xFF, 0xFF, 0xFC, 0x0F, 0x00, 0xF0, 0x1F, 0x01,
  0xF8, 0x3B, 0x83, 0x9C, 0x39, 0xC7, 0x1C, 0x70, 0xEF, 0x0E, 0xE0, 0x7E,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xE3, 0x8C, 0x30, 0x0F, 0xC0, 0xFF,
  0xC7, 0xFF, 0x9E, 0x1E, 0xF0, 0x78, 0x03, 0xE0, 0xFF, 0x9F, 0xFE, 0x7C,
  0x7B, 0xC1, 0xEF, 0x07, 0xBE, 0x3E, 0xFF, 0xF9, 0xFF, 0xE3, 0xE7, 0xC0,
  0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x03, 0xCF, 0x0F, 0xFF,
  0x3F, 0xFE, 0xFC, 0xFB, 0xE1, 0xFF, 0x03, 0xFC, 0x0F, 0xF0, 0x3F, 0xC0,
  0xFF, 0x03, 0xFE, 0x1F, 0xFC, 0xFB, 0xFF, 0xCF, 0xFF, 0x3D, 0xF0, 0x0F,
  0xC1, 0xFF, 0x9F, 0xFE, 0xF0, 0xFF, 0x83, 0xF8, 0x03, 0xC0, 0x1E, 0x00,
  0xF0, 0x07, 0x80, 0x3E, 0x0E, 0xF0, 0xF7, 0xFF, 0x1F, 0xF8, 0x3F, 0x00,
  0x00, 0x3C, 0x00, 0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x3C, 0x3C, 0xF3, 0xFF,
  0xCF, 0xFF, 0x7C, 0xFF, 0xE1, 0xFF, 0x03, 0xFC, 0x0F, 0xF0, 0x3F, 0xC0,
  0xFF, 0x03, 0xFE, 0x1F, 0x7C, 0xFD, 0xFF, 0xF3, 0xFF, 0xC3, 0xEF, 0x0F,
  0x80, 0xFF, 0x87, 0xFF, 0x1E, 0x1C, 0xF0, 0x3B, 0xFF, 0xEF, 0xFF, 0xBF,
  0xFE, 0xF0, 0x03, 0xC0, 0x07, 0x00, 0x1E, 0x1E, 0x3F, 0xF8, 0xFF, 0xC0,
  0xFC, 0x00, 0x3E, 0xFD, 0xFB, 0xC7, 0x9F, 0xFF, 0xFF, 0x78, 0xF1, 0xE3,
  0xC7, 0x8F, 0x1E, 0x3C, 0x78, 0xF1, 0xE3, 0xC0, 0x0F, 0x3C, 0xFE, 0xF3,
  0xFF, 0xDF, 0x3F, 0xF8, 0x7F, 0xC0, 0xFF, 0x03, 0xFC, 0x0F, 0xF0, 0x3F,
  0xC0, 0xFF, 0x87, 0xDE, 0x3F, 0x7F, 0xFC, 0xFF, 0xF0, 0xF3, 0xC0, 0x0F,
  0x00, 0x3F, 0xE1, 0xF7, 0x87, 0x8F, 0xFC, 0x1F, 0xC0, 0xF0, 0x07, 0x80,
  0x3C, 0x01, 0xE0, 0x0F, 0x00, 0x79, 0xE3, 0xDF, 0xDF, 0xFF, 0xF8, 0xFF,
  0x83, 0xFC, 0x1F, 0xE0, 0xFF, 0x07, 0xF8, 0x3F, 0xC1, 0xFE, 0x0F, 0xF0,
  0x7F, 0x83, 0xFC, 0x1F, 0xE0, 0xF0, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0xF3, 0xC0, 0x00, 0xF3, 0xCF, 0x3C, 0xF3,
  0xCF, 0x3C, 0xF3, 0xCF, 0x3C, 0xF3, 0xCF, 0x3C, 0xF3, 0xFF, 0xFF, 0xE0,
  0xF0, 0x07, 0x80, 0x3C, 0x01, 0xE0, 0x0F, 0x00, 0x78, 0x7F, 0xC3, 0xDE,
  0x3C, 0xF3, 0xC7, 0xBC, 0x3F, 0xC1, 0xFF, 0x0F, 0xF8, 0x7D, 0xE3, 0xEF,
  0x1E, 0x3C, 0xF1, 0xE7, 0x87, 0xBC, 0x3F, 0xE0, 0xF0, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xC7, 0xE7, 0xFF, 0x7F,
  0xBF, 0xFF, 0xFF, 0xF3, 0xF1, 0xFF, 0x0F, 0x07, 0xF8, 0x78, 0x3F, 0xC3,
  0xC1, 0xFE, 0x1E, 0x0F, 0xF0, 0xF0, 0x7F, 0x87, 0x83, 0xFC, 0x3C, 0x1F,
  0xE1, 0xE0, 0xFF, 0x0F, 0x07, 0xF8, 0x78, 0x3F, 0xC3, 0xC1, 0xE0, 0xF3,
  0xC7, 0xFF, 0xBF, 0xFD, 0xF1, 0xFF, 0x07, 0xF8, 0x3F, 0xC1, 0xFE, 0x0F,
  0xF0, 0x7F, 0x83, 0xFC, 0x1F, 0xE0, 0xFF, 0x07, 0xF8, 0x3F, 0xC1, 0xE0,
  0x0F, 0xE0, 0x3F, 0xE0, 0xFF, 0xE3, 0xE3, 0xEF, 0x83, 0xFE, 0x03, 0xFC,
  0x07, 0xF8, 0x0F, 0xF0, 0x1F, 0xE0, 0x3F, 0xE0, 0xFB, 0xE3, 0xE3, 0xFF,
  0x83, 0xFE, 0x03, 0xF8, 0x00, 0xF3, 0xC3, 0xFF, 0xCF, 0xFF, 0xBF, 0x3E,
  0xF8, 0x7F, 0xC0, 0xFF, 0x03, 0xFC, 0x0F, 0xF0, 0x3F, 0xC0, 0xFF, 0x87,
  0xFF, 0x3E, 0xFF, 0xFB, 0xDF, 0xCF, 0x3C, 0x3C, 0x00, 0xF0, 0x03, 0xC0,
  0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x00, 0x0F, 0x3C, 0xFF, 0xF7, 0xFF, 0xDF,
  0x3F, 0xF8, 0x7F, 0xC0, 0xFF, 0x03, 0xFC, 0x0F, 0xF0, 0x3F, 0xC0, 0xFF,
  0x87, 0xDF, 0x3F, 0x7F, 0xFC, 0xFE, 0xF0, 0xF3, 0xC0, 0x0F, 0x00, 0x3C,
  0x00, 0xF0, 0x03, 0xC0, 0x0F, 0x00, 0x3C, 0xF3, 0xFB, 0xFF, 0xFF, 0x0F,
  0x07, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC0,
  0x1F, 0xC3, 0xFF, 0x1F, 0xFD, 0xE1, 0xFF, 0x00, 0x7C, 0x03, 0xFE, 0x0F,
  0xFE, 0x1F, 0xF8, 0x1F, 0xC0, 0x1F, 0xE0, 0xFF, 0xFF, 0x3F, 0xF8, 0x7F,
  0x00, 0x79, 0xE7, 0xBF, 0xFF, 0xF7, 0x9E, 0x79, 0xE7, 0x9E, 0x79, 0xE7,
  0x9F, 0x7C, 0xF0, 0xF0, 0x7F, 0x83, 0xFC, 0x1F, 0xE0, 0xFF, 0x07, 0xF8,
  0x3F, 0xC1, 0xFE, 0x0F, 0xF0, 0x7F, 0x83, 0xFC, 0x1F, 0xF1, 0xFF, 0xFF,
  0xBF, 0xFC, 0xF9, 0xE0, 0xF0, 0x3D, 0xE0, 0xF7, 0x83, 0xDE, 0x1E, 0x3C,
  0x78, 0xF1, 0xE3, 0xC7, 0x07, 0x3C, 0x1E, 0xF0, 0x7B, 0x80, 0xEE, 0x03,
  0xF8, 0x07, 0xC0, 0x1F, 0x00, 0x7C, 0x00, 0xF0, 0x70, 0x7B, 0x87, 0xC3,
  0x9E, 0x3E, 0x3C, 0xF1, 0xF1, 0xE7, 0x8F, 0x8F, 0x1C, 0x6E, 0x70, 0xF7,
  0x77, 0x87, 0xBB, 0xBC, 0x3D, 0xDD, 0xC0, 0xEC, 0x6E, 0x07, 0xE3, 0xF0,
  0x3F, 0x1F, 0x80, 0xF8, 0xF8, 0x07, 0x87, 0xC0, 0x3C, 0x1E, 0x00, 0x78,
  0x3D, 0xF1, 0xE3, 0xCF, 0x87, 0xBC, 0x1F, 0xE0, 0x3F, 0x80, 0x7C, 0x01,
  0xF0, 0x07, 0xC0, 0x3F, 0x81, 0xEF, 0x07, 0xBC, 0x3C, 0x79, 0xF1, 0xE7,
  0x83, 0xC0, 0xF8, 0x1C, 0xF0, 0x79, 0xE0, 0xF3, 0xC1, 0xC3, 0xC7, 0x87,
  0x8F, 0x07, 0x1C, 0x0F, 0x38, 0x1E, 0xF0, 0x1D, 0xC0, 0x3F, 0x80, 0x7F,
  0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x01, 0xC0, 0x03, 0x80, 0x0F, 0x00,
  0xFC, 0x01, 0xF8, 0x03, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x1E,
  0x03, 0xC0, 0x7C, 0x0F, 0x81, 0xF0, 0x1E, 0x03, 0xC0, 0x7C, 0x0F, 0x80,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0E, 0x3C, 0xF9, 0xC3, 0x87, 0x0E, 0x1C,
  0x38, 0x70, 0xE1, 0xCF, 0x1E, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87,
  0x0F, 0x8F, 0x1E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xE1, 0xE3,
  0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xF0, 0xE7, 0xCE, 0x1C,
  0x38, 0x70, 0xE1, 0xC3, 0x87, 0x3E, 0x78, 0xF0, 0x78, 0x0F, 0xE3, 0xC7,
  0xF0, 0x1E };

const GFXglyph FreeSansBold14pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   8,    0,    0 },   // 0x20 ' '
  {     1,   4,  19,   9,    3,  -18 },   // 0x21 '!'
  {    11,  11,   7,  13,    1,  -19 },   // 0x22 '"'
  {    21,  15,  18,  15,    0,  -17 },   // 0x23 '#'
  {    55,  15,  22,  15,    0,  -19 },   // 0x24 '$'
  {    97,  22,  19,  24,    1,  -18 },   // 0x25 '%'
  {   150,  18,  19,  20,    1,  -18 },   // 0x26 '&'
  {   193,   4,   7,   7,    2,  -19 },   // 0x27 '''
  {   197,   7,  25,   9,    1,  -19 },   // 0x28 '('
  {   219,   7,  25,   9,    0,  -19 },   // 0x29 ')'
  {   241,  10,   9,  11,    0,  -19 },   // 0x2A '*'
  {   253,  13,  13,  16,    1,  -12 },   // 0x2B '+'
  {   275,   4,   8,   7,    1,   -2 },   // 0x2C ','
  {   279,   7,   3,   9,    1,   -8 },   // 0x2D '-'
  {   282,   4,   3,   7,    1,   -2 },   // 0x2E '.'
  {   284,   7,  19,   8,    0,  -18 },   // 0x2F '/'
  {   301,  13,  19,  15,    1,  -18 },   // 0x30 '0'
  {   332,   8,  19,  15,    2,  -18 },   // 0x31 '1'
  {   351,  13,  19,  15,    1,  -18 },   // 0x32 '2'
  {   382,  14,  19,  15,    1,  -18 },   // 0x33 '3'
  {   416,  12,  19,  15,    1,  -18 },   // 0x34 '4'
  {   445,  13,  19,  15,    1,  -18 },   // 0x35 '5'
  {   476,  13,  19,  15,    1,  -18 },   // 0x36 '6'
  {   507,  13,  19,  15,    1,  -18 },   // 0x37 '7'
  {   538,  13,  19,  15,    1,  -18 },   // 0x38 '8'
  {   569,  13,  19,  15,    1,  -18 },   // 0x39 '9'
  {   600,   4,  13,   7,    1,  -12 },   // 0x3A ':'
  {   607,   4,  18,   7,    1,  -12 },   // 0x3B ';'
  {   616,  13,  13,  16,    1,  -12 },   // 0x3C '<'
  {   638,  13,  10,  16,    1,  -10 },   // 0x3D '='
  {   655,  13,  13,  16,    1,  -12 },   // 0x3E '>'
  {   677,  13,  20,  17,    2,  -19 },   // 0x3F '?'
  {   710,  24,  24,  26,    1,  -19 },   // 0x40 '@'
  {   782,  19,  20,  19,    0,  -19 },   // 0x41 'A'
  {   830,  16,  20,  19,    2,  -19 },   // 0x42 'B'
  {   870,  17,  20,  19,    1,  -19 },   // 0x43 'C'
  {   913,  16,  20,  20,    2,  -19 },   // 0x44 'D'
  {   953,  14,  20,  18,    2,  -19 },   // 0x45 'E'
  {   988,  13,  20,  17,    2,  -19 },   // 0x46 'F'
  {  1021,  18,  20,  21,    1,  -19 },   // 0x47 'G'
  {  1066,  16,  20,  20,    2,  -19 },   // 0x48 'H'
  {  1106,   4,  20,   8,    2,  -19 },   // 0x49 'I'
  {  1116,  12,  20,  15,    1,  -19 },   // 0x4A 'J'
  {  1146,  17,  20,  20,    2,  -19 },   // 0x4B 'K'
  {  1189,  13,  20,  17,    2,  -19 },   // 0x4C 'L'
  {  1222,  19,  20,  23,    2,  -19 },   // 0x4D 'M'
  {  1270,  16,  20,  20,    2,  -19 },   // 0x4E 'N'
  {  1310,  19,  20,  21,    1,  -19 },   // 0x4F 'O'
  {  1358,  15,  20,  18,    2,  -19 },   // 0x50 'P'
  {  1396,  19,  21,  21,    1,  -19 },   // 0x51 'Q'
  {  1446,  17,  20,  19,    2,  -19 },   // 0x52 'R'
  {  1489,  16,  20,  18,    1,  -19 },   // 0x53 'S'
  {  1529,  15,  20,  17,    1,  -19 },   // 0x54 'T'
  {  1567,  16,  20,  20,    2,  -19 },   // 0x55 'U'
  {  1607,  16,  20,  18,    1,  -19 },   // 0x56 'V'
  {  1647,  25,  20,  26,    0,  -19 },   // 0x57 'W'
  {  1710,  17,  20,  18,    1,  -19 },   // 0x58 'X'
  {  1753,  17,  20,  17,    0,  -19 },   // 0x59 'Y'
  {  1796,  15,  20,  16,    1,  -19 },   // 0x5A 'Z'
  {  1834,   6,  25,   9,    2,  -19 },   // 0x5B '['
  {  1853,   8,  19,   7,    0,  -18 },   // 0x5C '\'
  {  1872,   6,  25,   9,    0,  -19 },   // 0x5D ']'
  {  1891,  12,  12,  16,    2,  -18 },   // 0x5E '^'
  {  1909,  17,   2,  15,   -1,    4 },   // 0x5F '_'
  {  1914,   5,   4,   7,    0,  -19 },   // 0x60 '`'
  {  1917,  14,  15,  15,    1,  -14 },   // 0x61 'a'
  {  1944,  14,  20,  17,    2,  -19 },   // 0x62 'b'
  {  1979,  13,  15,  15,    1,  -14 },   // 0x63 'c'
  {  2004,  14,  20,  17,    1,  -19 },   // 0x64 'd'
  {  2039,  14,  15,  16,    1,  -14 },   // 0x65 'e'
  {  2066,   7,  20,   9,    1,  -19 },   // 0x66 'f'
  {  2084,  14,  21,  17,    1,  -14 },   // 0x67 'g'
  {  2121,  13,  20,  16,    2,  -19 },   // 0x68 'h'
  {  2154,   4,  20,   8,    2,  -19 },   // 0x69 'i'
  {  2164,   6,  26,   8,    0,  -19 },   // 0x6A 'j'
  {  2184,  13,  20,  15,    2,  -19 },   // 0x6B 'k'
  {  2217,   4,  20,   7,    2,  -19 },   // 0x6C 'l'
  {  2227,  21,  15,  24,    2,  -14 },   // 0x6D 'm'
  {  2267,  13,  15,  17,    2,  -14 },   // 0x6E 'n'
  {  2292,  15,  15,  17,    1,  -14 },   // 0x6F 'o'
  {  2321,  14,  21,  17,    2,  -14 },   // 0x70 'p'
  {  2358,  14,  21,  17,    1,  -14 },   // 0x71 'q'
  {  2395,   9,  15,  11,    2,  -14 },   // 0x72 'r'
  {  2412,  13,  15,  15,    1,  -14 },   // 0x73 's'
  {  2437,   6,  18,   9,    1,  -17 },   // 0x74 't'
  {  2451,  13,  15,  17,    2,  -14 },   // 0x75 'u'
  {  2476,  14,  15,  15,    0,  -14 },   // 0x76 'v'
  {  2503,  21,  15,  21,    0,  -14 },   // 0x77 'w'
  {  2543,  14,  15,  15,    0,  -14 },   // 0x78 'x'
  {  2570,  15,  21,  15,    0,  -14 },   // 0x79 'y'
  {  2610,  12,  15,  14,    1,  -14 },   // 0x7A 'z'
  {  2633,   7,  25,  11,    1,  -19 },   // 0x7B '{'
  {  2655,   2,  25,   8,    3,  -19 },   // 0x7C '|'
  {  2662,   7,  25,  11,    2,  -19 },   // 0x7D '}'
  {  2684,  12,   4,  13,    1,   -7 } }; // 0x7E '~'

const GFXfont FreeSansBold14pt7b PROGMEM = {
  (uint8_t  *)FreeSansBold14pt7bBitmaps,
  (GFXglyph *)FreeSansBold14pt7bGlyphs,
  0x20, 0x7E, 33 };

// Approx. 3362 bytes

#endif // FreeSansBold14pt7b_H
