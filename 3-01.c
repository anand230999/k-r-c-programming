# include<stdio.h>
int binsearch(int x, int v[], int n);
main()
{	
	int i,a[100],n,x,j;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("Enter numbers");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the number to be search");
	scanf("%d",&x);
	j=binsearch(x,a,n);
	if(j!=-1)
	printf("%d\n",j);	
	else
	printf("not present\n");
}
int binsearch(int x,int a[],int n)
{
	int i,low,mid,high;
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high && x!=a[mid])
	{
		if(x<a[mid])
		high=mid+1;
		else
		low=mid+1;
		mid=(low+high)/2;
	}
	if(x==a[mid])
	return ++mid;
	else
	return -1;
}
