/*


Copyright (c) <2015> <Erich Horn and LaughingSun>


Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:


The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.


THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.


 */



#ifndef SIZEOF_PRIMITIVES_STD_CXX
# define SIZEOF_PRIMITIVES_STD_CXX

/*

Integer Types
=============

The integer data types range in size from at least 8 bits to at least 32 bits. 
The C99 standard extends this range to include integer sizes of at least 64 
bits. You should use integer types for storing whole number values (and the 
char data type for storing characters). The sizes and ranges listed for these 
types are minimums; depending on your computer platform, these sizes and ranges 
may be larger.

While these ranges provide a natural ordering, the standard does not require 
that any two types have a different range. For example, it is common for int 
and long to have the same range. The standard even allows signed char and long 
to have the same range, though such platforms are very unusual.

signed char         The 8-bit signed char data type can hold integer values in 
                    the range of −128 to 127.
unsigned char       The 8-bit unsigned char data type can hold integer values in 
                    the range of 0 to 255.
char                Depending on your system, the char data type is defined as 
                    having the same range as either the signed char or the 
                    unsigned char data type (they are three distinct types, 
                    however). By convention, you should use the char data type 
                    specifically for storing ASCII characters (such as `m'), 
                    including escape sequences (such as `\n').
short int           The 16-bit short int data type can hold integer values in 
                    the range of −32,768 to 32,767. You may also refer to this 
                    data type as short, signed short int, or signed short.
unsigned short int  The 16-bit unsigned short int data type can hold integer 
                    values in the range of 0 to 65,535. You may also refer to 
                    this data type as unsigned short.
int                 The 32-bit int data type can hold integer values in the 
                    range of −2,147,483,648 to 2,147,483,647. You may also 
                    refer to this data type as signed int or signed.
unsigned int        The 32-bit unsigned int data type can hold integer values 
                    in the range of 0 to 4,294,967,295. You may also refer to 
                    this data type simply as unsigned.
long int            The 32-bit long int data type can hold integer values in 
                    the range of at least −2,147,483,648 to 2,147,483,647. 
                    (Depending on your system, this data type might be 64-bit, 
                    in which case its range is identical to that of the long 
                    long int data type.) You may also refer to this data type 
                    as long, signed long int, or signed long.
unsigned long int   The 32-bit unsigned long int data type can hold integer 
                    values in the range of at least 0 to 4,294,967,295. 
                    (Depending on your system, this data type might be 64-bit, 
                    in which case its range is identical to that of the unsigned 
                    long long int data type.) You may also refer to this data 
                    type as unsigned long.
long long int       The 64-bit long long int data type can hold integer values 
                    in the range of −9,223,372,036,854,775,808 to 9,223,372,036,
                    854,775,807. You may also refer to this data type as long 
                    long, signed long long int or signed long long. This type 
                    is not part of C89, but is both part of C99 and a GNU C 
                    extension.
unsigned long long int  The 64-bit unsigned long long int data type can hold 
                    integer values in the range of at least 0 to 18,446,744,073,
                    709,551,615. You may also refer to this data type as 
                    unsigned long long. This type is not part of C89, but is 
                    both part of C99 and a GNU C extension.

Real Number Types
=================

There are three data types that represent fractional numbers. While the
sizes and ranges of these types are consistent across most computer systems
in use today, historically the sizes of these types varied from system
to system. As such, the minimum and maximum values are stored in macro
definitions in the library header file float.h. In this section, we include
the names of the macro definitions in place of their possible values;
check your system's float.h for specific numbers.

float               The float data type is the smallest of the three floating 
                    point types, if they differ in size at all. Its minimum 
                    value is stored in the FLT_MIN, and should be no greater 
                    than 1e-37. Its maximum value is stored in FLT_MAX, and 
                    should be no less than 1e37.
double              The double data type is at least as large as the float 
                    type, and it may be larger. Its minimum value is stored in 
                    DBL_MIN, and its maximum value is stored in DBL_MAX.
long double         The long double data type is at least as large as the float 
                    type, and it may be larger. Its minimum value is stored in 
                    LDBL_MIN, and its maximum value is stored in LDBL_MAX.

Standard Complex Number Types
=============================

Complex types were introduced in C99. There are three complex types:

float _Complex
double _Complex
long double _Complex

*/

#include "main-head.cpp"

printf( "Primitive Integer types:\n" );

PRINT_SIZEOF(signed char)
PRINT_SIZEOF(unsigned char)
PRINT_SIZEOF(char)
PRINT_SIZEOF(short int)
PRINT_SIZEOF(unsigned short int)
PRINT_SIZEOF(int)
PRINT_SIZEOF(unsigned int)
PRINT_SIZEOF(long int)
PRINT_SIZEOF(unsigned long int)
PRINT_SIZEOF(long long int)
PRINT_SIZEOF(unsigned long long int)

printf( "\n" );

printf( "Primitive Real Number types:\n" );

PRINT_SIZEOF(float)
PRINT_SIZEOF(double)
PRINT_SIZEOF(long double)

printf( "\n" );

printf( "Primitive Complex Number types:\n" );

PRINT_SIZEOF(float _Complex)
PRINT_SIZEOF(double _Complex)
PRINT_SIZEOF(long double _Complex)

printf( "\n" );

printf( "Primitive pointer type: (all pointers of a type have the same size)\n" );

PRINT_SIZEOF(void*)

printf( "\n" );

#include "main-tail.cpp"

#endif // SIZEOF_PRIMITIVES_STD_CXX

