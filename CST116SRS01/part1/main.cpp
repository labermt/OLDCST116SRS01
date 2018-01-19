// part1.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>


int main()
{
	//sizeof(false) == 1 is the desired output


	// this is code we did in class that should be good to copy for the rest of the assignment
	std::cout << "sizeof(false) == " << sizeof(false) << '\n';
	std::cout << "sizeof(true) == " << sizeof(true) << '\n';
	std::cout << "sizeof(0) == " << sizeof(0) << '\n';
	std::cout << "sizeof(1) == " << sizeof(1) << '\n';
	std::cout << "sizeof(0xffff) " << sizeof(0xffff) << '\n';
	std::cout << "sizeof(0UL) " << sizeof(0UL) << '\n';
	std::cout << "sizeof('\0') " << sizeof('\0') << '\n';
	std::cout << "sizeof('\1377') " << sizeof('\1377') << '\n';
	std::cout << "sizeof(0.0) " << sizeof(0.0) << '\n';


	std::cout << "sizeof(\"Annie\" \" \"\"\\\"Lennox\\\"\\n\") == " << sizeof("Annie" " " "\"Lennox\"\n") << std::endl;


	return 0;
}

