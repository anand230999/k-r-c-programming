# include<stdio.h>
main()
{
	int c,l;
	l=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
		l=0;
		if(c==' ')
		{
			if(l<=0)
			{ 
				putchar(c);
				l++;
			}
		}
		else
		putchar(c);
	}
}
