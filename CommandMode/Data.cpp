#include "Data.h"
#include <avr/pgmspace.h>

unsigned char prefab[5][96] PROGMEM = {
	{
		0x00, 0x00, 0x00, 0x4B, 0x00, 0x00, 0x04, 0xBF,
		0x00, 0x00, 0x4B, 0xFF, 0x00, 0x04, 0xBF, 0xFF,
		0x00, 0x4B, 0xFF, 0xFF, 0x04, 0xBF, 0xFF, 0xFF,
		0x4B, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFD,
		0xFF, 0xFD, 0x71, 0x00, 0xFF, 0xD7, 0x10, 0x00,
		0xFD, 0xF1, 0x00, 0x00, 0xDA, 0x10, 0x00, 0x00,
		0x71, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x17,
		0x00, 0x00, 0x01, 0x7E, 0x00, 0x00, 0x17, 0xEF,
		0x06, 0xEF, 0xFF, 0xFF, 0x6E, 0xFF, 0xFF, 0xFF,
		0xEF, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xA3,
		0xFF, 0xFF, 0xFA, 0x30, 0xFF, 0xFA, 0xA3, 0x00,
		0xFF, 0xFA, 0x30, 0x00, 0xFF, 0xA3, 0x00, 0x00
	},
	{
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0F, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
		0x0F, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
		0x0F, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
		0x0F, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	},
	{
		0xFF, 0xFD, 0x71, 0x00, 0xFF, 0xFD, 0x71, 0x00,
		0xFF, 0xFD, 0x71, 0x00, 0xFF, 0xFD, 0x71, 0x00,
		0xFF, 0xFD, 0x71, 0x00, 0xFF, 0xFD, 0x71, 0x00,
		0xFF, 0xFD, 0x71, 0x00, 0xFF, 0xFD, 0x71, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	},
	{
		0xFF, 0xFF, 0xFF, 0x4B, 0xFF, 0xFF, 0xF4, 0xBF,
		0x00, 0x00, 0x4B, 0xFF, 0x00, 0x04, 0xBF, 0xFF,
		0x00, 0x4B, 0xFF, 0xFF, 0x04, 0xBF, 0xFF, 0xFF,
		0x4B, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFD,
		0xFF, 0xFD, 0x71, 0x00, 0xFF, 0xD7, 0x10, 0x00,
		0xFD, 0xF1, 0x00, 0x00, 0xDA, 0x10, 0x00, 0x00,
		0x71, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x17,
		0x00, 0x00, 0x01, 0x7E, 0x00, 0x00, 0x17, 0xEF,
		0x06, 0xEF, 0xFF, 0xFF, 0x6E, 0xFF, 0xFF, 0xFF,
		0xEF, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xA3,
		0xFF, 0xFF, 0xFA, 0x30, 0xFF, 0xFA, 0xA3, 0x00,
		0xFF, 0xFA, 0x30, 0x00, 0xFF, 0xA3, 0x00, 0x00
	},
	{
		0xFF, 0xFF, 0xFF, 0x4B, 0xFF, 0xFF, 0xF4, 0xBF,
		0x00, 0x00, 0x4B, 0xFF, 0x00, 0x04, 0xBF, 0xFF,
		0x00, 0x4B, 0xFF, 0xFF, 0x04, 0xBF, 0xFF, 0xFF,
		0x4B, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFD,
		0xFF, 0xFD, 0x71, 0x00, 0xFF, 0xD7, 0x10, 0x00,
		0xFD, 0xF1, 0x00, 0x00, 0xDA, 0x10, 0x00, 0x00,
		0x71, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x17,
		0x00, 0x00, 0x01, 0x7E, 0x00, 0x00, 0x17, 0xEF,
		0x06, 0xEF, 0xFF, 0xFF, 0x6E, 0xFF, 0xFF, 0xFF,
		0xEF, 0xFF, 0xFF, 0xFA, 0xFF, 0xFF, 0xFF, 0xA3,
		0xFF, 0xFF, 0xFA, 0x30, 0xFF, 0xFA, 0xA3, 0x00,
		0xFF, 0xFA, 0x30, 0x00, 0xFF, 0xA3, 0x00, 0x00
	}
};

unsigned char font[62][8] PROGMEM = {
	{ 0x00, 0x44, 0x44, 0x7C, 0x44, 0x44, 0x28, 0x10 }, //A
	{ 0x00, 0x3C, 0x44, 0x44, 0x3C, 0x44, 0x44, 0x3C }, //B
	{ 0x00, 0x38, 0x44, 0x04, 0x04, 0x04, 0x44, 0x38 }, //C
	{ 0x00, 0x1C, 0x24, 0x44, 0x44, 0x44, 0x24, 0x1C }, //D
	{ 0x00, 0x7C, 0x04, 0x04, 0x3C, 0x04, 0x04, 0x7C }, //E
	{ 0x00, 0x04, 0x04, 0x04, 0x3C, 0x04, 0x04, 0x7C }, //F
	{ 0x00, 0x78, 0x44, 0x44, 0x74, 0x04, 0x44, 0x38 }, //G
	{ 0x00, 0x44, 0x44, 0x44, 0x7C, 0x44, 0x44, 0x44 }, //H
	{ 0x00, 0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38 }, //I
	{ 0x00, 0x18, 0x24, 0x20, 0x20, 0x20, 0x20, 0x70 }, //J
	{ 0x00, 0x44, 0x24, 0x14, 0x0C, 0x14, 0x24, 0x44 }, //K
	{ 0x00, 0x7C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04 }, //L
	{ 0x00, 0x44, 0x44, 0x44, 0x54, 0x54, 0x6C, 0x44 }, //M
	{ 0x00, 0x44, 0x44, 0x64, 0x54, 0x4C, 0x44, 0x44 }, //N
	{ 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x38 }, //O
	{ 0x00, 0x04, 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3C }, //P
	{ 0x00, 0x58, 0x24, 0x54, 0x44, 0x44, 0x44, 0x38 }, //Q
	{ 0x00, 0x44, 0x24, 0x14, 0x3C, 0x44, 0x44, 0x3C }, //R
	{ 0x00, 0x3C, 0x40, 0x40, 0x38, 0x04, 0x04, 0x78 }, //S
	{ 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7C }, //T
	{ 0x00, 0x38, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44 }, //U
	{ 0x00, 0x10, 0x28, 0x44, 0x44, 0x44, 0x44, 0x44 }, //V
	{ 0x00, 0x28, 0x54, 0x54, 0x54, 0x44, 0x44, 0x44 }, //W
	{ 0x00, 0x44, 0x44, 0x28, 0x10, 0x28, 0x44, 0x44 }, //X
	{ 0x00, 0x10, 0x10, 0x10, 0x28, 0x44, 0x44, 0x44 }, //Y
	{ 0x00, 0x7C, 0x04, 0x08, 0x10, 0x20, 0x40, 0x7C }, //Z
	{ 0x00, 0x78, 0x44, 0x78, 0x40, 0x38, 0x00, 0x00 }, //a
	{ 0x00, 0x3C, 0x44, 0x44, 0x4C, 0x34, 0x04, 0x04 }, //b
	{ 0x00, 0x38, 0x44, 0x04, 0x04, 0x38, 0x00, 0x00 }, //c
	{ 0x00, 0x78, 0x44, 0x44, 0x64, 0x58, 0x40, 0x40 }, //d
	{ 0x00, 0x38, 0x04, 0x7C, 0x44, 0x38, 0x00, 0x00 }, //e
	{ 0x00, 0x08, 0x08, 0x08, 0x1C, 0x08, 0x48, 0x30 }, //f
	{ 0x38, 0x40, 0x78, 0x44, 0x44, 0x78, 0x00, 0x00 }, //g
	{ 0x00, 0x44, 0x44, 0x44, 0x4C, 0x34, 0x04, 0x04 }, //h
	{ 0x00, 0x38, 0x10, 0x10, 0x10, 0x18, 0x00, 0x10 }, //i
	{ 0x18, 0x24, 0x20, 0x20, 0x20, 0x30, 0x00, 0x20 }, //j
	{ 0x00, 0x24, 0x14, 0x0C, 0x14, 0x24, 0x04, 0x04 }, //k
	{ 0x00, 0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18 }, //l
	{ 0x00, 0x44, 0x44, 0x54, 0x54, 0x2C, 0x00, 0x00 }, //m
	{ 0x00, 0x44, 0x44, 0x44, 0x4C, 0x34, 0x00, 0x00 }, //n
	{ 0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00 }, //o
	{ 0x04, 0x04, 0x3C, 0x44, 0x44, 0x3C, 0x00, 0x00 }, //p
	{ 0x40, 0x40, 0x58, 0x64, 0x64, 0x58, 0x00, 0x00 }, //q
	{ 0x00, 0x04, 0x04, 0x04, 0x4C, 0x34, 0x00, 0x00 }, //r
	{ 0x00, 0x3C, 0x40, 0x38, 0x04, 0x38, 0x00, 0x00 }, //s
	{ 0x00, 0x30, 0x48, 0x08, 0x08, 0x1C, 0x08, 0x08 }, //t
	{ 0x00, 0x58, 0x64, 0x44, 0x44, 0x44, 0x00, 0x00 }, //u
	{ 0x00, 0x10, 0x28, 0x44, 0x44, 0x44, 0x00, 0x00 }, //v
	{ 0x00, 0x28, 0x54, 0x54, 0x44, 0x44, 0x00, 0x00 }, //w
	{ 0x00, 0x44, 0x28, 0x10, 0x28, 0x44, 0x00, 0x00 }, //x
	{ 0x38, 0x40, 0x78, 0x44, 0x44, 0x44, 0x00, 0x00 }, //y
	{ 0x00, 0x7C, 0x08, 0x10, 0x20, 0x7C, 0x00, 0x00 }, //z
	{ 0x00, 0x38, 0x44, 0x4C, 0x54, 0x64, 0x44, 0x38 }, //0
	{ 0x00, 0x38, 0x10, 0x10, 0x10, 0x10, 0x18, 0x10 }, //1
	{ 0x00, 0x7C, 0x08, 0x10, 0x20, 0x40, 0x44, 0x38 }, //2
	{ 0x00, 0x38, 0x44, 0x40, 0x20, 0x10, 0x20, 0x7C }, //3
	{ 0x00, 0x20, 0x20, 0x7C, 0x24, 0x28, 0x30, 0x20 }, //4
	{ 0x00, 0x38, 0x44, 0x40, 0x40, 0x3C, 0x04, 0x7C }, //5
	{ 0x00, 0x38, 0x44, 0x44, 0x3C, 0x04, 0x08, 0x30 }, //6
	{ 0x00, 0x08, 0x08, 0x08, 0x10, 0x20, 0x40, 0x7C }, //7
	{ 0x00, 0x38, 0x44, 0x44, 0x38, 0x44, 0x44, 0x38 }, //8
	{ 0x00, 0x18, 0x20, 0x40, 0x78, 0x44, 0x44, 0x38 }  //9
};

unsigned char get_prefab(unsigned char pi, unsigned char color, unsigned char row, unsigned char column) {
	return pgm_read_byte(&(prefab[pi % 5][(color << 5) | (row << 2) | column]));
}

unsigned char get_font(unsigned char index, unsigned char row) {
	return pgm_read_byte(&(font[index][row]));
}

unsigned char asc_to_idx(unsigned char ascii) {
	if (ascii >= 'A' && ascii <= 'Z') return (ascii - 'A');
	else if (ascii >= 'a' && ascii <= 'z') return (ascii - 'a' + 26);
	else if (ascii >= '0' && ascii <= '9') return (ascii - '0' + 52);
	else return -1;
}