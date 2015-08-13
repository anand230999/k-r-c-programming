# include<stdio.h>
void temp(float m,float n);
main()
{
	float far,cel;
	float low,step,upper;
	low=0;
	upper=300;
	step=20;
	far=300;
	printf("\t Temperature Conversion \t\n");
	while(far>=low)
	{
		temp(far,low);
		far=far-20;
	}
	return 0;
}
void temp(float far,float cel)
{
	cel=((far-32.0)*(5.0/9.0));
	printf("%3.0f\t%6.2f\n",far,cel);
}
