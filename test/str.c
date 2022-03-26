#include <9/str.h>
#include <9/fmt.h>

char *s1 = "Hello" ,
	*s2 = "World" ;

int
main(int argc, char *argv[])
{
	char buf[512];
	p9strcpy(buf, s1);
	p9strcat(buf, s2);
	print("%s\n", buf);
	return 0 ;
}

