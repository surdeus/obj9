#include <u.h>
#include <libc.h>

char *
getusrdir(void)
{
	static char *u = 0 ;
	if(u) return u ;
	u = getenv("HOME") ;
	if(!u) u = getenv("home") ;
	return u ;
}

