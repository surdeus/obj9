#include <9/u.h>
#include <9/c.h>

#undef dup

int
p9dup(int old, int new)
{
	if(new == -1)
		return dup(old);
	return dup2(old, new);
}
