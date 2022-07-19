#include<stdio.h>
int add_digits(int n)
{
    int sum=0,d;
    while(n!=0)
    
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
            
        }
        if(sum<10)
        {
    
    return sum;
}
return add_digits(sum);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    
    
        k=add_digits(n);
    
            printf("%d",k);
        }
        
    