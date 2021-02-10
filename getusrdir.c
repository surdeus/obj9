#include <u.h>
#include <libc.h>

char *
getusrdir(void)
{
	static char s[256] = "\0" ;
	static char *h = 0 ;
	if(!h) h = getenv("HOME") ;
	if(!h) h = getenv("home") ;
	if(!*s) strncpy(s, h, sizeof(s) - 1) ;
	return s ;
}

