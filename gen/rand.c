#include	<9/9.h>

int
p9rand(void)
{
	return lrand() & 0x7fff;
}
