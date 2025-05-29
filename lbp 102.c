#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	if(a!=b)
	printf("%d\n",a+b);
	else
	printf("%d\n",2*(a+b));
	return 1;
}