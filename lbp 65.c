#include<stdio.h>
int main()
{
    int i=1,n,r,sum=0,temp;
    printf("Enter any number: ");
    scanf("%d",&n);
    temp=n;
    while(n>=i)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(temp%sum==0)
    printf("yes\n");
    else
    printf("no\n");
    return 1;
}