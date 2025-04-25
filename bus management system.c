#include<stdio.h>
int main()
{
	int i,j,a[10][4],n,c=1,r=0,found=0;
	char ch;
	printf("SEATING ARRAGEMENT SYSTEM OF BUS\n");
	for(i=0;i<10;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			a[i][j]=c;
			c++;
			printf("%d\t",a[i][j]);
		}
	}
	do
	{
		printf("\nEnter seat number for registration: ");
		scanf("%d",&n);
		if(n>0 && n<=40)
		{
			for(i=0;i<10;i++)
			{
				printf("\n");
				for(j=0;j<4;j++)
				{
					if(a[i][j]==n)
					{
						a[i][j]=0;
						r++;
						found=1;
					}
					if(a[i][j]==0)
					{
						printf("XX\t");
					}
					else
					printf("%d\t",a[i][j]);
				}
			}
			printf("\nDo you want to continue registration: ");
			fflush(stdin);
			scanf(" %c",&ch);
		}
		else
		printf("The seat is already booked or not avaliable\n");
	}
	while(ch=='y' || ch=='Y');
	printf("\n\nMaximum capacity of Bus is: 40\n");
	printf("Number of seats registered are: %d\n",r);
	printf("Available seats are: %d\n",40-r);
	return 1;
}
