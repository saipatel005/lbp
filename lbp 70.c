#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("Enter any number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			sum+=r;
		}
		n=n/10;
	}
	printf("Sum of even digits of %d is %d\n",temp,sum);
	return 1;
}