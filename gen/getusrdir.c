#include <9/u.h>
#include <9/c.h>

char *
getusrdir(void)
{
	static char *u = 0 ;
	if(u) return u ;
	u = getenv("HOME") ;
	if(!u) u = getenv("home") ;
	return u ;
}

