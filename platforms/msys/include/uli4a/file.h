# ifndef H_ULI4A_BITS_FILE
# define H_ULI4A_BITS_FILE

	# include <uli4a/types.h>
	# include <sys/types.h>

	# define P_tmpdir "/tmp"
	
	extern char uli4a_stdin_read(char* buf, off_t length, int32_t handle);
	
	extern char uli4a_stdout_write(const char* buf, off_t length, int32_t handle);
	
	extern char uli4a_stderr_write(const char* buf, off_t length, int32_t handle);
	
	extern char uli4a_pipe_read(char* buf, off_t length, int32_t handle);
	
	extern char uli4a_pipe_write(const char* buf, off_t length, int32_t handle);
	
	extern char uli4a_file_read(char* buf, off_t length, int32_t handle);
	
	extern char uli4a_file_write(const char* buf, off_t length, int32_t handle);
	
	extern off_t uli4a_file_getpos(int32_t handle);
	
	extern char uli4a_file_setpos(int32_t handle, off_t pos);

# endif