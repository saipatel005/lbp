#include<stdio.h>
int main()
{
	int a,b,i,j,count=0,r;
	printf("Enter a and b:\t");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=i;j++)
			{
				r=i%10;
				if(r==9)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count==2)
				{
					printf("%d ",i);
				}
			
		}
	}
	return 1;
	
}
