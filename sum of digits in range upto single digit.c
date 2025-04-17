#include<stdio.h>
int main()
{
	int i,n1,n2,r,sum=0,totalsum=0,temp;
	printf("Enter range:\n");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		temp=i;
		while(temp>=10)
		{
			sum=0;
			while(temp>0)
			{
				r=temp%10;
				sum=sum+r;
				temp=temp/10;
			}
			temp=sum;
		}
		printf("%d\n",sum);
		
		totalsum=totalsum+sum;
	}
	printf("total sum= %d\n",totalsum);
	return 1;
}