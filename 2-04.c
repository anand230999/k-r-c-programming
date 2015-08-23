# include<stdio.h>
void squez(char s1[],char s2[]);
main()
{
	char s1[20],s2[20];
	printf("enter string 1");
	scanf("%s",s1);
	printf("enter string 2");
	scanf("%s",s2);
	squez(s1,s2);
}

void squez(char s1[],char s2[])
{
	int i,j,k;
	for(i=k=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0' && s2[j]!=s1[i];j++);
		if(s2[i]=='\0')
			s1[k++]=s1[i];
	}
	s1[k]='\0';
	printf("%s\n",s1);
}
