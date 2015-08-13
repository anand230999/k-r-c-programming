# include<stdio.h>
#define IN 1
#define OUT 0
main()
{
	int nw,nl,nc,c,state;
	nw=nl=nc=0;
	state=OUT;
	while((c=getchar())!=EOF)
	{
		++nc;
		if(c=='\n')
			++nl;
		if(c==' '||c=='\n'||c=='\t')
			state=OUT;
		else if(state==OUT)
		{
			state=IN;
			nw++;
		}
	}
printf("%d %d %d",nc,nw,nl);
}
