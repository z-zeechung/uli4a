# include <uli4a/file.h>
# include <stdio.h>

char uli4a_stdin_read(char* buf, off_t length, int32_t handle){
	fread(buf, 1, length, stdin);
	return 0;
}