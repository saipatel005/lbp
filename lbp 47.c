#include<stdio.h>
int main()
{
	int a,b,i,j,count,sum=0;
	printf("Enter a and b:\t");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d \n",i);
			sum=sum+i;	
		}
	}
	printf("sum= %d\n",sum);
	return 1;
	
}
