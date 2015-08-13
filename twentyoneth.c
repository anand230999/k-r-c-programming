#include <stdio.h>
#define TABLEN 5
#define MAXLINE 1000
void print_detab(char line[]);
int getlines(char line[], int maxline);
int main(void)
{
	int len;
	char line[MAXLINE];
	while ((len = getlines(line, MAXLINE)) > 0)
	print_detab(line);
	return 0;
}
int getlines(char l[], int lim)
{
	int c, i;
	for (i = 0; (i < lim -1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
	l[i] = c;
	if (c == '\n')
	{
		l[i] = c;
		++i;
	}
	l[i] = '\0';
	return i;
}
void print_detab(char s[])
{
	int i, j, n;
	if (s[0] == ' ')
	for (i = 0; i < TABLEN; ++i)
	putchar('\t');
	for (i = 0; (s[i] != '\0'); ++i)
	{
		if (s[i] != ' ')
		putchar(s[i]);
		else if (n = (i % TABLEN)) 
		for (j = 1; j <= (TABLEN - n); ++j)
		putchar('\t');
		else
		putchar('\t');
	}
}
