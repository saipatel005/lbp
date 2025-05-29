#include<stdio.h>
int main()
{
	int a,b,i,j,count=0,sum=0;
	printf("Enter upper and lower limits: ");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		sum+=i;
	}
	printf("Sum of prime numbers between %d and %d is: %d\n",a,b,sum);
	return 1;
}
