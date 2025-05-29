#include<stdio.h>
int main()
{
	int i;
	char str[100];
	printf("Enter any string: ");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			printf("First capital letter in %s is %c\n",str,str[i]);
			break;
		}
		i++;
	}
	if(str[i]=='\0')
	{
		printf("No capital letters arevthere in the given string\n");
	}
	return 1;
}