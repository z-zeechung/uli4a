# ifndef H_ULI4A_STDDEF
# define H_ULI4A_STDDEF

	# include <uli4a/types.h>
	
	# define NULL ((void*)0)
	
	# define offsetof(st, m) ((size_t)&(((st *)0)->m))
	
	# define ptrdiff_t uli4a_ptrdiff_t
	typedef ssize_t uli4a_ptrdiff_t;
	
	# define wchar_t uli4a_wchar_t
	typedef uint32_t uli4a_wchar_t;
	
	// size_t defined in <uli4a/types.h>

# endif