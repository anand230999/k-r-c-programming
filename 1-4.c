# include<stdio.h>
main()
{
	float far,cel;
	float low,step,upper;
	low=0;
	upper=300;
	step=20;
	cel=low;
	printf("\t Temperature Conversion \t\n");
	while(cel<=upper)
	{
		far=((cel*9.0/5.0)+32);
		printf("%3.0f\t%6.2f\n",cel,far);
		cel=cel+20;
	}
}
