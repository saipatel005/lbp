#include<stdio.  h>
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	if(n%2!=0)
	{
		printf("Weird\n");
	}
	if(n%2==0 && n>=2 && n<=5)
	{
		printf("Not Weird\n");
	}
	if(n%2==0 && n>=6 && n<=20)
	{
		printf("Weird\n");
	}
	if(n%2==0 && n>20)
	{
		printf("Not Weird\n");
	}
	return 1;
}