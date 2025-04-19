#include<stdio.h>
int main()
{
	int i,n,r,rev=0,temp;
	printf("Enter any number: ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(temp==rev)
	printf("Palindrome\n");
	else
	printf("Not a palindrome\n");
	return 1;
}