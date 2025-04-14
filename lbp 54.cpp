#include<stdio.h>
void factorial();
int main()
{
	factorial();
	return 1;
}
void factorial()
{
	int i,n,f=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial %d  is: %d\n",n,f);
}