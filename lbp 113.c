#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter a string: ");
	scanf("%s",str1);
	printf("Enter another string: ");
	scanf("%s",str2);
	printf("%s%s%s%s",str1,str2,str2,str1);
	return 1;
}