#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter b value: ");
	scanf("%d",&b);
	printf("Before swapping: a=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping: a=%d b=%d\n",a,b);
	return 1;
}