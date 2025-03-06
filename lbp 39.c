#include<stdio.h>
#include<math.h>
int main()
{
	int a,m,n,x;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter 1st power: ");
	scanf("%d",&m);
	printf("Enter 2nd power: ");
	scanf("%d",&n);
	x=pow(a,m*n);
	printf("%d",x);
	return 1;
}
