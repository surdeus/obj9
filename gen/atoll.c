#include <9/u.h>
#include <9/c.h>

vlong
atoll(char *s)
{
	return strtoll(s, 0, 0);
}

