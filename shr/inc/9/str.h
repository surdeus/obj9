#ifndef _9STR_H
#define _9STR_H

/* string.h implementation.
	To literally replace standard string functions
	see the 9/string.h file. */

int p9strlen(char *s);
char *p9strcpy(char *dst, char *src);
char *p9strcat(char *dst, char *src);
int p9strcmp(char *s1, char *s2);
char *p9strdup(char *s);

char *p9strncpy(char *dst, char *src, int n);
char *p9strncat(char *dst, char *src, int n);

#endif
