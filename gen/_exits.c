#include <9/9.h>

void
_exits(char *s)
{
	if(s == 0 || *s == 0)
		_exit(0);
	_exit(exitcode(s));
}
