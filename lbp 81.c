#include<stdio.h>
int main()
{
	int n,r,temp=1,result=0,x;
	printf("Enter any number: ");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%10;
		if(r==0)
		{
			r=5;
		}
		result=result+(r*temp);
		temp=temp*10;
		n=n/10;
	}
	if(x==0)
	result=5;
	printf("%d\n",result);
	return 1;	
}