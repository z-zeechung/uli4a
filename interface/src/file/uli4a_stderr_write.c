# include <uli4a/file.h>
# include <stdio.h>

char uli4a_stderr_write(const char* buf, off_t length, int32_t handle){
	fwrite(buf, 1, length, stderr);
	return 0;
}