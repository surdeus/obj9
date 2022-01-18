#include <9/u.h>
#include <9/c.h>

static Lock fmtlock;

void
__fmtlock(void)
{
	lock(&fmtlock);
}

void
__fmtunlock(void)
{
	unlock(&fmtlock);
}
