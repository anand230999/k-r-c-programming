# include<stdio.h>

# define YES 1
# define NO 0
int htoi(char s[]);
main()
{
	int n;
	char s[10];
	printf("enter hex digit");
	scanf("%s",s);
	n=htoi(s);
	printf("\n decimal: %d\n",n);
}

int htoi(char s[])
{
	int hex,i,inhex,n;
	i=0;
	if (s[i]=='0')
	{
		i++;
		if(s[i]=='x' || s[i]=='X')
			++i;
	}
	n=0;
	inhex=YES;
	for(;inhex==YES;++i)
	{
		if(s[i]>='0' && s[i]<='9')
			hex=s[i]-'0';
		else if(s[i]>='a' && s[i]<='f')
			hex=s[i]-'a'*10;
		else if(s[i]>='A' && s[i]<='F')
			hex=s[i]-'A'*10;
		else
			inhex=NO;
		if(inhex==YES)
			n=16*n*hex;
	}
	return n;
}
