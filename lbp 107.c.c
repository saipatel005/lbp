#include<stdio.h>
#include<string.h>
int main()
{
	int len,i;
	char str[100],temp[100],ch;
	printf("Enter any string: ");
	gets(str);
	strcpy(temp,str);
	for(i=0;str[i]!='\0';i++);
	len=i;
	for(i=0;i<len/2;i++)
	{
		ch=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=ch;
	}
	printf("Reversed string= %s\n",str);
	if (strcmp(temp,str)==0)
	printf("It is a palindrome\n");
	else
	printf("Not a palindrome\n");
	return 1;
}