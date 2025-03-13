#include<stdio.h>
#include<math.h>
int main()
{
	int a,m,x;
	printf("Enter any number: ");
	scanf("%d",&a);
	printf("Enter the power value: ");
	scanf("%d",&m);
	x=pow(a,m);
	printf("%d\n",x);
	return 1;
}
