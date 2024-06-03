# ifndef H_ULI4A_BITS_MEM
# define H_ULI4A_BITS_MEM

	# define malloc uli4a_malloc
	extern void* malloc(size_t);
	
	# define free uli4a_free
	extern void free(void *);
	
	# define memcpy uli4a_memcpy
	extern void* memcpy(void *, const void *, size_t);
	
	# define memchr uli4a_memchr
	extern void* memchr(const void *, int, size_t);
	
	# define memcmp uli4a_memcmp
	extern int memcmp(const void *, const void *, size_t);
	
	# define memset uli4a_memset
	extern void* memset(void *, int, size_t);

# endif