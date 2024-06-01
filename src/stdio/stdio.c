# include <stdio.h>
# include <uli4a/file.h>

FILE uli4a_stdin_FILE = {
	.read = uli4a_stdin_read,
	.type = ULI4A_STDIN_STREAM,
	.mread = 1,
	.mwrite = 0,
	.mseek = 0
};
FILE *const uli4a_stdin = &uli4a_stdin_FILE;

FILE uli4a_stdout_FILE = {
	.write = uli4a_stdout_write,
	.type = ULI4A_STDOUT_STREAM,
	.mread = 0,
	.mwrite = 1,
	.mseek = 0
};
FILE *const uli4a_stdout = &uli4a_stdout_FILE;

FILE uli4a_stderr_FILE = {
	.write = uli4a_stderr_write,
	.type = ULI4A_STDERR_STREAM,
	.mread = 0,
	.mwrite = 1,
	.mseek = 0
};
FILE *const uli4a_stderr = &uli4a_stderr_FILE;