# CST116SRS01
sizeof


Class ID:  Ekans 

SRS ID:  CST116SRS01 

Unresolved Issues:  *?* 

Notes:  Compile with Visual Studio 2017 on Windows 10. 

---

Purpose:  

* Learn to create a Visual Studio solution with multiple projects and multiple configurations. 
* Learn how to find the sizes of various literals and data types. 
* Learn how to use an assert statement. 
* Learn to write code that uses C++ streams to format output. 

Instructions:  

Part 0:  

Create a project named "Part0" that calculates the size of the following data types and stores each of them in a variable:  

* bool -- PASS
* signed char
* unsigned char
* char -- PASS
* unsigned short
* short -- PASS
* signed
* unsigned
* int
* std::size_t
* signed long
* unsigned long
* long -- PASS
* float -- PASS
* double -- PASS
* long double -- PASS

Create an assert statement for each type’s size entry found in table 4.3.1 page 81 (excluding int). 
Use either == or != comparison to pass every assertion for the x86 debug configuration build.  

Batch build all x86, 64 bit and debug, release versions of your code.  

In the README.md file, note for each assertion if it passes or fails the assertion test regardless of the build configuration.  

Part 1:  

Create a project named "Part1" Calculate the size of the following literals and print the value and size to std::cout:  

* false
* true
* 0
* 1
* 0xffff
* 0UL
* '\0'
* ‘\377’
* 0.0
* 0.f
* "Annie" " " "\\"Lennox\\"\n"

Terminate each output with a non-flushing newline.  

Terminate the last output with std::endl to flush any remaining data.  

An example output line should appear as follows:  

sizeof(0) == 4
