#ifndef H_ULI4A_STRING
#define H_ULI4A_STRING

	# include <stddef.h>
	# include <uli4a/mem.h>
	
	// NULL defined in <stddef.h>
	
	// size_t defined in <stddef.h>
	
	// TODO: locale_t
	
	# define memccpy uli4a_memccpy
	void *memccpy(void *, const void *, int, size_t);
	
	// memchr defined in <uli4a/mem.h>
	
	// memcmp defined in <uli4a/mem.h>
	
	// memcpy defined in <uli4a/mem.h>
	
	# define memmove uli4a_memmove
	void *memmove(void *, const void *, size_t);
	
	// memset defined in <uli4a/mem.h>
	
	# define stpcpy uli4a_stpcpy
	char* stpcpy(char *, const char *);
	
	# define stpncpy uli4a_stpncpy
	char* stpncpy(char *, const char *, size_t);
	
	# define strcat uli4a_strcat
	char* strcat(char *, const char *);
	
	# define strchr uli4a_strchr
	char* strchr(const char *, int);
	
	# define strcmp uli4a_strcmp
	int strcmp(const char *, const char *);
	
	// TODO: strcoll
	
	// TODO: strcoll_l	
	
	# define strcpy uli4a_strcpy
	char* strcpy(char *, const char *);
	
	
	# define strlen uli4a_strlen
	size_t strlen(const char *);
	
	
	# define strnlen uli4a_strnlen
	size_t strnlen(const char *, size_t);

# endif