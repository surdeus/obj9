
int
p9strnlen(char *s, int n)
{
	int i;
	char *ps = s ;

	i = 0 ;
	while(*ps && i < n){
		++ps;
		++i;
	}

	return i ;
}
