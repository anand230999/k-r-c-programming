#include <stdio.h>
#define MAXLINE 1000
int getlines(char line[], int maxline);
main()
{
	int len,i;
	char s[MAXLINE];
	while ((len = getlines(s, MAXLINE)) > 0)
	if (len >0) 
	{
		for(i=len;i>=0;i--)
		printf("%c",s[i]);
	}
	return 0;
}
int getlines(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
