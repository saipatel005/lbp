#include<stdio.h>
int main()
{
	float s,t,d;
	printf("Enter speed and time: ");
	scanf("%f%f",&s,&t);
	d=s*t;
	printf("%.3f\n",d);
	return 1;
}
