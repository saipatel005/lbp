#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter any string: ");
	scanf("%s",str1);
	printf("Enter another string: ");
	scanf("%s",str2);
	strcat(str1,str2);
	printf("%s\n",str1);
	return 1;
	
}