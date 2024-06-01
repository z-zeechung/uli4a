# include <sys/types.h>
typedef int int32_t;
# include <stdio.h>

char uli4a_stderr_write(const char* buf, off_t length, int32_t handle){
	fwrite(buf, 1, length, stderr);
	return 0;
}