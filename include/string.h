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

	# define strcspn uli4a_strcspn
	size_t strcspn(const char *, const char *);

	# define strdup uli4a_strdup
	char* strdup(const char *);

	// TODO: strerror

	// TODO: strerror_l

	// TODO: strerror_r
	
	# define strlen uli4a_strlen
	size_t strlen(const char *);

	# define strncat uli4a_strncat
	char* strncat(char *, const char *, size_t);

	# define strncmp uli4a_strncmp
	int strncmp(const char *, const char *, size_t);

	# define strncpy uli4a_strncpy
	char* strncpy(char *, const char *, size_t);

	# define strndup uli4a_strndup
	char* strndup(const char *, size_t);
	
	# define strnlen uli4a_strnlen
	size_t strnlen(const char *, size_t);

	# define strpbrk uli4a_strpbrk
	char* strpbrk(const char *, const char *);

	# define strrchr uli4a_strrchr
	char* strrchr(const char *, int);

	// TODO: strsignal

	# define strspn uli4a_strspn
	size_t strspn(const char *, const char *);
	
	# define strstr uli4a_strstr
	char* strstr(const char *, const char *);
	
	# define strtok uli4a_strtok
	char* strtok(char *, const char *);
	
	# define strtok_r uli4a_strtok_r
	char* strtok_r(char *, const char *, char **);
	
	// TODO: strxfrm
	
	// TODO: strxfrm_l

# endif
