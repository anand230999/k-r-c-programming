# include<stdio.h>
# include<string.h>
# define abs(x) ((x) < 0 ? -(x) : (x))
# define max 100
void itob(int n, char s[]);
main()
{
	int n;
	char s[max];
	printf("Enter the integer: ");
	scanf("%d",&n);
	itob(n,s);
	return 0;
}
void itob(int n, char s[])
{
	int i,j,sign;
	char a[max];
	void reverse(char s[])
	{
		int c,i,j;
		for(i=0,j=strlen(s)-1;i<j;i++,j--)
		{
			c=s[i];
			s[i]=s[j];
			s[j]=c;
		}
	}
	sign=n;
	i=0;
	do
	{
		s[i++]=abs(n%10) + '0';
	}
	while((n/=10)!=0);
	if(sign<0)
		s[i++]='-';
	s[i]='\0';
	reverse(s);
	printf("%s\n",s);
}
