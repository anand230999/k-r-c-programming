#include <stdio.h>
#define COLUMN 5
int main(void)
{
	int c, i, j, k;
	char line[COLUMN+1];
	i = 0;
	while ((c = getchar()) != EOF)
	if (c == '\n')
	{
		line[i] = c;
		line[i+1] = '\0';
		printf("%s", line);
		i = 0;
	}
	else if (i <= COLUMN-1)
	{
		line[i] = c;
		++i;
	}
	else
	{
		k = 0;
		for (j = i-1; (line[j] == ' ') && (j >= 0); --j) 
		++k ;
		line[j+1] = '\0';
		printf("%s", line);
		for (i = 0; i < k; ++i)
		line[i] = ' ';
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	printf("%s\n", line);
	return 0;
}
