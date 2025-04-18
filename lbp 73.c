#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%3==0)
		{
			sum+=r;
		}
		n=n/10;
	}
	printf("%d\n",sum);
	return 1;
}