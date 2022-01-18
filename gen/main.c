#include <9/u.h>
#define NOPLAN9DEFINES
#include <9/c.h>

extern void p9main(int, char**);

int
main(int argc, char **argv)
{
	p9main(argc, argv);
	exits("main");
	return 99;
}
