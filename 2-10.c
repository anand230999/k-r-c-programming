# include<stdio.h>
int lower(int c);
main()
{
	char c;
	int n;
	printf(" enter upper case character");
	scanf("%c",&c);
	n=lower(c);
	printf("lower: %c\n",n);
}
int lower(int c)
{
	return (c>='A' && c<='Z') ? (c+'a'-'A'):c;
}
