#include<stdio.h>
int main()
{
	int i,j,k,a,sum=0;
	printf("Enter i,j,k values: ");
	scanf("%d%d%d",&i,&j,&k);
	for(a=i;a<=j;a++)
	{
		sum=sum+a;
	}
	for(a=j-1;a>=k;a--)
	{
		sum=sum+a;
	}
	printf("sum= %d\n",sum);
	return 1;
}