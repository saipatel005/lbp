#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Array size: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d number: ",i+1);
		scanf("%d",&a[i]);
	}
	int min=a[0],max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Max= %d\n",max);
	printf("Min= %d\n",min);
	printf("%d\n",max-min);
	return 1;
}