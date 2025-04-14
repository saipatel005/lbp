#include<stdio.h>
int main()
{
	int i,r,n,sum;
	printf("Enter any number: ");
	scanf("%d",&n);
	sum=1;
	for(i=1;i<n;i++)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits = %d\n",sum);
	return 1;
}
