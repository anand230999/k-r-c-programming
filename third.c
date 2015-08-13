# include<stdio.h>
main()
{
	float far,cel;
	float low,step,upper;
	low=0;
	upper=300;
	step=20;
	far=low;
	printf("\t Temperature Conversion \t\n");
	while(far<=upper)
	{
		cel=((far-32.0)*(5.0/9.0));
		printf("%3.0f\t%6.2f\n",far,cel);
		far=far+20;
	}
}
