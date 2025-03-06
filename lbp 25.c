#include<stdio.h>
int bd(char str[40],int n);
int main()
{
	char str[40];
	int d,r;
	printf("Enter month: ");
	scanf("%s",str);
	printf("Enter date: ");
	scanf("%d",&d);
	r=bd(str,d);
	printf("%d",r);
	return 1;
}
int bd(char str[40],int n)
{
	if(str[0]=='j' && str[1]=='u' && str[2]=='l' && str[3]=='y' && n==5)
	return 1;
	else
	return 0;
}
