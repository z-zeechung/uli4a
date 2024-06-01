# include <stdio.h>
# include <uli4a/file.h>

FILE stdin_FILE = {
	.read = uli4a_stdin_read,
	.type = ULI4A_STDIN,
	.mread = 1,
	.mwrite = 0,
	.mseek = 0
};
FILE *const stdin = &stdin_FILE;

FILE stdout_FILE = {
	.write = uli4a_stdout_write,
	.type = ULI4A_STDOUT,
	.mread = 0,
	.mwrite = 1,
	.mseek = 0
};
FILE *const stdout = &stdout_FILE;

FILE stderr_FILE = {
	.write = uli4a_stderr_write,
	.type = ULI4A_STDERR,
	.mread = 0,
	.mwrite = 1,
	.mseek = 0
};
FILE *const stderr = &stderr_FILE;