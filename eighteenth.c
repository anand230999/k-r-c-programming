# include<stdio.h>
# define MAXLINE 1000
int getln(char s[],int lim);
void trailing(char line[],int lim);
main()
{
	char line[MAXLINE];
	int lim;
	while((lim=getln(line,MAXLINE))>0)
	{
		trailing(line,lim);
	}
		return 0;
}
int getln(char s[],int lim)
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
void trailing(char line[],int lim)
{
	char a[MAXLINE];
	int z,i,j;
	j=0;
	z=0;
	for(i=0;i<lim;i++)
	{
		if(line[i]=='\n')
		a[j]='\0';
		if(line[i]==' ' && line[i+1]==' ')
		{	
			a[j]=line[i];
			z=1;
		}
		if(z==1)
		{
			++j;
			z=0;
		}
		else
		{
			a[j]=line[i];
			j++;
		}
	}
		a[j]='\0';
		printf("%s",a);
}

		
