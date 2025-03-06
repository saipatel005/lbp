#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d\t",i);
	}
	return 1; 
}
