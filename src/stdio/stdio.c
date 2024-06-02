# include <stdio.h>
# include <uli4a/file.h>
# include <stdbool.h>

FILE stdin_FILE = {
	.read = uli4a_stdin_read,
	.type = ULI4A_STDIN,
	.mread = true,
	.mwrite = false,
	.mseek = false
};
FILE *const stdin = &stdin_FILE;

FILE stdout_FILE = {
	.write = uli4a_stdout_write,
	.type = ULI4A_STDOUT,
	.mread = false,
	.mwrite = true,
	.mseek = false
};
FILE *const stdout = &stdout_FILE;

FILE stderr_FILE = {
	.write = uli4a_stderr_write,
	.type = ULI4A_STDERR,
	.mread = false,
	.mwrite = true,
	.mseek = false
};
FILE *const stderr = &stderr_FILE;