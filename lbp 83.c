#include<stdio.h>
int main()
{
	int tm,p;
	float m;
	printf("Enter total marks: ");
	scanf("%d",&tm);
	printf("Enter percentage: ");
	scanf("%d",&p);
	m=(tm*p)/100;
	printf("Marks gained = %.2f\n",m);
	return 1;
}