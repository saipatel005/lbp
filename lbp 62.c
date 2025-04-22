#include<stdio.h>
#include<math.h>
int main()
{
	int i,n1,n2,r,sum=0,temp,count,tempcount;
	printf("Enter range: ");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		count=0;
		tempcount=i;
		while(tempcount!=0)
		{
			count++;
			tempcount=tempcount/10;
		}
		temp=i;
		sum=0;
		while(temp!=0)
		{
			r=temp%10;
			sum=sum+(pow(r,count));
			temp=temp/10;
		}
		if(sum==i)
		printf("%d\n",i);
	}
	return 1;
}