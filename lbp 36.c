#include<stdio.h>
 int fib(int n)
 {
 	if(n==0)
 	{
 		return 0;
	}
	if(n==1)
	return 1;
	else
	return fib(n-1)+fib(n-2);	
 }
 int main()
 {
 	int n,r,i;
 	printf("Enter a number: ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
	 {
 		r=fib(i);
 		printf("%d\t",r);
	}
 }
 
