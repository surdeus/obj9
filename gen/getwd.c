#include <9/u.h>
#include <9/c.h>

#undef getwd

char*
p9getwd(char *s, int ns)
{
	return getcwd(s, ns);
}
