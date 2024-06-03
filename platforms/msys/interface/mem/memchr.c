# include <string.h>
# include <stdlib.h>

void* uli4a_memchr(const void * p, int n, size_t size){
	return memchr(p, n, size);
}