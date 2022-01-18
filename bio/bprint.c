#include	<9/9.h>
#include	<9/bio.h>

int
Bprint(Biobuf *bp, char *fmt, ...)
{
	int n;
	va_list arg;

	va_start(arg, fmt);
	n = Bvprint(bp, fmt, arg);
	va_end(arg);
	return n;
}
