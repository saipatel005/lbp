#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	if(n1>21)
	printf("%d\n",n2);
	else if(n2>21)
	printf("%d\n",n1);
	else if(n1<=21 && n2<=21)
	{
		if(n1>n2)
		printf("%d\n",n1);
		else
		printf("%d\n",n2);
	}
	return 1;
}
