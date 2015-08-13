#include <stdio.h>
#define MAXLINE 1000
int getlines(char line[], int maxline);
main()
{
	int len,i;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 80;
	while ((len = getlines(line, MAXLINE)) > 0)
	if (len >= max) 
	{
		for(i=0;i<=len;i++)
		printf("%c",line[i]);
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
