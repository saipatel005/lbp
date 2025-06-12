#include<stdio.h>
int main()
{
	int n,r,temp,p=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	temp=n;
	while(temp>=10)
	{
		temp=temp/10;
	}
	while(n!=0)
	{
		r=n%10;
		if(r==0)
		{
			p=1;
		}
		n=n/10;
	}
	if(temp!=0)
	{
		if(p==1)
		printf("Yes\n");
		else
		printf("No\n");
	}
	else
	printf("No\n");
	return 1;
}
