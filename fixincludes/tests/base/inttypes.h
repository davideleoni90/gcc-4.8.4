/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"fixinc/tests/inc/inttypes.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */



#if defined( HPUX_C99_INTTYPES_CHECK )
#define UINT8_C(__c) (__c)
#define UINT16_C(__c) (__c)
#define INT32_C(__c) (__c)
#define UINT32_C(__c) __CONCAT__(__c,u)

#endif  /* HPUX_C99_INTTYPES_CHECK */