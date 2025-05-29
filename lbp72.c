#include<stdio.h>
int main()
{
	int i,n,r,count=0,sum;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{	
		r=n%10;
		if(r==2 || r==3|| r==5 || r==7)
		{
			sum=sum+r;
			printf("%d\n",r);
		}
		n=n/10;
	}
	printf("\nSum= %d\n",sum);
	return 1;
}