#include<stdio.h>
int main()
{
	int a,b,i,rev=0,r,temp;
	printf("Enter range ");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		temp=i;
		while(a>0)
		{
			r=a%10;
			rev=rev*10+r;
			a=a/10;
		}
		if(temp==rev)
		{
			printf("%d\n",rev);
		}
		a++;
	}
	return 1;
}