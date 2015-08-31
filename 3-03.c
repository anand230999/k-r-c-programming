# include<stdio.h>
# define max 100
void expand(char s1[],char s2[]);
main()
{
	char s1[max],s2[max];
	printf("Enter string: ");
	scanf("%s",s1);
	expand(s1,s2);
	return 0;
}
void expand(char s1[],char s2[])
{
	char c;
	int i,j;
	i=j=0;
	while((c=s1[i++])!='\0')
	{
		if(s1[i]=='-' && s1[i+1]>=c)
		{
			i++;
			while(c<s1[i])
				s2[j++]=c++;
		}
		else
			s2[j++]=c;
	}
	s2[j]='\0';
	printf("%s\n",s2);
}
