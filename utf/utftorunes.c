#include <9/9.h>

Rune *
utftorunes(Rune *r, char *s)
{
	Rune *pr = r ;

	while(*s){
		s += chartorune(pr, s) ;
		++pr;
	}

	*pr = 0 ; 
	return r ;
}
