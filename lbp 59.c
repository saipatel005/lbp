#include<stdio.h>
int main()
{
	int a,b,i,j,count,primecount=0;
	float avg,sum;
	printf("Enter range: ");
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
			printf("%d\n",i);		
			sum+=i;
			primecount++;
		}
	}
	avg=sum/primecount;
	printf("Average= %.2f\n",avg);
	return 1;
}