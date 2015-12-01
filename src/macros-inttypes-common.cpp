
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

#ifndef COMMON_MACROS_INTTYPES_CXX
# define COMMON_MACROS_INTTYPES_CXX

#if defined(__INCLUDE_LEVEL__) && ((defined(ADD_MAIN) && (__INCLUDE_LEVEL__ == 1)) || (__INCLUDE_LEVEL__ == 0))

# ifdef __cplusplus
using namespace std;
#  include <cstdlib>
#  include <cstdio>
#  include <cinttypes>
# else
#  include <stdlib.h>
#  include <stdio.h>
#  include <inttypes.h>
# endif

int
main ( int argc, char *[] )
{
#  ifdef __cplusplus
  printf( "using namespace std\n" );
#  endif
# endif

#include "print-macros.hpp"

printf( "Stdint types:\n" );

PRINT_SIZEOF(std::int8_t)
PRINT_SIZEOF(int16_t)
//#if has_support(int24_t)
//PRINT_SIZEOF(int24_t)
//#endif
PRINT_SIZEOF(int32_t)
//#if has_support(int48_t)
//PRINT_SIZEOF(int48_t)
//#endif
PRINT_SIZEOF(int64_t)

PRINT_SIZEOF(int_fast8_t)
PRINT_SIZEOF(int_fast16_t)
//#if has_support(int_fast24_t)
//PRINT_SIZEOF(int_fast24_t)
//#endif
PRINT_SIZEOF(int_fast32_t)
//#if has_support(int_fast48_t)
//PRINT_SIZEOF(int_fast48_t)
//#endif
PRINT_SIZEOF(int_fast64_t)
 
PRINT_SIZEOF(int_least8_t)
PRINT_SIZEOF(int_least16_t)
//#if has_support(int_least24_t)
//PRINT_SIZEOF(int_least24_t)
//#endif
PRINT_SIZEOF(int_least32_t)
//#if has_support(int_least48_t)
//PRINT_SIZEOF(int_least48_t)
//#endif
PRINT_SIZEOF(int_least64_t)

PRINT_SIZEOF(intmax_t)
PRINT_SIZEOF(intptr_t)

PRINT_SIZEOF(uint8_t)
PRINT_SIZEOF(uint16_t)
//#if has_support(uint24_t)
//PRINT_SIZEOF(uint24_t)
//#endif
PRINT_SIZEOF(uint32_t)
//#if has_support(def uint48_t)
//PRINT_SIZEOF(uint48_t)
//#endif
PRINT_SIZEOF(uint64_t)

PRINT_SIZEOF(uint_fast8_t)
PRINT_SIZEOF(uint_fast16_t)
//#if has_support(uint_fast24_t)
//PRINT_SIZEOF(uint_fast24_t)
//#endif
PRINT_SIZEOF(uint_fast32_t)
//#if has_support(uint_fast48_t)
//PRINT_SIZEOF(uint_fast48_t)
//#endif
PRINT_SIZEOF(uint_fast64_t)

PRINT_SIZEOF(uint_least8_t)
PRINT_SIZEOF(uint_least16_t)
//#if has_support(uint_least24_t)
//PRINT_SIZEOF(uint_least24_t)
//#endif
PRINT_SIZEOF(uint_least32_t)
//#if has_support(uint_least48_t)
//PRINT_SIZEOF(uint_least48_t)
//#endif
PRINT_SIZEOF(uint_least64_t)
 
PRINT_SIZEOF(uintmax_t)
PRINT_SIZEOF(uintptr_t)

printf( "\n" );

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


#if defined(__INCLUDE_LEVEL__) && ((defined(ADD_MAIN) && (__INCLUDE_LEVEL__ == 1)) || (__INCLUDE_LEVEL__ == 0))
}
#endif

#endif // COMMON_MACROS_INTTYPES_CXX

