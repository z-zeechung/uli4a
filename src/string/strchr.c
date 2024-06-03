#include <string.h>

char* strchr(const char* str, int c) {
	if (str == NULL) {
		return NULL;
	}
	
	unsigned char target = (unsigned char)c;
	
	const char* result = memchr(str, target, -1);
	return (char*)result;
}