// main.cpp : Part0 main
//

#include "stdafx.h"
#include <iostream>
#include <cassert>

int main()
{
	std::size_t boolSize			{ sizeof(bool) };
	std::size_t signedCharSize		{ sizeof(signed char) };
	std::size_t unsignedCharSize	{ sizeof(unsigned char) };
	std::size_t charSize			{ sizeof(char) };
	std::size_t shortSize			{ sizeof(short) };
	std::size_t signedSize			{ sizeof(signed) };
	std::size_t unsignedSize		{ sizeof(unsigned) };
	std::size_t intSize				{ sizeof(int) };
	std::size_t unsignedShortSize2	{ sizeof(unsigned short) };
	std::size_t size_tSize			{ sizeof(std::size_t) };
	std::size_t signedLongSize		{ sizeof(signed long) };
	std::size_t unsignedLongSize	{ sizeof(unsigned long) };
	std::size_t longSize			{ sizeof(long) };
	std::size_t floatSize			{ sizeof(float) };
	std::size_t doubleSize			{ sizeof(double) };
	std::size_t longDoubleSize		{ sizeof(long double) };

	assert(sizeof(char) == 1);
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(sizeof(bool) == 1);
	assert(sizeof(short) != 1);
	assert(sizeof(long) != 3);
	assert(sizeof(long double) != 4);
	
	return 0;
}

