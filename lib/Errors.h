/*
  Variadic macros for signalizing errors and warnings ;) 
*/

#include <stdio.h>
#include <stdlib.h>

#define PANIC(_rcode,...) ( {fprintf(stderr, "Fatal: "); fprintf(stderr, __VA_ARGS__ ) ; exit(_rcode); })
#define FEAR(...) ({fprintf(stderr, "Warning: "); fprintf(stderr,  __VA_ARGS__ ); })