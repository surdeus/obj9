#include <9/u.h>
#include <9/c.h>

static struct {
	char *old;
	char *new;
} replace[] = {
	{"#u", 0},
	{"#d", "/dev/fd"},
};

char *
unsharp(char *old)
{
	char *new;
	int i, olen, nlen, len;
	if(!replace[0].new) replace[0].new = getusrdir() ;
	for(i=0; i<nelem(replace); i++){
		if(!replace[i].new)
			continue;
		olen = strlen(replace[i].old);
		if(strncmp(old, replace[i].old, olen) != 0
				|| (old[olen] != '\0' && old[olen] != '/'))
			continue;
		nlen = strlen(replace[i].new);
		len = strlen(old)+nlen-olen;
		new = malloc(len+1);
		if(new == nil)
			/* Most callers won't check the return value... */
			sysfatal("out of memory translating %s to %s%s", old, replace[i].new, old+olen);
		strcpy(new, replace[i].new);
		strcpy(new+nlen, old+olen);
		assert(strlen(new) == len);
		return new;
	}
	return old;
}
