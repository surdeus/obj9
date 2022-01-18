#include	<9/9.h>
#include	<9/bio.h>

int
Bbuffered(Biobuf *bp)
{
	switch(bp->state) {
	case Bracteof:
	case Bractive:
		return -bp->icount;

	case Bwactive:
		return bp->bsize + bp->ocount;

	case Binactive:
		return 0;
	}
	fprint(2, "Bbuffered: unknown state %d\n", bp->state);
	return 0;
}
