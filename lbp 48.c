#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter any two numbers: ");
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	printf("%d\n",a);
	return 1;
}