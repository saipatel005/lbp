#include<stdio.h>
int main()
{
	int es=0,ps=0,n,r;
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		es+=r;
		if(r==2 || r==3 || r==5 || r==7)
		ps+=r;
		n=n/10;
	}
	printf("Discount amount= %d\n",es*ps);
	return 1;
}
