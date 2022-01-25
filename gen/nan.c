#include <9/u.h>
#include <9/c.h>
#include <9/nan.h>

double
NaN(void)
{
	return __NaN();
}

double
Inf(int sign)
{
	return __Inf(sign);
}

int
isNaN(double x)
{
	return __isNaN(x);
}

int
isInf(double x, int sign)
{
	return __isInf(x, sign);
}
