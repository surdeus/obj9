#include	<9/u.h>
#include	<9/c.h>

#define	MASK	0x7fffffffL

long
lnrand(long n)
{
	long slop, v;

	if(n < 0)
		return n;
	slop = MASK % n;
	do
		v = lrand();
	while(v <= slop);
	return v % n;
}
