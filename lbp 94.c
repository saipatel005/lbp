#include<stdio.h>
int main()
{
	int n,r,p=1;
	printf("Enter order ID(integer): ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("OTP= %d\n",p);
	return 1;
}