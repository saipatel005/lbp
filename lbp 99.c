#include<stdio.h>
int main()
{
	int n,r,s=0,p=1;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+(r*r);
		p=p*r;
		n=n/10;
	}
	printf("OTP= %d\n",s-p);
	return 1;
}