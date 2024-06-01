# ifndef H_ULI4A_STDDEF
# define H_ULI4A_STDDEF

	# include <uli4a/types.h>
	
	# define NULL ((void*)0)
	
	# define offsetof(st, m) ((size_t)&(((st *)0)->m))
	
	typedef ssize_t ptrdiff_t;
	
	typedef uint32_t wchar_t;
	
	// size_t defined in <uli4a/types.h>

# endif