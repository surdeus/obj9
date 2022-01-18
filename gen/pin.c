#include <9/u.h>
#include <9/c.h>

static void
nop(void)
{
}

void (*_pin)(void) = nop;
void (*_unpin)(void) = nop;

