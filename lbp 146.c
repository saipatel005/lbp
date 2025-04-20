#include<stdio.h>
int main()
{
	int i,n,sum=0,temp,r,rev=0;
	printf("Enter limit: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d number: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		rev=0;
		while(temp>0)
		{
			r=temp%10;
			rev=(rev*10)+r;
			temp=temp/10;
		}
		if(a[i]==rev)
		{
			printf("%d\n",a[i]);
			sum=sum+a[i];
		}
	}
	printf("Sum= %d\n",sum);
	return 1;
}