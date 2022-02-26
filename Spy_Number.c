#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    //sum of digit
    int sum=0,multi=1,rem;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        multi*=rem;
        num/=10;
    }
    if(sum==multi)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}