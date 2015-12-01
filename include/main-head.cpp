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

#include "print-macros.hpp"

#if defined(__INCLUDE_LEVEL__) && ((defined(ADD_MAIN) && (__INCLUDE_LEVEL__ == 2)) || (__INCLUDE_LEVEL__ == 1))

int
main ( int argc, char *[] )
{
# ifdef __cplusplus
  printf( "using namespace std\n" );
# endif
#endif

