#include <9/u.h>
#include <9/c.h>

void
nulldir(Dir *d)
{
	memset(d, ~0, sizeof(Dir));
	d->name = d->uid = d->gid = d->muid = d->ext = "";
}
