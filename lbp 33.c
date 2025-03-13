#include<stdio.h>
int main()
{
	int i,count=0;
	char str[100];
	char AEIOUaeiou;
	printf("Enter any string: ");
	scanf("%s",str);
	for(i=1;str[i]!='\0';i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			count++;
		}
	}
	printf("%d",count);
	return 1;
}
