#include <string.h>

char *stpcpy(char *dest, const char *src) {
	while ( (*dest++ = *src++) != '\0' )
	;
	return dest;
}