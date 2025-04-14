#include<stdio.h>
int main()
{
	int a,b,c,temp,res;
	printf("Enter a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
		res=a;
		while(c!=0)
		{
			temp=c;
			c=res%c;
			res=temp;
		}
	}
	printf("GCD= %d\n",res);
	
	return 1;
}