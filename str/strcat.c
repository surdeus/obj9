#include <9/str.h>

char *
p9strcat(char *dst, char *src)
{
	return p9strcpy(dst + p9strlen(dst), src);
}

