# ifndef H_ULI4A_BITS_MEM
# define H_ULI4A_BITS_MEM

	# include <uli4a/types.h>

	# define malloc(size) uli4a_malloc(size)
	extern void* uli4a_malloc(size_t);
	
	# define memcpy(a, b, size) uli4a_memcpy(a, b, size)
	extern void* uli4a_memcpy(void*, const void*, size_t);
	
	# define free(a) uli4a_free(a)
	extern void uli4a_free(void*);

# endif