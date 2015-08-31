# include<stdio.h>
# include<string.h>
# define max 100
void itob(int n, char s[],int b);
main()
{
	int n,b;
	char s[max];
	printf("Enter the integer: ");
	scanf("%d",&n);
	printf("Enter the base value: ");
	scanf("%d",&b);
	itob(n,s,b);
	return 0;
}
void itob(int n, char s[], int b)
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
	if((sign=n)<0)
		n=-n;
	i=0;
	do
	{
		j=n%b;
		s[i++]=(j<=9) ? j+'0':j+'a'-10;
	}
	while((n/=b)>0);
	if(sign<0)
		s[i++]='-';
	s[i]='\0';
	reverse(s);
	printf("%s\n",s);
}
