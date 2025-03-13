#include<stdio.h>
int main()
{
	float m,km;
	printf("Enter meters: ");
	scanf("%f",&m);
	km=0.001*m;
	printf("%.3f\n",km);
	return 1;
}
