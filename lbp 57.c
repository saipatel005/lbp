#include<stdio.h>
int main()
{
    int n,r,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    n=-n;
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        count++;
        n=n/10;
    }
    printf("no. of even digits=%d\n",count);
    return 1;
}    