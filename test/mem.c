#include <9/mem.h>
#include <9/fmt.h>

int
main(int argc, char *argv[])
{
	char *str = "this is a test string" ;
	char buf[512];

	p9memcpy(buf, str, 7);
	buf[7] = 0 ;

	print("Values after memcpy: '%s' '%s'\n", str, buf);

	p9memset(buf, 'c', 5);
	print("Values after memset: '%s'\n", buf);

	return 0 ;
}

