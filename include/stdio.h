# ifndef H_ULI4A_STDIO
# define H_ULI4A_STDIO

	# include <sys/types.h>
	# include <stddef.h>
	# include <stdarg.h>
	# include <uli4a/limits.h>
	# include <uli4a/file.h>
	
	# define FILE ULI4A_FILE
	typedef struct {
		int foobar;
	} ULI4A_FILE;
	
	# define fpos_t uli4a_fpos_t
	typedef off_t uli4a_fpos_t;
	
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
	
	# define stdin uli4a_stdin
	extern FILE *const uli4a_stdin;
	
	# define stdout uli4a_stdout
	extern FILE *const uli4a_stdout;
	
	# define stderr uli4a_stderr
	extern FILE *const uli4a_stderr;


# endif