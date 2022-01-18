#include <9/9.h>

ulong
getcallerpc(void *x)
{
	return ((ulong*)x)[-2];
}

