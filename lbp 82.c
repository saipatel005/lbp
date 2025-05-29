#include<stdio.h>
int main()
{
	int p,r,t;
	float si;
	printf("Enter Principle amount: ");
	scanf("%d",&p);
	printf("Enter rate of intrest: ");
	scanf("%d",&r);
	printf("Enter time period: ");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("Simple intrest= %.2f\n",si);
	return 1;
}