# include<stdio.h>
main()
{
	int i,lim,c;
	i=0;
	char s[100];
	while((c=getchar())!=EOF)
	{
		if(c!=EOF)
		{
			if(i<=lim-1)
			{
				s[i]=c;
				++i;
			}
		}
	}
}
