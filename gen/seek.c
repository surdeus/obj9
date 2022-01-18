#include <9/u.h>
#include <9/c.h>

vlong
seek(int fd, vlong offset, int whence)
{
	return lseek(fd, offset, whence);
}
