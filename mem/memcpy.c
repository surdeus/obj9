
void *
p9memcpy(void *dst, void *src, int n)
{
	int i, m;
	unsigned long *wdst = dst;
	unsigned long *wsrc = src;
	unsigned char *cdst, *csrc;
 
	for(i = 0, m = n / sizeof(long); i < m; i++)
		*(wdst++) = *(wsrc++);
	 
	cdst = (unsigned char*)wdst;
	csrc = (unsigned char*)wsrc;

	for(i = 0, m = n % sizeof(long); i < m; i++)
		*(cdst++) = *(csrc++);
 
	return dst;
}

