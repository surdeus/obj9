#include <9/u.h>
#include <9/c.h>

char*
strdup(char *s)
{
	char *t;
	int l;

	l = strlen(s);
	t = malloc(l+1);
	if(t == nil)
		return nil;
	memmove(t, s, l+1);
	return t;
}

