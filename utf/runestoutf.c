#include <9/9.h>

char *
runestoutf(char *s, Rune *r)
{
	int i, len = runestrlen(r) ;
	char *ps = s ;
	for(i=0 ; i<len ; ++i)
		ps += runetochar(ps, r+i) ;
	*ps = 0 ;
	return s ;
}
