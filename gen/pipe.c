#include <9/u.h>
#define NOPLAN9DEFINES
#include <9/c.h>
#include <sys/socket.h>

/*
 * We use socketpair to get a two-way pipe.
 * The pipe still doesn't preserve message boundaries.
 * Worse, it cannot be reopened via /dev/fd/NNN on Linux.
 */
int
p9pipe(int fd[2])
{
	return socketpair(AF_UNIX, SOCK_STREAM, 0, fd);
}
