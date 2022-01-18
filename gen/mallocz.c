#include <9/u.h>
#include <unistd.h>
#include <string.h>
#include <9/c.h>

void*
mallocz(unsigned long n, int clr)
{
	void *v;

	v = malloc(n);
	if(clr && v)
		memset(v, 0, n);
	return v;
}
