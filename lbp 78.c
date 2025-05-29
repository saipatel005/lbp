#include<stdio.h>
int main()
{
	int i,n,r,max=0,max2=0;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=n%10;
		if(r>max)
		{
			max=r;
		}
		n=n/10;
	}
	printf("Max= %d\n",max);
	printf("%d\n",i);
	return 1;
}