#include<stdio.h>
int main()
{
	int i,n,r,sum=0,a,b;
	printf("Enter range: ");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		n=i;
		while(n>0)
		{
			if(n%2==0)
			{
				sum+=n;
			}
			n=n/10;
		}
	}
	printf("Sum= %d\n",sum);
	return 1;
}