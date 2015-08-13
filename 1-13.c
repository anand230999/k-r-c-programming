# include<stdio.h>
#define IN 1
#define OUT 0
main()
{
	int c,nw,state,i;
	nw=0;
	state=OUT;
	while((c=getchar())!=EOF)
	{
		
		if(c==' '||c=='\n'||c=='\t')
		{
			state=OUT;
			nw=0;
		}	
		else if(state==OUT && nw>0)
		{
			state=IN;
			for(i=0;i<=nw;i++)
			printf("|");
			nw=0;
			printf("\n");
		}
		if(state==IN||nw==0)
		{ 
			nw++;
		}
	}
}
