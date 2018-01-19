# CST116SRS01
sizeof


Class ID: Vulpix
SRS ID:  CST116SRS01 

Unresolved Issues: None.

Notes:  Compile with Visual Studio 2017 on Windows 10. 

Part0 Assertions succeeded or failed regardless of build:

				Debug x64		Release x64		  Debug x86		  Release x86
Data Type		Pass/Fail		Pass/Fail		  Pass/Fail		  Pass/Fail

char			Pass			Pass			  Pass			  Pass
float			Pass			Pass			  Pass			  Pass
double			Pass			Pass			  Pass			  Pass
bool			Pass			Pass			  Pass			  Pass
short			Pass			Pass			  Pass			  Pass
long			Pass			Pass			  Pass			  Pass
long double		Pass			Pass			  Pass			  Pass

---------------------------------------------------------------------------------

Purpose:  

* Learn to create a Visual Studio solution with multiple projects and multiple configurations. 
* Learn how to find the sizes of various literals and data types. 
* Learn how to use an assert statement. 
* Learn to write code that uses C++ streams to format output. 

Instructions:  

Part 0:  

Create a project named "Part0" that calculates the size of the following data types and stores each of them in a variable:  

* bool
* signed char
* unsigned char
* char
* short
* signed
* unsigned
* int
* unsigned short
* std::size_t
* signed long
* unsigned long
* long
* float
* double
* long double

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
* ‘\0’
* ‘\377’
* 0.0
* 0.f
* "Annie" " " "\"Lennox\"\n"

Terminate each output with a non-flushing newline.  

Terminate the last output with std::endl to flush any remaining data.  

An example output line should appear as follows:  

sizeof(0) == 4
