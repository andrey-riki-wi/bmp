#pragma once
#include <cstdint>


typedef std::uint8_t BYTE;
typedef std::uint16_t WORD;
typedef std::uint32_t DWORD;
typedef std::int32_t LONG;


struct BITMAPFILEHEADER {
    WORD bfType;
    DWORD bfSize;
    WORD bfReserved1;
    WORD bfReserved2;
    DWORD bfOffBits;
};

struct BITMAPCOREHEADER {
    DWORD bcSize;
    WORD bcWidth;
    WORD bcHeight;
    WORD bcPlanes;
    WORD bcBitCount;
};