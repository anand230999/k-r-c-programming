# include<stdio.h>
# define max 100
void escape(char s[],char t[]);
main()
{
	char s[max],t[max];
	printf("Enter string");
	scanf("%s",t);
	escape(s,t);
	return 0;
}
void escape(char s[],char t[])
{
	int i,j;
	for(i=j=0;t[i]!='\0';i++)
	{
		switch(t[i])
		{
			case '\n':
				s[j++]='\\';
				s[j++]='n';
				break;
			case '\t':
				s[j++]='\\';
				s[j++]='t';
				break;
			default:
				s[j++]=t[i];
				break;
		}
	}
	s[j]='\0';
	printf("%s\n",s);
}
