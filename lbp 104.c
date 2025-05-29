#include<stdio.h>
int main()
{
	float s,m;
	printf("Enter Time(seconds): ");
	scanf("%f",&s);
	m=s/60;
	printf("%.2f\n",m);
	return 1;
}