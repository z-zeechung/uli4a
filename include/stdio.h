// TODO

# ifndef H_ULI4A_STDIO
# define H_ULI4A_STDIO

	# include <sys/types.h>
	# include <stddef.h>
	# include <stdarg.h>
	# include <uli4a/limits.h>
	# include <uli4a/file.h>
	# include <uli4a/types.h>
	# include <stdbool.h>
	
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
		bool mread;
		bool mwrite;
		bool mseek;
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
	
	# define stdin uli4a_stdin
	extern FILE *const stdin;
	
	# define stdout uli4a_stdout
	extern FILE *const stdout;
	
	# define stderr uli4a_stderr
	extern FILE *const stderr;
	
	# define putc uli4a_putc
	extern int putc(int c, FILE *stream);
	
	# define putchar uli4a_putchar
	extern int putchar(int);
	
	# define printf uli4a_printf
	extern int printf(const char *, ...);
	
	# define sprinf uli4a_sprintf
	extern int sprintf(char *, const char *, ...);
	
	# define snprintf uli4a_snprintf
	extern int snprintf(char *, size_t, const char *, ...);
	
	# define vsnprintf uli4a_vsnprintf
	extern int vsnprintf(char *, size_t, const char *, va_list);
	
	# define vprintf uli4a_vprintf
	extern int vprintf(const char *, va_list);

# endif