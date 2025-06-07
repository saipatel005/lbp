#include<stdio.h>
int main()
{
	int i,n,r,max=0,max2=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		r=n%10;
		if(r>max)
		{
			max2=max;
			max=r;
		}
		else if(r>max2 && r<max)
		{
			max2=r;
		}
		n=n/10;
	}
	printf("Second Max= %d\n",max2);
	return 1;
}
