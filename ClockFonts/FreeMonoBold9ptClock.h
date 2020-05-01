const uint8_t FreeMonoBold9pt7bBitmaps[] PROGMEM = {
  0x38, 0xFB, 0xBE, 0x3C, 0x78, 0xF1, 0xE3, 0xC7, 0xDD, 0xF1, 0xC0, 0x38,
  0xF3, 0x60, 0xC1, 0x83, 0x06, 0x0C, 0x18, 0xFD, 0xF8, 0x3C, 0xFE, 0xC7,
  0x03, 0x03, 0x06, 0x0C, 0x18, 0x70, 0xE3, 0xFF, 0xFF, 0x7C, 0xFE, 0x03,
  0x03, 0x03, 0x1E, 0x1E, 0x07, 0x03, 0x03, 0xFE, 0x7C, 0x1C, 0x38, 0xB1,
  0x64, 0xD9, 0xBF, 0xFF, 0x3E, 0x7C, 0x7E, 0x3F, 0x18, 0x0F, 0xC7, 0xF3,
  0x1C, 0x06, 0x03, 0xC3, 0xFF, 0x9F, 0x80, 0x0F, 0x3F, 0x30, 0x60, 0x60,
  0xDC, 0xFE, 0xE3, 0xC3, 0x63, 0x7E, 0x3C, 0xFF, 0xFF, 0xC3, 0x03, 0x06,
  0x06, 0x06, 0x0C, 0x0C, 0x0C, 0x18, 0x38, 0xFB, 0x1E, 0x3C, 0x6F, 0x9F,
  0x63, 0xC7, 0x8F, 0xF1, 0xC0, 0x3C, 0x7E, 0xE6, 0xC3, 0xC3, 0xE7, 0x7F,
  0x3B, 0x06, 0x0E, 0xFC, 0xF0, 0xF0, 0x0F };

const GFXglyph FreeMonoBold9pt7bGlyphs[] PROGMEM = {
  {     0,   7,  12,  11,    2,  -11 },   // 0x30 '0'
  {    11,   7,  11,  11,    2,  -10 },   // 0x31 '1'
  {    21,   8,  12,  11,    1,  -11 },   // 0x32 '2'
  {    33,   8,  12,  11,    2,  -11 },   // 0x33 '3'
  {    45,   7,  10,  11,    2,   -9 },   // 0x34 '4'
  {    54,   9,  11,  11,    1,  -10 },   // 0x35 '5'
  {    67,   8,  12,  11,    2,  -11 },   // 0x36 '6'
  {    79,   8,  11,  11,    1,  -10 },   // 0x37 '7'
  {    90,   7,  12,  11,    2,  -11 },   // 0x38 '8'
  {   101,   8,  12,  11,    2,  -11 },   // 0x39 '9'
  {   113,   2,   8,  11,    4,   -7 } }; // 0x3A ':'

const GFXfont FreeMonoBold9pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBold9pt7bBitmaps,
  (GFXglyph *)FreeMonoBold9pt7bGlyphs,
  0x30, 0x3A, 18 };

// Approx. 199 bytes