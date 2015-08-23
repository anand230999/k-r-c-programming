# include<stdio.h>
int any(char s1[],char s2[]);
main()
{
	int n;
	char s1[20],s2[20];
	printf("enter string 1");
	scanf("%s",s1);
	printf("enter string 2");
	scanf("%s",s2);
	n=any(s1,s2);
	printf("%d\n",n);
}

int any(char s1[],char s2[])
{
	int i,j,k;
	for(i=k=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0' && s2[j]==s1[i];j++)
			return i;
	}
	return -1;
}
