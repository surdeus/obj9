
int
p9strlen(char *s)
{
	char *ps = s ;
	while(*ps)
		++ps;
	return ps - s ;
}

int
p9strnlen(char *s, int n)
{
	int i;
	i = 0 ;
	while(*ps && i < n){
		++ps;
		++i;
	}
	return i ;
}
