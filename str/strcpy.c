#include <9/mem.h>

char *
strcpy(char *dst, char *src)
{
	int len = strlen(src) ;
	memcpy(dst, src, len+1);
	return dst ;
}
