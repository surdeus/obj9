
void *
p9memset(void *dst, int v, int n)
{
	int i, m; 
	unsigned long bigc;
	unsigned long *wdst = dst ;
	unsigned char *cdst; 
	char *p = (char *)dst ;
	char c = (char)v ;
	
	for(i=0 ; i < sizeof(bigc) ; ++i)
		((char *)&bigc)[i] = c ;

	for(i=0, m = n/sizeof(bigc) ; i < m ; ++i)
		*(wdst++) = bigc;

	cdst = (unsigned char *)wdst ;
	for(i=0, m = n % sizeof(bigc) ; i < m ; ++i)
		*(cdst++) = c ;
	
	return dst ;
}

