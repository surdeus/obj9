#include <9/u.h>
#include <9/c.h>

char*
get9root(void)
{
	static char *s;

	if(s)
		return s;

	if((s = getenv("PLAN9")) != 0)
		return s;
	return PLAN9PATH ;
}

