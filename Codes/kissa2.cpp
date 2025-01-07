#include <PCM.h>

//kirjoittanut Aliisa Alalammi 9.12.2024. Tarvittiin ääni väärille painalluksille. Tehty samalla tavalla kuin edellinen. (kissa.cpp)

const unsigned char sample2[] PROGMEM = {
0x52, 0x49, 0x46, 0x46, 0x62, 0x0F, 0x00, 0x00, 0x57, 0x41, 0x56, 0x45, 0x66, 0x6D, 0x74, 0x20, 
0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x40, 0x1F, 0x00, 0x00, 0x40, 0x1F, 0x00, 0x00, 
0x01, 0x00, 0x08, 0x00, 0x64, 0x61, 0x74, 0x61, 0x3D, 0x0F, 0x00, 0x00, 0x7F, 0x75, 0x73, 0x62, 
0x99, 0x81, 0x9D, 0x86, 0x74, 0x7F, 0x70, 0x70, 0x75, 0x9B, 0x84, 0x9F, 0x70, 0x82, 0x71, 0x7E, 
0x66, 0x86, 0x94, 0x85, 0x9A, 0x6C, 0x86, 0x72, 0x83, 0x61, 0x8C, 0x8C, 0x8C, 0x93, 0x73, 0x83, 
0x77, 0x81, 0x63, 0x84, 0x91, 0x87, 0x97, 0x75, 0x81, 0x7B, 0x80, 0x6F, 0x6D, 0x9A, 0x7D, 0x99, 
0x81, 0x78, 0x84, 0x78, 0x80, 0x5E, 0x8D, 0x89, 0x81, 0x9B, 0x72, 0x87, 0x7D, 0x7F, 0x7C, 0x5E, 
0x94, 0x82, 0x82, 0x9B, 0x6E, 0x8D, 0x7C, 0x80, 0x80, 0x57, 0x98, 0x7D, 0x81, 0x9D, 0x6F, 0x8E, 
0x80, 0x79, 0x8A, 0x53, 0x90, 0x86, 0x77, 0x9F, 0x76, 0x86, 0x88, 0x74, 0x8F, 0x5A, 0x7C, 0x94, 
0x6B, 0x9F, 0x7E, 0x83, 0x8B, 0x76, 0x89, 0x72, 0x60, 0x9C, 0x6F, 0x8D, 0x92, 0x78, 0x8C, 0x7D, 
0x82, 0x85, 0x59, 0x87, 0x89, 0x6F, 0xA0, 0x76, 0x90, 0x81, 0x81, 0x84, 0x74, 0x61, 0x95, 0x72, 
0x89, 0x8E, 0x82, 0x8A, 0x81, 0x84, 0x80, 0x64, 0x73, 0x96, 0x69, 0x9C, 0x7A, 0x91, 0x81, 0x86, 
0x7E, 0x7B, 0x5E, 0x8F, 0x7F, 0x7C, 0x95, 0x7F, 0x8E, 0x7C, 0x89, 0x7D, 0x73, 0x60, 0xA0, 0x67, 
0x95, 0x82, 0x8B, 0x88, 0x82, 0x87, 0x7B, 0x64, 0x76, 0x94, 0x6A, 0x9D, 0x7A, 0x95, 0x79, 0x8D, 
0x7D, 0x7C, 0x5A, 0x8E, 0x82, 0x77, 0x98, 0x7B, 0x96, 0x78, 0x8F, 0x79, 0x75, 0x5B, 0x9F, 0x6F, 
0x8B, 0x8B, 0x86, 0x8B, 0x7E, 0x8D, 0x7A, 0x6A, 0x69, 0xA2, 0x60, 0x9B, 0x7F, 0x91, 0x80, 0x88, 
0x85, 0x7E, 0x61, 0x73, 0x9D, 0x5F, 0xA1, 0x7E, 0x94, 0x79, 0x90, 0x7E, 0x80, 0x58, 0x7F, 0x95, 
0x62, 0xA1, 0x7F, 0x91, 0x79, 0x90, 0x7C, 0x84, 0x4F, 0x8A, 0x8E, 0x64, 0xA3, 0x7E, 0x8F, 0x79, 
0x92, 0x7A, 0x84, 0x50, 0x85, 0x95, 0x5D, 0xA3, 0x83, 0x8C, 0x7B, 0x8E, 0x7E, 0x82, 0x5E, 0x6F, 
0x9F, 0x5F, 0x95, 0x90, 0x84, 0x80, 0x8C, 0x7F, 0x80, 0x59, 0x75, 0xA3, 0x5A, 0x9A, 0x8C, 0x82, 
0x81, 0x8A, 0x82, 0x7C, 0x5F, 0x6E, 0xA3, 0x5E, 0x93, 0x8F, 0x84, 0x80, 0x8C, 0x80, 0x7D, 0x5F, 
0x6C, 0xA8, 0x5D, 0x91, 0x92, 0x83, 0x80, 0x89, 0x81, 0x7F, 0x5D, 0x6D, 0xAB, 0x59, 0x92, 0x91, 
0x84, 0x7E, 0x89, 0x80, 0x7E, 0x64, 0x67, 0xA9, 0x5F, 0x8A, 0x94, 0x86, 0x7A, 0x8D, 0x7C, 0x7F, 
0x4E, 0x84, 0xA7, 0x4E, 0xA0, 0x89, 0x83, 0x79, 0x8D, 0x7A, 0x7C, 0x4B, 0x99, 0x90, 0x55, 0xA5, 
0x84, 0x86, 0x76, 0x90, 0x72, 0x7B, 0x4B, 0xA5, 0x7F, 0x61, 0xA0, 0x89, 0x7D, 0x7D, 0x8B, 0x76, 
0x6C, 0x51, 0xBB, 0x5E, 0x78, 0x9F, 0x85, 0x76, 0x87, 0x7F, 0x7B, 0x52, 0x7B, 0xB1, 0x46, 0x99, 
0x93, 0x80, 0x77, 0x8C, 0x79, 0x71, 0x47, 0xB5, 0x78, 0x59, 0xAD, 0x82, 0x7B, 0x7D, 0x87, 0x7B, 
0x5A, 0x64, 0xC4, 0x44, 0x8A, 0x9F, 0x7E, 0x78, 0x85, 0x83, 0x76, 0x42, 0x9F, 0x9A, 0x42, 0xAB, 
0x8C, 0x7C, 0x78, 0x8B, 0x7C, 0x66, 0x50, 0xC0, 0x62, 0x69, 0xAB, 0x84, 0x75, 0x84, 0x84, 0x7B, 
0x41, 0x92, 0xAD, 0x3C, 0xA3, 0x9A, 0x74, 0x7C, 0x88, 0x7F, 0x62, 0x4D, 0xCC, 0x5A, 0x67, 0xB7, 
0x79, 0x78, 0x86, 0x82, 0x78, 0x41, 0x9A, 0xAA, 0x37, 0xAD, 0x96, 0x71, 0x82, 0x88, 0x7E, 0x5C, 
0x57, 0xCB, 0x55, 0x6D, 0xBA, 0x74, 0x7C, 0x86, 0x87, 0x6F, 0x3D, 0xB2, 0x97, 0x35, 0xBF, 0x8B, 
0x6D, 0x87, 0x88, 0x80, 0x53, 0x61, 0xD0, 0x45, 0x78, 0xBE, 0x6C, 0x7C, 0x8A, 0x88, 0x72, 0x40, 
0xA5, 0xA3, 0x34, 0xB5, 0x9D, 0x65, 0x86, 0x8F, 0x7C, 0x4A, 0x70, 0xCF, 0x3E, 0x7F, 0xC2, 0x63, 
0x7F, 0x90, 0x84, 0x64, 0x48, 0xC4, 0x7E, 0x40, 0xCB, 0x82, 0x6B, 0x8E, 0x89, 0x7B, 0x42, 0x8B, 
0xC4, 0x2C, 0x9F, 0xB5, 0x60, 0x83, 0x90, 0x84, 0x5E, 0x4F, 0xC9, 0x6D, 0x4B, 0xCE, 0x7D, 0x6A, 
0x8F, 0x8E, 0x6E, 0x51, 0x88, 0xB7, 0x3B, 0x97, 0xB1, 0x68, 0x7D, 0x95, 0x7E, 0x5D, 0x59, 0xBF, 
0x72, 0x4D, 0xCB, 0x7E, 0x6A, 0x8E, 0x8B, 0x72, 0x51, 0x88, 0xB8, 0x39, 0x98, 0xB7, 0x62, 0x7E, 
0x95, 0x7F, 0x58, 0x5F, 0xC6, 0x64, 0x57, 0xCF, 0x78, 0x66, 0x93, 0x8E, 0x68, 0x5B, 0x8D, 0xA8, 
0x46, 0x99, 0xAD, 0x69, 0x7D, 0x92, 0x7E, 0x63, 0x5D, 0xB4, 0x7A, 0x50, 0xC3, 0x89, 0x62, 0x8F, 
0x8C, 0x6C, 0x56, 0x95, 0xA5, 0x45, 0x9D, 0xAA, 0x68, 0x7D, 0x8D, 0x80, 0x58, 0x71, 0xB7, 0x5F, 
0x6B, 0xC0, 0x7A, 0x6A, 0x8E, 0x86, 0x65, 0x5F, 0xA8, 0x88, 0x4D, 0xB5, 0x96, 0x64, 0x81, 0x8F, 
0x6A, 0x4D, 0xB4, 0x90, 0x3E, 0xBE, 0x97, 0x5A, 0x89, 0x8A, 0x67, 0x52, 0xBB, 0x85, 0x43, 0xC0, 
0x95, 0x58, 0x8D, 0x89, 0x63, 0x4F, 0xBF, 0x83, 0x3E, 0xC6, 0x8F, 0x59, 0x8B, 0x8C, 0x63, 0x4A, 
0xC8, 0x85, 0x36, 0xCD, 0x8D, 0x59, 0x8E, 0x86, 0x6D, 0x43, 0xC1, 0x96, 0x27, 0xD3, 0x8C, 0x57, 
0x91, 0x7F, 0x70, 0x3B, 0xD0, 0x8C, 0x24, 0xDE, 0x86, 0x4C, 0xA0, 0x75, 0x70, 0x4D, 0xB0, 0xA1, 
0x2A, 0xC3, 0x9A, 0x54, 0x8D, 0x7F, 0x71, 0x36, 0xD5, 0x8F, 0x1C, 0xEE, 0x75, 0x57, 0x99, 0x7D, 
0x57, 0x4D, 0xF5, 0x4B, 0x46, 0xFF, 0x46, 0x66, 0xA8, 0x6F, 0x4C, 0x66, 0xF2, 0x34, 0x5E, 0xFF, 
0x37, 0x74, 0xA4, 0x71, 0x4B, 0x65, 0xF5, 0x32, 0x5F, 0xFF, 0x36, 0x76, 0x9F, 0x72, 0x4E, 0x66, 
0xEF, 0x37, 0x63, 0xEF, 0x4A, 0x6A, 0x9D, 0x72, 0x64, 0x56, 0xCE, 0x74, 0x3C, 0xE0, 0x7D, 0x5D, 
0x81, 0x90, 0x2D, 0x8B, 0xF1, 0x00, 0xC1, 0xB9, 0x3A, 0x90, 0x93, 0x40, 0x49, 0xFF, 0x2D, 0x4D, 
0xFF, 0x3C, 0x54, 0xC5, 0x66, 0x4F, 0x64, 0xDC, 0x5F, 0x3D, 0xF3, 0x68, 0x56, 0x9F, 0x81, 0x5D, 
0x70, 0x87, 0xAD, 0x45, 0x93, 0xC5, 0x67, 0x4F, 0xAA, 0x35, 0x6D, 0xFF, 0x00, 0xD2, 0xBE, 0x27, 
0x98, 0xA2, 0x00, 0xA8, 0xFF, 0x00, 0xCC, 0xF6, 0x00, 0x8D, 0xCF, 0x3F, 0x63, 0x73, 0xC7, 0x5C, 
0x4E, 0xF1, 0x5D, 0x5A, 0x9F, 0x7A, 0x69, 0x82, 0x74, 0x92, 0x82, 0x63, 0xD6, 0x72, 0x4A, 0x6C, 
0x3C, 0xFF, 0x00, 0x73, 0xFF, 0x00, 0x52, 0xFF, 0x00, 0x14, 0xFF, 0x00, 0x2E, 0xFF, 0x3B, 0x23, 
0xE8, 0x74, 0x42, 0x94, 0x9D, 0x4F, 0x8E, 0x95, 0x82, 0x72, 0x53, 0xE8, 0x55, 0x18, 0xC6, 0xE6, 
0x00, 0xDC, 0xFF, 0x00, 0x83, 0xB3, 0x00, 0xF8, 0xD0, 0x00, 0xFF, 0x67, 0x00, 0xE6, 0x80, 0x00, 
0xFF, 0xC3, 0x00, 0xFF, 0xBD, 0x00, 0x9F, 0xD4, 0x2E, 0x75, 0x79, 0xB2, 0x6E, 0x47, 0xE5, 0x79, 
0x2A, 0xA9, 0x86, 0x80, 0x88, 0x9B, 0xA4, 0x44, 0xA2, 0x6A, 0x41, 0x7F, 0xC9, 0x6C, 0x64, 0xE8, 
0x41, 0x5F, 0x00, 0xF8, 0xDE, 0x00, 0xFF, 0xC6, 0x00, 0xA7, 0xF4, 0x00, 0x42, 0xFF, 0x00, 0x33, 
0xFF, 0x31, 0x05, 0xFF, 0x8B, 0x36, 0x92, 0xBF, 0x35, 0x59, 0xEB, 0x61, 0x47, 0xA1, 0xC9, 0x17, 
0x07, 0xFF, 0x42, 0x00, 0xFF, 0x73, 0x00, 0xFF, 0x00, 0x3E, 0xFF, 0x00, 0xEE, 0xFF, 0x00, 0xBB, 
0xD4, 0x00, 0x8F, 0xFF, 0x00, 0x80, 0xFF, 0x1F, 0x3F, 0xDF, 0x78, 0x1B, 0x7C, 0xFF, 0x12, 0x5F, 
0xFF, 0x22, 0x53, 0xCB, 0x60, 0x00, 0xFF, 0x76, 0x00, 0xFF, 0x70, 0x1F, 0xCA, 0x81, 0x00, 0xDB, 
0xDC, 0x00, 0xEE, 0xDE, 0x00, 0x9A, 0xCD, 0x15, 0x2B, 0xFF, 0x3B, 0x00, 0xFF, 0x55, 0x0F, 0xE3, 
0x8D, 0x00, 0xC8, 0xFF, 0x00, 0xC0, 0xFF, 0x00, 0x7F, 0xDE, 0x2C, 0x12, 0xFF, 0x82, 0x00, 0xFF, 
0x97, 0x00, 0xCE, 0xA5, 0x00, 0x76, 0xFF, 0x00, 0x5A, 0xFF, 0x1A, 0x47, 0xE7, 0x55, 0x00, 0xFF, 
0xA8, 0x00, 0xFF, 0xA7, 0x00, 0xBC, 0xBC, 0x00, 0x78, 0xFF, 0x00, 0x5A, 0xFF, 0x14, 0x4E, 0xE7, 
0x58, 0x00, 0xEF, 0xDA, 0x00, 0xFF, 0xB9, 0x00, 0xAE, 0xB7, 0x00, 0xB6, 0xFF, 0x00, 0xEB, 0xE9, 
0x00, 0xB0, 0xCA, 0x23, 0x57, 0xA9, 0xD4, 0x00, 0xA8, 0xFF, 0x00, 0x94, 0xE3, 0x00, 0x3D, 0xFF, 
0x00, 0x5F, 0xFF, 0x03, 0x65, 0xD4, 0x35, 0x21, 0xFF, 0x0F, 0x41, 0xFF, 0x17, 0x50, 0xF0, 0x4E, 
0x37, 0x92, 0xDE, 0x42, 0x45, 0xFF, 0x2A, 0x35, 0xF8, 0x4F, 0x00, 0xFF, 0x55, 0x08, 0xFF, 0x43, 
0x39, 0xC4, 0x5E, 0x17, 0xFF, 0x2D, 0x3C, 0xFF, 0x10, 0x60, 0xE7, 0x49, 0x33, 0xB5, 0xCB, 0x1C, 
0xA7, 0xF1, 0x14, 0x71, 0xDB, 0x00, 0x99, 0xFF, 0x00, 0xE8, 0xD4, 0x00, 0xC1, 0xA7, 0x2B, 0x5D, 
0xF1, 0x6C, 0x26, 0xFF, 0x70, 0x1A, 0xD4, 0x80, 0x23, 0xA3, 0xDA, 0x26, 0x9C, 0xD8, 0x40, 0x58, 
0xCC, 0x15, 0xA7, 0xDE, 0x05, 0xF6, 0x97, 0x17, 0xCD, 0x42, 0x37, 0xFF, 0x00, 0x86, 0xFF, 0x00, 
0xA1, 0xDE, 0x32, 0x45, 0xCB, 0xAE, 0x1C, 0xB8, 0xD8, 0x15, 0x80, 0xDE, 0x2C, 0x81, 0xC1, 0x5C, 
0x87, 0x9A, 0x6F, 0x8C, 0x25, 0xD6, 0xAB, 0x00, 0xFF, 0x77, 0x00, 0xFF, 0x01, 0x0E, 0xFF, 0x00, 
0x5F, 0xFF, 0x00, 0x6B, 0xFF, 0x00, 0x9B, 0xFF, 0x00, 0xEC, 0xF3, 0x00, 0xC9, 0xC1, 0x2C, 0x95, 
0xAA, 0x29, 0xCD, 0x6B, 0x6A, 0xE6, 0x20, 0xA3, 0x9B, 0x51, 0x9C, 0x8B, 0xA8, 0x64, 0x5A, 0x52, 
0xDE, 0x69, 0x01, 0xFF, 0x74, 0x00, 0xFF, 0x64, 0x00, 0xFF, 0x85, 0x00, 0xFF, 0x5E, 0x00, 0xFD, 
0x78, 0x00, 0xFF, 0x58, 0x2F, 0xFF, 0x0F, 0x69, 0xDD, 0x48, 0x74, 0xB7, 0x68, 0x72, 0x7A, 0xB6, 
0x71, 0x5E, 0xAE, 0x5D, 0x26, 0xF0, 0x7E, 0x24, 0xFF, 0x6A, 0x24, 0xAA, 0x43, 0xBA, 0x9C, 0x00, 
0xFF, 0x4F, 0x03, 0xFF, 0x3D, 0x00, 0xFF, 0x48, 0x00, 0xFF, 0x31, 0x29, 0xEE, 0x63, 0x4A, 0x94, 
0x87, 0xA7, 0x35, 0xC5, 0xA2, 0x0F, 0xC5, 0x8E, 0x30, 0x8F, 0xCC, 0x37, 0x8E, 0xDC, 0x25, 0x7F, 
0x81, 0x5E, 0xD3, 0x33, 0xB4, 0xD4, 0x00, 0xB6, 0x69, 0x4A, 0xFF, 0x00, 0xCA, 0xF1, 0x00, 0xFA, 
0x9D, 0x00, 0xB6, 0xC7, 0x3E, 0x66, 0xF1, 0x45, 0x40, 0xDF, 0x63, 0x57, 0xB0, 0x7F, 0x7D, 0x64, 
0x9F, 0x8B, 0x1A, 0xAD, 0xD9, 0x00, 0xFF, 0xB9, 0x00, 0xE3, 0x0C, 0x9C, 0xEF, 0x00, 0xFF, 0xD9, 
0x00, 0xFF, 0x65, 0x00, 0xFF, 0x35, 0x00, 0xFF, 0x00, 0x33, 0xFF, 0x1E, 0x5E, 0xAC, 0xAC, 0x24, 
0xBC, 0xB6, 0x28, 0x8A, 0xBC, 0x0C, 0x9C, 0xE5, 0x00, 0xE6, 0x88, 0x33, 0xA4, 0x3A, 0x95, 0xDE, 
0x00, 0xFF, 0xBA, 0x00, 0xFF, 0x87, 0x00, 0xFF, 0xCB, 0x00, 0xFF, 0x7D, 0x02, 0xD3, 0x76, 0x06, 
0xFF, 0x6B, 0x07, 0xFF, 0x01, 0x4E, 0xFF, 0x0B, 0x2C, 0xFF, 0x00, 0x5C, 0xFF, 0x00, 0x76, 0xF7, 
0x00, 0x5B, 0xFF, 0x00, 0xAC, 0xFF, 0x00, 0xAA, 0xD9, 0x00, 0xA2, 0xFF, 0x00, 0xEF, 0xF1, 0x00, 
0xC5, 0xBE, 0x00, 0xD7, 0xF6, 0x00, 0xFF, 0xB2, 0x00, 0xF5, 0x88, 0x00, 0xFF, 0x92, 0x00, 0xFF, 
0x47, 0x03, 0xFF, 0x40, 0x00, 0xFF, 0x2B, 0x19, 0xFF, 0x01, 0x42, 0xFF, 0x08, 0x37, 0xFF, 0x00, 
0x80, 0xFF, 0x00, 0x88, 0xF6, 0x00, 0x99, 0xFF, 0x00, 0xF8, 0xF9, 0x00, 0xD2, 0xC0, 0x00, 0xF0, 
0xEA, 0x00, 0xFF, 0xA6, 0x00, 0xFA, 0x84, 0x00, 0xFF, 0x75, 0x00, 0xFF, 0x35, 0x0E, 0xFF, 0x28, 
0x0A, 0xFF, 0x00, 0x4D, 0xFF, 0x00, 0x63, 0xFF, 0x00, 0x8D, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0xD4, 
0xC5, 0x00, 0xFF, 0xC0, 0x00, 0xFF, 0x77, 0x00, 0xFF, 0x51, 0x00, 0xFF, 0x12, 0x2E, 0xFF, 0x00, 
0x46, 0xFF, 0x00, 0x8D, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xE1, 0xB0, 0x00, 0xFF, 0x76, 0x00, 0xFF, 
0x37, 0x00, 0xFF, 0x02, 0x34, 0xFF, 0x00, 0xA5, 0xFF, 0x00, 0x9C, 0xEA, 0x00, 0xFF, 0xCC, 0x00, 
0xFF, 0x83, 0x00, 0xFF, 0x40, 0x00, 0xFF, 0x00, 0x5D, 0xFF, 0x00, 0x62, 0xFF, 0x00, 0xC5, 0xFF, 
0x00, 0xFF, 0xCB, 0x00, 0xF8, 0x80, 0x00, 0xFF, 0x22, 0x25, 0xFF, 0x04, 0x32, 0xFF, 0x00, 0x89, 
0xFF, 0x00, 0xF7, 0xF8, 0x00, 0xCE, 0xB3, 0x00, 0xFF, 0x50, 0x00, 0xFF, 0x32, 0x12, 0xFF, 0x0A, 
0x37, 0xFF, 0x00, 0xA4, 0xFF, 0x00, 0x81, 0xF3, 0x00, 0xFF, 0xA4, 0x00, 0xFF, 0x6C, 0x00, 0xFF, 
0x26, 0x12, 0xFF, 0x00, 0x8F, 0xFF, 0x00, 0x75, 0xFB, 0x00, 0xFF, 0xB1, 0x00, 0xFF, 0x78, 0x00, 
0xFF, 0x38, 0x01, 0xFF, 0x00, 0x81, 0xFF, 0x00, 0x62, 0xFF, 0x00, 0xFB, 0xCB, 0x00, 0xFF, 0x8A, 
0x00, 0xFD, 0x54, 0x00, 0xFF, 0x00, 0x6A, 0xFF, 0x00, 0x50, 0xFF, 0x00, 0xD9, 0xEF, 0x00, 0xFF, 
0x9F, 0x00, 0xE3, 0x7A, 0x00, 0xFF, 0x05, 0x40, 0xFF, 0x20, 0x33, 0xFF, 0x00, 0x72, 0xFF, 0x00, 
0xEF, 0xE2, 0x00, 0x97, 0xD0, 0x00, 0xFF, 0x79, 0x00, 0xFF, 0x59, 0x0E, 0xF1, 0x47, 0x00, 0xFF, 
0x00, 0x80, 0xFF, 0x1A, 0x4B, 0xFF, 0x00, 0xAA, 0xFF, 0x00, 0xFF, 0xB0, 0x01, 0xAB, 0xBA, 0x00, 
0xFF, 0x6F, 0x00, 0xFF, 0x67, 0x12, 0xE3, 0x4C, 0x00, 0xFF, 0x00, 0x93, 0xFF, 0x13, 0x5D, 0xF4, 
0x00, 0x9E, 0xFF, 0x00, 0xFF, 0xC0, 0x0B, 0x95, 0xC5, 0x00, 0xFF, 0x72, 0x00, 0xFF, 0x55, 0x24, 
0xDC, 0x56, 0x00, 0xFF, 0x00, 0x71, 0xFF, 0x2D, 0x48, 0xEF, 0x00, 0x76, 0xFF, 0x00, 0xF0, 0xC9, 
0x11, 0x8D, 0xCF, 0x00, 0xFF, 0xAA, 0x00, 0xFF, 0x76, 0x22, 0xBD, 0x88, 0x00, 0xFF, 0x29, 0x36, 
0xFF, 0x42, 0x3A, 0xE2, 0x2E, 0x2E, 0xFF, 0x00, 0xAF, 0xEF, 0x20, 0x6F, 0xD9, 0x00, 0xA3, 0xFF, 
0x00, 0xF5, 0xB3, 0x21, 0x8C, 0xC5, 0x00, 0xFF, 0x99, 0x00, 0xFF, 0x7B, 0x23, 0xBF, 0x7D, 0x00, 
0xFF, 0x1F, 0x51, 0xFF, 0x45, 0x40, 0xDF, 0x23, 0x52, 0xFF, 0x00, 0xC2, 0xD5, 0x28, 0x77, 0xCE, 
0x00, 0xBF, 0xD8, 0x00, 0xF4, 0xAA, 0x1F, 0x98, 0xB5, 0x00, 0xFF, 0x72, 0x17, 0xFF, 0x70, 0x25, 
0xD3, 0x56, 0x1C, 0xFF, 0x00, 0x82, 0xFC, 0x33, 0x51, 0xE8, 0x00, 0x8B, 0xFF, 0x00, 0xD1, 0xD1, 
0x11, 0x8C, 0xC7, 0x00, 0xFF, 0x82, 0x0D, 0xFF, 0x74, 0x1B, 0xDC, 0x59, 0x19, 0xFF, 0x13, 0x6C, 
0xFF, 0x33, 0x44, 0xF7, 0x00, 0x92, 0xFC, 0x00, 0xD5, 0xD1, 0x00, 0xA8, 0xB5, 0x00, 0xFF, 0x7C, 
0x0D, 0xFF, 0x58, 0x0F, 0xFF, 0x1C, 0x53, 0xFF, 0x00, 0xA9, 0xFF, 0x00, 0xA8, 0xC6, 0x00, 0xFF, 
0x8E, 0x00, 0xFF, 0x5B, 0x0D, 0xFF, 0x2E, 0x3F, 0xFF, 0x04, 0x85, 0xFF, 0x00, 0x93, 0xD2, 0x00, 
0xED, 0xA4, 0x00, 0xFF, 0x5D, 0x07, 0xFF, 0x22, 0x4F, 0xFF, 0x00, 0x9A, 0xFF, 0x00, 0xAC, 0xBC, 
0x00, 0xFA, 0x89, 0x11, 0xFF, 0x41, 0x27, 0xFF, 0x15, 0x73, 0xFF, 0x00, 0xBF, 0xDD, 0x00, 0xC4, 
0x9D, 0x00, 0xFF, 0x74, 0x25, 0xFF, 0x29, 0x46, 0xED, 0x13, 0x8D, 0xEF, 0x00, 0xDE, 0xB3, 0x00, 
0xE0, 0x71, 0x1F, 0xFF, 0x4E, 0x52, 0xFF, 0x0A, 0x79, 0xCD, 0x0A, 0xC3, 0xB6, 0x0F, 0xFF, 0x68, 
0x19, 0xF3, 0x30, 0x65, 0xFE, 0x11, 0xB2, 0xD7, 0x00, 0xCB, 0x8B, 0x12, 0xFF, 0x61, 0x47, 0xFF, 
0x16, 0x6B, 0xD8, 0x09, 0xB8, 0xC2, 0x0A, 0xFE, 0x76, 0x11, 0xF3, 0x3E, 0x52, 0xFF, 0x1E, 0x9B, 
0xE3, 0x00, 0xB8, 0xA0, 0x0F, 0xE9, 0x85, 0x2D, 0xFF, 0x3B, 0x4A, 0xE1, 0x1F, 0x90, 0xDE, 0x0A, 
0xDE, 0x9F, 0x00, 0xE4, 0x65, 0x2C, 0xFF, 0x40, 0x6A, 0xFB, 0x07, 0x91, 0xBA, 0x13, 0xC7, 0xA9, 
0x1B, 0xFD, 0x58, 0x34, 0xE1, 0x35, 0x6F, 0xEC, 0x1B, 0xB6, 0xBB, 0x04, 0xC7, 0x7F, 0x29, 0xEB, 
0x67, 0x4C, 0xFD, 0x22, 0x70, 0xCB, 0x1E, 0x9D, 0xCD, 0x18, 0xD9, 0x89, 0x20, 0xCD, 0x5E, 0x4E, 
0xE6, 0x41, 0x88, 0xD4, 0x0D, 0xA7, 0x9E, 0x20, 0xD1, 0x8D, 0x36, 0xF0, 0x42, 0x58, 0xC8, 0x38, 
0x82, 0xD3, 0x26, 0xC0, 0x99, 0x1F, 0xC1, 0x72, 0x3F, 0xD9, 0x66, 0x60, 0xDD, 0x2B, 0x83, 0xA8, 
0x39, 0xA4, 0xA9, 0x39, 0xD4, 0x64, 0x49, 0xBD, 0x51, 0x6B, 0xD0, 0x40, 0x9F, 0xAF, 0x23, 0xAE, 
0x81, 0x3F, 0xC8, 0x7B, 0x50, 0xE3, 0x32, 0x73, 0xB5, 0x3A, 0x8E, 0xC1, 0x31, 0xC1, 0x86, 0x36, 
0xB7, 0x64, 0x5A, 0xCB, 0x58, 0x7C, 0xCA, 0x21, 0x9B, 0x94, 0x3C, 0xB0, 0x9B, 0x3A, 0xE1, 0x4E, 
0x57, 0xBD, 0x4A, 0x6F, 0xCB, 0x48, 0x91, 0xB3, 0x2C, 0xA3, 0x7E, 0x53, 0xA9, 0x8E, 0x53, 0xCB, 
0x4E, 0x6C, 0xA1, 0x57, 0x7B, 0xB7, 0x4D, 0xA5, 0x92, 0x3C, 0xA7, 0x70, 0x5E, 0xAC, 0x7F, 0x61, 
0xC3, 0x45, 0x7C, 0x95, 0x5C, 0x80, 0xA7, 0x66, 0x8E, 0x8A, 0x63, 0x7D, 0x7A, 0x73, 0x9C, 0x71, 
0x87, 0xA8, 0x3B, 0x94, 0x88, 0x4F, 0xA0, 0x97, 0x52, 0xC0, 0x5A, 0x65, 0xA2, 0x5A, 0x7C, 0xA7, 
0x70, 0x7F, 0x94, 0x65, 0x75, 0x7C, 0x79, 0x93, 0x74, 0x85, 0xAE, 0x36, 0x91, 0x91, 0x44, 0xA4, 
0x9B, 0x46, 0xCA, 0x5C, 0x55, 0xB3, 0x55, 0x78, 0x9E, 0x85, 0x66, 0x9B, 0x77, 0x65, 0x81, 0x8F, 
0x5C, 0x9C, 0x90, 0x59, 0xA9, 0x68, 0x5E, 0xA0, 0x5D, 0x8D, 0x95, 0x73, 0x8B, 0x71, 0x6E, 0x7E, 
0x6C, 0x9F, 0x73, 0x73, 0xC6, 0x33, 0x78, 0xAF, 0x3E, 0x8E, 0xAC, 0x61, 0x88, 0x85, 0x6A, 0x77, 
0x78, 0x80, 0x94, 0x67, 0x9C, 0x88, 0x49, 0x97, 0x78, 0x5F, 0xA9, 0x72, 0x78, 0xB2, 0x3A, 0x8A, 
0x94, 0x48, 0xA3, 0x94, 0x65, 0x96, 0x75, 0x69, 0x81, 0x6B, 0x97, 0x85, 0x5E, 0xBF, 0x67, 0x41, 
0xC3, 0x52, 0x6C, 0xBA, 0x65, 0x87, 0x88, 0x61, 0x83, 0x6E, 0x81, 0xA3, 0x52, 0xA2, 0xA1, 0x27, 
0xA7, 0x8A, 0x42, 0xB6, 0x81, 0x6C, 0x97, 0x68, 0x76, 0x7C, 0x6C, 0xA3, 0x75, 0x66, 0xC9, 0x45, 
0x5E, 0xBE, 0x48, 0x79, 0xB5, 0x64, 0x83, 0x8A, 0x66, 0x7F, 0x67, 0x92, 0x9C, 0x42, 0xB7, 0xA0, 
0x14, 0xB8, 0x87, 0x30, 0xD5, 0x62, 0x65, 0xD7, 0x27, 0x83, 0xB0, 0x30, 0xA5, 0xA4, 0x4F, 0xA1, 
0x7E, 0x5D, 0x88, 0x70, 0x83, 0x9C, 0x54, 0xA8, 0x99, 0x22, 0xB0, 0x94, 0x49, 0xA9, 0x91, 0x70, 
0x73, 0x97, 0x3A, 0x7F, 0xEC, 0x00, 0x9E, 0xED, 0x22, 0x63, 0xD9, 0x38, 0x3E, 0xFF, 0x33, 0x4E, 
0xFF, 0x27, 0x4B, 0xD4, 0x42, 0x74, 0xCD, 0x34, 0xB4, 0x99, 0x18, 0xD1, 0x64, 0x5E, 0xA8, 0x86, 
0x6B, 0x8E, 0x83, 0x6C, 0x75, 0x7B, 0x92, 0x85, 0x4F, 0xC1, 0x95, 0x0E, 0xD2, 0x74, 0x34, 0xDC, 
0x62, 0x5B, 0xE6, 0x2A, 0x78, 0xB8, 0x3C, 0x96, 0xA0, 0x6A, 0x8D, 0x7F, 0x74, 0x7C, 0x5F, 0xA8, 
0x89, 0x46, 0xB9, 0xA9, 0x1B, 0xA3, 0xAE, 0x29, 0xA6, 0xA4, 0x60, 0x94, 0x75, 0x7C, 0x6F, 0x73, 
0xAA, 0x6F, 0x68, 0xCC, 0x5A, 0x49, 0xC4, 0x5E, 0x6B, 0xAC, 0x72, 0x92, 0x73, 0x71, 0x94, 0x57, 
0x95, 0xA0, 0x50, 0xA5, 0xA3, 0x30, 0xA0, 0x90, 0x51, 0xAA, 0x7A, 0x82, 0xA1, 0x4C, 0x92, 0x84, 
0x5A, 0xB7, 0x6B, 0x75, 0xC2, 0x43, 0x73, 0xB1, 0x4F, 0x90, 0x94, 0x77, 0x98, 0x6A, 0x78, 0x96, 
0x5C, 0x9E, 0x78, 0x8A, 0x90, 0x6A, 0x78, 0x75, 0xBD, 0x4C, 0x8B, 0xB9, 0x54, 0x8A, 0x8D, 0x2F, 
0xD7, 0x94, 0x00, 0xFF, 0xA8, 0x00, 0xB6, 0xBD, 0x00, 0xD4, 0xAE, 0x0D, 0xFB, 0x62, 0x34, 0xC6, 
0x6A, 0x6B, 0xA1, 0x7E, 0x8C, 0x70, 0x77, 0x98, 0x6C, 0x8E, 0x8B, 0x87, 0x6A, 0x8D, 0x6E, 0x89, 
0x8F, 0x73, 0xA1, 0x6D, 0x95, 0x7B, 0x70, 0x95, 0x7A, 0x69, 0xA0, 0xA9, 0x3B, 0xA7, 0x6C, 0x0A, 
0xFF, 0x2C, 0x06, 0xFF, 0x04, 0x31, 0xFF, 0x0D, 0x50, 0xF8, 0x48, 0x70, 0x8F, 0x80, 0x9A, 0x42, 
0x93, 0xD1, 0x20, 0xA0, 0xD1, 0x35, 0x81, 0xA5, 0x72, 0x5D, 0xB8, 0x6A, 0x62, 0xC9, 0x66, 0x5F, 
0x96, 0x5F, 0xC6, 0x4E, 0x6B, 0xFF, 0x00, 0x73, 0xA5, 0xA1, 0x4F, 0x44, 0xFF, 0x3A, 0x48, 0xB6, 
0x95, 0x2A, 0xC2, 0x9C, 0x4B, 0x99, 0x7D, 0x65, 0x94, 0x92, 0x68, 0xAD, 0x7B, 0x6B, 0x99, 0x7B, 
0x6E, 0x97, 0x88, 0x76, 0x71, 0x84, 0x74, 0x8D, 0x7B, 0x8B, 0x8F, 0x80, 0x7E, 0x7D, 0x64, 0x58, 
0xE4, 0x4D, 0x24, 0xFF, 0x46, 0x00, 0xFF, 0x4C, 0x84, 0x94, 0x50, 0xE6, 0x5D, 0x24, 0xE1, 0x71, 
0x32, 0xD0, 0x7E, 0x63, 0x90, 0x7D, 0x7E, 0x79, 0x91, 0x8F, 0x78, 0x85, 0x83, 0x7A, 0x6F, 0x72, 
0x7E, 0xC2, 0x20, 0xC7, 0xA4, 0x01, 0xBD, 0x72, 0x99, 0x5F, 0x7B, 0xC6, 0x70, 0x1C, 0xCC, 0x86, 
0x39, 0xC4, 0x7C, 0x88, 0x61, 0x82, 0x8F, 0x61, 0x83, 0x9C, 0x75, 0x8A, 0x7A, 0x71, 0x80, 0x5D, 
0xAD, 0x80, 0x4D, 0xC1, 0x96, 0x21, 0xA0, 0x91, 0x5A, 0xA1, 0x64, 0xBB, 0x6A, 0x3C, 0xC1, 0x55, 
0x7E, 0xA9, 0x4B, 0xB8, 0x8D, 0x1C, 0xBF, 0x7D, 0x4A, 0xBB, 0x69, 0x91, 0x83, 0x4E, 0xA4, 0x4F, 
0x91, 0xAC, 0x31, 0xB7, 0xAD, 0x16, 0x9A, 0xA9, 0x37, 0xAE, 0x7F, 0x7D, 0x9C, 0x42, 0x9D, 0x66, 
0x6F, 0xBD, 0x42, 0x92, 0xCB, 0x1E, 0x79, 0xBD, 0x30, 0xAD, 0x84, 0x59, 0xD8, 0x2C, 0x73, 0xBB, 
0x24, 0xBA, 0x91, 0x33, 0xE6, 0x5D, 0x2D, 0xD8, 0x4D, 0x64, 0xCA, 0x46, 0xA5, 0x8C, 0x36, 0xAD, 
0x65, 0x6E, 0xB4, 0x4D, 0x9D, 0xAC, 0x1A, 0xAA, 0x87, 0x42, 0xCB, 0x55, 0x79, 0xD0, 0x1F, 0x83, 
0xB1, 0x2B, 0xC0, 0x7C, 0x4D, 0xE2, 0x37, 0x58, 0xCF, 0x2C, 0x97, 0xAF, 0x42, 0xBB, 0x64, 0x52, 
0xA9, 0x5A, 0x81, 0xA6, 0x4F, 0xA9, 0x8C, 0x2D, 0xB2, 0x6F, 0x62, 0xAE, 0x66, 0x90, 0x8D, 0x49, 
0x96, 0x61, 0x87, 0xA8, 0x37, 0xB2, 0xAB, 0x1B, 0x94, 0xAF, 0x29, 0xAB, 0x99, 0x57, 0xA4, 0x63, 
0x75, 0x78, 0x68, 0xAB, 0x6D, 0x5A, 0xD3, 0x58, 0x39, 0xC8, 0x62, 0x5B, 0xAE, 0x75, 0x82, 0x79, 
0x6E, 0x84, 0x69, 0x84, 0x8D, 0x75, 0x8B, 0x7B, 0x69, 0x7A, 0x87, 0x7C, 0x82, 0x88, 0x88, 0x78, 
0x6D, 0x81, 0x2E, 0xF5, 0x5A, 0x0A, 0xFF, 0x4F, 0x44, 0xAB, 0x92, 0x2D, 0x90, 0xD2, 0x1D, 0xA4, 
0xA6, 0x45, 0x7A, 0x86, 0x82, 0x65, 0x9C, 0x87, 0x70, 0x72, 0x94, 0x5B, 0x86, 0x93, 0x59, 0xA4, 
0x7B, 0x6F, 0x84, 0x74, 0x5B, 0xAA, 0x83, 0x42, 0xAE, 0xAC, 0x2D, 0x7F, 0xB5, 0x44, 0x82, 0xA1, 
0x74, 0x7D, 0x75, 0x8B, 0x6A, 0x67, 0x9A, 0x91, 0x47, 0xAF, 0x98, 0x28, 0xA2, 0x8C, 0x68, 0x7E, 
0x8F, 0x96, 0x57, 0x79, 0x9A, 0x2D, 0xD6, 0x71, 0x29, 0xE5, 0x70, 0x48, 0x9D, 0x8D, 0x53, 0x84, 
0x94, 0x79, 0x71, 0x91, 0x80, 0x5F, 0x7B, 0xA0, 0x6E, 0x74, 0xA8, 0x6C, 0x5F, 0x89, 0x58, 0xC1, 
0x58, 0x47, 0xE5, 0x51, 0x62, 0x9C, 0x85, 0x60, 0x89, 0x95, 0x6F, 0x7A, 0x91, 0x76, 0x5B, 0x8E, 
0x7E, 0x7D, 0x86, 0x7F, 0x88, 0x60, 0x83, 0x88, 0x69, 0x8A, 0x8E, 0x61, 0xA8, 0x7D, 0x3E, 0xAA, 
0x6A, 0x98, 0x5B, 0x8C, 0xC5, 0x1A, 0x96, 0xA3, 0x3A, 0xB4, 0x7C, 0x5B, 0xCD, 0x35, 0x7E, 0xB4, 
0x49, 0x98, 0x94, 0x67, 0x8A, 0x6E, 0x7A, 0x87, 0x7C, 0x7A, 0x89, 0x8E, 0x5E, 0x79, 0xA4, 0x43, 
0x78, 0xE9, 0x0E, 0x83, 0xEC, 0x3D, 0x41, 0xCA, 0x56, 0x7E, 0x9D, 0x54, 0xCE, 0x34, 0x79, 0xA0, 
0x59, 0x9A, 0x7E, 0x6E, 0xBB, 0x43, 0x6C, 0xC4, 0x47, 0x92, 0x99, 0x6C, 0x88, 0x6B, 0x80, 0x73, 
0x71, 0xBA, 0x43, 0x7F, 0xCC, 0x44, 0x5E, 0xBC, 0x5E, 0x5F, 0xC2, 0x52, 0x8A, 0xAF, 0x33, 0x94, 
0x8C, 0x5E, 0xA8, 0x61, 0x9D, 0x95, 0x36, 0xA3, 0x7F, 0x62, 0xAC, 0x61, 0x8F, 0xA5, 0x37, 0x96, 
0x8E, 0x55, 0xAA, 0x73, 0x6D, 0xC0, 0x44, 0x6E, 0xAD, 0x47, 0xA8, 0x80, 0x61, 0xC3, 0x55, 0x59, 
0xB3, 0x59, 0x83, 0x9F, 0x5E, 0xAB, 0x6A, 0x54, 0xA6, 0x61, 0x8F, 0x8F, 0x51, 0xC9, 0x6C, 0x36, 
0xBB, 0x74, 0x64, 0x9A, 0x80, 0x8E, 0x70, 0x66, 0x92, 0x69, 0x82, 0x9F, 0x54, 0x9D, 0xA7, 0x31, 
0x8C, 0x9E, 0x5D, 0x8A, 0x8B, 0x81, 0x91, 0x55, 0x89, 0x7B, 0x69, 0xB7, 0x53, 0x75, 0xCE, 0x4F, 
0x4C, 0xB4, 0x7B, 0x65, 0x87, 0x99, 0x83, 0x67, 0x77, 0x93, 0x58, 0x92, 0xA1, 0x47, 0x9A, 0xB4, 
0x42, 0x67, 0xAD, 0x79, 0x6B, 0x77, 0xB6, 0x72, 0x5E, 0x8E, 0x81, 0x5F, 0x9C, 0x92, 0x4B, 0xAA, 
0xA9, 0x38, 0x77, 0xB3, 0x6B, 0x6D, 0x80, 0xAE, 0x78, 0x5F, 0x91, 0x7F, 0x4E, 0xC1, 0x81, 0x2E, 
0xD5, 0x95, 0x48, 0x70, 0xA1, 0x88, 0x5B, 0x89, 0xAB, 0x71, 0x74, 0x80, 0x7B, 0x6D, 0x9A, 0x8D, 
0x52, 0xA0, 0xAF, 0x59, 0x52, 0xB2, 0x8A, 0x61, 0x74, 0xB6, 0x80, 0x62, 0x87, 0x7C, 0x73, 0x85, 
0xA4, 0x51, 0x89, 0xC7, 0x58, 0x47, 0xBA, 0x85, 0x66, 0x7A, 0x9B, 0x9F, 0x6B, 0x72, 0x8D, 0x61, 
0x87, 0xC8, 0x25, 0x8C, 0xDF, 0x5B, 0x5A, 0x7F, 0xA9, 0x6F, 0x72, 0xA7, 0x76, 0x9C, 0x6D, 0x6A, 
0x8D, 0x7F, 0x94, 0x79, 0x70, 0xB5, 0x98, 0x2C, 0x98, 0xAC, 0x62, 0x84, 0x96, 0x85, 0xA6, 0x50, 
0x76, 0x9A, 0x75, 0xAD, 0x58, 0x7B, 0xD4, 0x74, 0x32, 0xA8, 0xA8, 0x61, 0x81, 0x9D, 0x8B, 0x91, 
0x63, 0x7B, 0x8C, 0x7F, 0xAC, 0x5E, 0x73, 0xD5, 0x7E, 0x2F, 0xA4, 0xAB, 0x69, 0x74, 0xA3, 0x94, 
0x83, 0x73, 0x73, 0x88, 0x8A, 0xA8, 0x5D, 0x76, 0xD2, 0x89, 0x30, 0x93, 0xBB, 0x6D, 0x6A, 0xA0, 
0xA1, 0x7E, 0x79, 0x72, 0x87, 0x89, 0x9D, 0x7D, 0x61, 0xB9, 0xB9, 0x2C, 0x75, 0xCB, 0x75, 0x6E, 
0x87, 0xB0, 0x8B, 0x6D, 0x7E, 0x7F, 0x80, 0xA5, 0x8E, 0x4F, 0xA5, 0xCF, 0x53, 0x49, 0xBC, 0x97, 
0x73, 0x72, 0xA3, 0xAB, 0x66, 0x84, 0x7B, 0x7B, 0x97, 0xA2, 0x6D, 0x65, 0xCE, 0xA2, 0x2B, 0x88, 
0xC2, 0x71, 0x81, 0x76, 0xB0, 0x9F, 0x53, 0x94, 0x7E, 0x6A, 0xB3, 0xA0, 0x3B, 0x9A, 0xDA, 0x67, 
0x48, 0x9A, 0xA8, 0x85, 0x77, 0x7C, 0xBB, 0x7F, 0x5A, 0x9B, 0x81, 0x84, 0x8D, 0x88, 0x9C, 0x7E, 
0x7C, 0x83, 0x81, 0x8A, 0x8C, 0x83, 0x92, 0x80, 0xA3, 0xA4, 0x2C, 0x80, 0xBD, 0x7C, 0x92, 0x63, 
0x90, 0xDA, 0x3D, 0x54, 0xBC, 0x85, 0x92, 0x7F, 0x6C, 0xBE, 0x83, 0x48, 0x9B, 0x9F, 0x8A, 0x79, 
0x83, 0x98, 0x6E, 0x7B, 0x91, 0x7C, 0x92, 0x91, 0x6F, 0x88, 0x8D, 0x8A, 0x80, 0x39, 0xCC, 0xCE, 
0x00, 0xA7, 0xFF, 0x36, 0x45, 0xA1, 0x78, 0x95, 0xB5, 0x46, 0x73, 0xE6, 0x55, 0x31, 0xBB, 0x9D, 
0x6A, 0x7D, 0x9D, 0x8B, 0x55, 0x94, 0x94, 0x6C, 0x9F, 0x7D, 0x70, 0xA0, 0x6B, 0x6B, 0x8E, 0x6E, 
0xA2, 0x8E, 0x41, 0xAE, 0xC1, 0x2B, 0x5B, 0xC6, 0x81, 0x69, 0x95, 0x79, 0x73, 0x9A, 0x7C, 0x2D, 
0xB3, 0xDD, 0x0B, 0x6B, 0xFE, 0x64, 0x35, 0x8B, 0x8D, 0x7A, 0x79, 0xA0, 0x73, 0x6B, 0xA8, 0x5F, 
0x4F, 0xA8, 0x9C, 0x5C, 0x6E, 0xB2, 0x85, 0x3C, 0x8C, 0x93, 0x71, 0x80, 0x71, 0x8B, 0x98, 0x77, 
0x64, 0x6C, 0x8C, 0x96, 0x6C, 0x57, 0x9D, 0xAC, 0x60, 0x5C, 0x81, 0x79, 0x76, 0x9D, 0x81, 0x45, 
0x8E, 0xD0, 0x53, 0x26, 0xAD, 0xA8, 0x57, 0x67, 0x92, 0x97, 0x71, 0x67, 0x7C, 0x71, 0x7A, 0x89, 
0x85, 0x70, 0x6E, 0xA9, 0x76, 0x34, 0x8C, 0xA8, 0x5F, 0x77, 0x93, 0x7C, 0x76, 0x69, 0x6E, 0x7E, 
0x8C, 0x7C, 0x6B, 0x7F, 0x9C, 0x78, 0x48, 0x74, 0xA4, 0x7C, 0x53, 0x88, 0xA6, 0x70, 0x55, 0x79, 
0x7F, 0x75, 0x8B, 0x83, 0x5F, 0x7E, 0xAF, 0x68, 0x35, 0x8C, 0xB4, 0x60, 0x50, 0xA3, 0xA0, 0x59, 
0x5E, 0x86, 0x76, 0x78, 0x93, 0x76, 0x5B, 0x95, 0xA8, 0x49, 0x45, 0xA8, 0x9E, 0x4F, 0x71, 0xA5, 
0x83, 0x5C, 0x6B, 0x7D, 0x7A, 0x84, 0x83, 0x6E, 0x79, 0x9F, 0x71, 0x44, 0x7C, 0xA6, 0x77, 0x5F, 
0x8A, 0x99, 0x73, 0x58, 0x72, 0x87, 0x87, 0x79, 0x72, 0x80, 0x96, 0x76, 0x51, 0x71, 0x96, 0x87, 
0x6C, 0x74, 0x8C, 0x94, 0x67, 0x53, 0x7F, 0x9A, 0x7A, 0x66, 0x82, 0x97, 0x82, 0x5B, 0x63, 0x88, 
0x94, 0x75, 0x67, 0x8D, 0x9A, 0x6B, 0x57, 0x76, 0x8A, 0x89, 0x7D, 0x70, 0x7D, 0x97, 0x76, 0x52, 
0x73, 0x9E, 0x86, 0x5E, 0x7E, 0xA7, 0x79, 0x4C, 0x71, 0x92, 0x86, 0x76, 0x76, 0x82, 0x90, 0x79, 
0x5C, 0x6D, 0x8D, 0x8F, 0x72, 0x70, 0x8B, 0x93, 0x6E, 0x58, 0x77, 0x9C, 0x8E, 0x5C, 0x6E, 0xAA, 
0x8B, 0x4F, 0x66, 0x8F, 0x86, 0x7A, 0x82, 0x82, 0x7E, 0x76, 0x73, 0x74, 0x7B, 0x87, 0x80, 0x79, 
0x8A, 0x8B, 0x69, 0x5F, 0x7C, 0x98, 0x8A, 0x66, 0x77, 0xA0, 0x85, 0x57, 0x67, 0x8D, 0x94, 0x7C, 
0x6E, 0x89, 0x94, 0x6E, 0x62, 0x7F, 0x8E, 0x82, 0x73, 0x7D, 0x96, 0x86, 0x62, 0x6B, 0x86, 0x8E, 
0x82, 0x72, 0x7F, 0x97, 0x81, 0x63, 0x6F, 0x86, 0x8C, 0x85, 0x7A, 0x81, 0x8C, 0x7A, 0x6A, 0x76, 
0x8A, 0x8D, 0x7B, 0x76, 0x91, 0x8F, 0x69, 0x66, 0x84, 0x94, 0x89, 0x6F, 0x7A, 0x9A, 0x87, 0x64, 
0x6F, 0x89, 0x8C, 0x83, 0x81, 0x89, 0x85, 0x73, 0x73, 0x00
};