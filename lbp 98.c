#include<stdio.h>
int main()
{
	int n,r,s=0,p=1;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		p=p*r;
		n=n/10;
	}
	if(p>1)
	printf("%d\n",p-s);
	else
	{
		p=0;
		printf("%d\n",p-s);	
	}
	return 1;
}