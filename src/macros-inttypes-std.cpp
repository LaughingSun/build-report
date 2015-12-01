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



#ifndef MACROS_INTTYPES_STD_CXX
# define MACROS_INTTYPES_STD_CXX

/*

cstdint / stdint.h
==================

Including this file is the "minimum requirement" if you want to work with the 
specified-width integer types of C99 (i.e. "int32_t", "uint16_t" etc.). If you 
include this file, you will get the definitions of these types, so that you 
will be able to use these types in declarations of variables and functions and 
do operations with these datatypes.

int8_t              signed integer type with width of exactly 8, 16, 32 and 64 
int16_t             bits respectively with no padding bits and using 2's 
int32_t             complement for negative values (provided if and only if the 
int64_t             implementation directly supports the type)(typedef)

int_fast8_t         fastest signed integer type with width of at least 8, 16, 
int_fast16_t        32 and 64 bits respectively(typedef)
int_fast32_t
int_fast64_t
 
int_least8_t        smallest signed integer type with width of at least 8, 16, 
int_least16_t       32 and 64 bits respectively(typedef)
int_least32_t
int_least64_t

intmax_t            maximum width integer type(typedef)
intptr_t(optional)  integer type capable of holding a pointer(typedef)

uint8_t             unsigned integer type with width of exactly 8, 16, 32 and 
uint16_t            64 bits respectively (provided if and only if the 
uint32_t            implementation directly supports the type)(typedef)
uint64_t

uint_fast8_t        fastest unsigned integer type with width of at least 8, 16, 
uint_fast16_t       32 and 64 bits respectively(typedef)
uint_fast32_t
uint_fast64_t

uint_least8_t       smallest unsigned integer type with width of at least 8, 
uint_least16_t      16, 32 and 64 bits respectively(typedef)
uint_least32_t
uint_least64_t
 
uintmax_t           maximum width unsigned integer type (typedef)
uintptr_t(optional) unsigned integer type capable of holding a pointer(typedef)

cinttypes / inttypes.h
======================

If you include this file, you will get everything that stdint.h provides (because inttypes.h includes stdint.h), but you will also get facilities for doing printf and scanf (and "fprintf, "fscanf", and so on.) with these types in a portable way. For example, you will get the "PRIu16" macro so that you can printf an uint16_t integer like this:


*/

#include "main-head.cpp"

printf( "Stdint limit macros:\n" );
# ifdef INTMAX_MIN
PRINT_SIGNED(INTMAX_MIN)
# endif
# ifdef INTMAX_MAX
PRINT_SIGNED(INTMAX_MAX)
# endif
# ifdef UINTMAX_MAX
PRINT_UNSIGNED(UINTMAX_MAX)
# endif
# ifdef INTN_MIN
PRINT_SIGNED(INTN_MIN)
# endif
# ifdef INTN_MAX
PRINT_SIGNED(INTN_MAX)
# endif
# ifdef UINTN_MAX
PRINT_UNSIGNED(UINTN_MAX)
# endif
# ifdef INT_LEASTN_MIN
PRINT_SIGNED(INT_LEASTN_MIN)
# endif
# ifdef INT_LEASTN_MAX
PRINT_SIGNED(INT_LEASTN_MAX)
# endif
# ifdef UINT_LEASTN_MAX
PRINT_UNSIGNED(UINT_LEASTN_MAX)
# endif
# ifdef INT_FASTN_MIN
PRINT_SIGNED(INT_FASTN_MIN)
# endif
# ifdef INT_FASTN_MAX
PRINT_SIGNED(INT_FASTN_MAX)
# endif
# ifdef UINT_FASTN_MAX
PRINT_UNSIGNED(UINT_FASTN_MAX)
# endif
# ifdef INTPTR_MIN
PRINT_SIGNED(INTPTR_MIN)
# endif
# ifdef INTPTR_MAX
PRINT_SIGNED(INTPTR_MAX)
# endif
# ifdef UINTPTR_MAX
PRINT_UNSIGNED(UINTPTR_MAX)
# endif
# ifdef SIZE_MAX
PRINT_UNSIGNED(SIZE_MAX)
# endif
# ifdef PTRDIFF_MIN
PRINT_SIGNED(PTRDIFF_MIN)
# endif
# ifdef PTRDIFF_MAX
PRINT_SIGNED(PTRDIFF_MAX)
# endif
# ifdef SIG_ATOMIC_MIN
PRINT_SIGNED(SIG_ATOMIC_MIN)
# endif
# ifdef SIG_ATOMIC_MAX
PRINT_SIGNED(SIG_ATOMIC_MAX)
# endif
# ifdef WCHAR_MIN
PRINT_SIGNED(WCHAR_MIN)
# endif
# ifdef WCHAR_MAX
PRINT_SIGNED(WCHAR_MAX)
# endif
# ifdef WINT_MIN
PRINT_SIGNED(WINT_MIN)
# endif
# ifdef WINT_MAX
PRINT_SIGNED(WINT_MAX)
# endif

printf( "\n" );

printf( "Stdint function-like macros:\n" );
# ifdef INTMAX_C
PRINT_DEFINED(INTMAX_C)
# endif
# ifdef UINTMAX_C
PRINT_DEFINED(UINTMAX_C)
# endif
# ifdef INTN_C
PRINT_DEFINED(INTN_C)
# endif
# ifdef UINTN_C
PRINT_DEFINED(UINTN_C)
# endif

printf( "\n" );

printf( "Inttypes printf / scanf macros:\n" );
# ifdef PRIxMAX
PRINT_STRING(PRIxMAX)
# endif
# ifdef PRIxN
PRINT_STRING(PRIxN)
# endif
# ifdef PRIxLEASTN
PRINT_STRING(PRIxLEASTN)
# endif
# ifdef PRIxFASTN
PRINT_STRING(PRIxFASTN)
# endif
# ifdef PRIxPTR
PRINT_STRING(PRIxPTR)
# endif
# ifdef SCNxMAX
PRINT_STRING(SCNxMAX)
# endif
# ifdef SCNxN
PRINT_STRING(SCNxN)
# endif
# ifdef SCNxLEASTN
PRINT_STRING(SCNxLEASTN)
# endif
# ifdef SCNxFASTN
PRINT_STRING(SCNxFASTN)
# endif
# ifdef SCNxPTR
PRINT_STRING(SCNxPTR)
# endif

printf( "\n" );

#include "main-tail.cpp"

#endif // MACROS_INTTYPES_STD_CXX

