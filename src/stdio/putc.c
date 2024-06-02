
// TODO: Implement buffer and error handling


# include <stdio.h>

static char buf[1];

int putc(int c, FILE *stream){

	buf[0] = (char)c;
	stream->write(buf, 1, stream->handle);
	return 0;

}