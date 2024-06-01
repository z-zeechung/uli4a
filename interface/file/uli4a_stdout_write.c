# include <sys/types.h>
typedef int int32_t;
# include <stdio.h>

char uli4a_stdout_write(const char* buf, off_t length, int32_t handle){
	fwrite(buf, 1, length, stdout);
	return 0;
}