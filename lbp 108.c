#include<stdio.h>
int main()
{
	int count=0,i;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	printf("%s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(!((str[i]>='A' && str[i]<='Z')||
		(str[i]>='a' && str[i]<='z')||
		( str[i]>='0' && str[i]<='9'))||(str[i]==' '))
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 1;
}