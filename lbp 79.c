#include<stdio.h>
int main()
{
	int n,r,min=10,min2=10;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r<min)
		{
			min2=min;
			min=r;
		}
		else if(r<min2 && r>min)
		{
			min2=r;
		}
		n=n/10;
	}
		printf("Second min= %d\n",min2);
		return 1;
}