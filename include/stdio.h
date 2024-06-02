// TODO

# ifndef H_ULI4A_STDIO
# define H_ULI4A_STDIO

	# include <sys/types.h>
	# include <stddef.h>
	# include <stdarg.h>
	# include <uli4a/limits.h>
	# include <uli4a/file.h>
	# include <uli4a/types.h>
	
	# define ULI4A_STDIN 0
	# define ULI4A_STDOUT 1
	# define ULI4A_STDERR 2
	# define ULI4A_FILE 3
	# define ULI4A_PIPE 4
	typedef struct {
		int32_t handle;
		char (*read)(char* buf, off_t length, int32_t handle);
		char (*write)(const char* buf, off_t length, int32_t handle);
		off_t (*getpos)(int32_t handle);
		char (*setpos)(int32_t handle, off_t pos);
		char type;
		char mread;
		char mwrite;
		char mseek;
	} FILE;
	
	typedef off_t fpos_t;
	
	// off_t defined in <sys/types.h>
	
	// size_t defined in <stddef.h>
	
	// ssize_t defined in <sys/types.h>
	
	// va_list defined in <stdarg.h>
	
	# define BUFSIZ 4096
	
	# define L_ctermid 128
	
	# define L_tmpnam 128
	
	# define _IOFBF 0
	
	# define _IOLBF 1
	
	# define _IONBF 2
	
	# define SEEK_SET 0
	
	# define SEEK_CUR 1
	
	# define SEEK_END 2
	
	// FILENAME_MAX defined in <uli4a/limits.h>
	
	// FOPEN_MAX defined in <uli4a/limits.h>
	
	# define TMP_MAX 10000
	
	# define EOF (-1)
	
	// NULL defined in <stddef.h>
	
	// P_tmpdir defined in <uli4a/file.h>
	
	
	
	// The following functions have not been debugged
	
	extern FILE *const stdin;
	
	extern FILE *const stdout;
	
	extern FILE *const stderr;
	
	extern int putc(int c, FILE *stream);
	
	extern int putchar(int);
	
	extern int printf(const char *, ...);
	
	extern int sprintf(char *, const char *, ...);
	
	extern int snprintf(char *, size_t, const char *, ...);
	
	extern int vsnprintf(char *, size_t, const char *, va_list);
	
	extern int vprintf(const char *, va_list);

# endif