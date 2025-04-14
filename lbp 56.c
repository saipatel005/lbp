#include<stdio.h>
int main()
{
    int n,r,i,max=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    n=-n;
    while(n>0)
    {
        r=n%10;
        if(r>max)
        {
            max=r;
        }
        n=n/10;
    }
    printf("max=%d\n",max);
    return 1;
}    