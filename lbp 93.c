#include<stdio.h>
int main()
{
	int n,r,rev=0,temp;
	printf("Enter any number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	printf("%d\n",rev+temp);
	return 1;
}