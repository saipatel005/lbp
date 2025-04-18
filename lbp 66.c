#include<stdio.h>
int main()
{
	int a=0,b=1,temp,n,i,sum=0;
	printf("Enter no. of terms: ");
	scanf("%d",&n);
	printf("Fibinocci series upto %d terms \n",n);
	for(i=1;i<=n;i++)
	{
		sum+=a;
		printf("%d ",a);
		temp=a+b;
		a=b;
		b=temp;
	}
	printf("\nSum= %d\n",sum);
	
	return 1;
}