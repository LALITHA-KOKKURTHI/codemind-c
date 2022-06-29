#include<stdio.h>
int dig_sum(int n)
{
    int s=0,i;
    while(n!=0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,s=0;
    scanf("%d",&n);
    //scanf("%d",&s);
    
    int a[n],i;
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+dig_sum(a[i]);
    }
        
    printf("%d ",s);
}
