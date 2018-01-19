// Part0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cassert>
#include <iostream>

int main()
{
	std::size_t B1 = sizeof(bool);

	std::size_t SC = sizeof(signed char);

	std::size_t UC = sizeof(unsigned char);

	std::size_t C = sizeof(char);

	std::size_t US = sizeof(unsigned short);
	
	std::size_t S = sizeof(short);
	
	std::size_t S2 = sizeof(signed);
	
	std::size_t U = sizeof(unsigned);
	
	std::size_t I = sizeof(int);

	std::size_t St = sizeof(std::size_t);

	std::size_t SL = sizeof(signed long);
	
	std::size_t UL = sizeof(unsigned long);
	
	std::size_t L = sizeof(long);

	std::size_t F = sizeof(float);
	
	std::size_t D = sizeof(double);
	
	std::size_t LD = sizeof(long double);

	assert(sizeof(bool) == 1);
	assert(sizeof(char) == 1);
	assert(sizeof(short) == 2);
	assert(sizeof(long) == 4);
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(sizeof(long double) == 8);
	return 0;
}