# include<stdio.h>
main()
{
	int l,c;
	l=0;
	while((c=getchar())!=EOF)
	if(c=='\n'||c=='\t'||c==' ')
	l++;
	printf("%d",l);
}
