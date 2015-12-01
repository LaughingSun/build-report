
#ifndef SIZEOF_INTTYPES_STD_CXX
# define SIZEOF_INTTYPES_STD_CXX

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

printf( "Stdint types:\n" );

PRINT_SIZEOF(int8_t)
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

#include "main-tail.cpp"

#endif // SIZEOF_INTTYPES_STD_CXX

