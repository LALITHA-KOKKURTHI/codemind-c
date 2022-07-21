#include<stdio.h>
int main()
{
    int n,i,r,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum+=r;
        product*=r;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}