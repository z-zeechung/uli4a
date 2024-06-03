#include <string.h>

size_t strlen(const char *str) {
	if (str == NULL) {
		return 0;
	}
	
	size_t len = 0;
	while (*str != '\0') { // continue until the null terminator is reached
		len++;
		str++; // advance to the next character
	}
	return len;
}