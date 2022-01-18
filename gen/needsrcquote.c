#include <9/u.h>
#include <9/c.h>

int
needsrcquote(int c)
{
	if(c <= ' ')
		return 1;
	if(strchr("`^#*[]=|\\?${}()'<>&;", c))
		return 1;
	return 0;
}
