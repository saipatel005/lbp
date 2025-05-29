#include<stdio.h>
int main()
{
	int n,es=0,os=0,d,r;
	printf("Enter Bill amount: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		es=es+r;
		else
		os=os+r;
		n=n/10;
	}
	if(os<0)
	d=es-os;
	else
	d=os-es;
	printf("Discount= %d\n",d);
	return 1;
}