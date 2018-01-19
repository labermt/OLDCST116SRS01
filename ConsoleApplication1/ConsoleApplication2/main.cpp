// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	

	std::cout << "sizeof(false) == " << sizeof(false);
	std::cout << "sizeof(true) == " << sizeof(true);
	std::cout << "sizeof(0) == " << sizeof(0); 
	std::cout << "sizeof(1) == " << sizeof(1);
	std::cout << "sizeof(0xffff) == " << sizeof(0xffff); 
	std::cout << "sizeof(0UL) == " << sizeof(0UL);
	std::cout << "sizeof(\'\\0\') == " << sizeof('\0');
	std::cout << "sizeof(\'\\377\') == " << sizeof('\377');
	std::cout << "sizeof(0.0) == " << sizeof(0.0);
	std::cout << "sizeof(0f) == " << sizeof(0.f);
	std::cout << "sizeof(\"Annie\" \" " "\"Lennox\"\\n\") == " <<sizeof("Annie" " " "\"Lennox\"\n") << std::endl;

    return 0;
}

