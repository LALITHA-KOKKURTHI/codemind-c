#include<stdio.h>
int main()
{
    int a[100],n,i,s=0,c=0;
    int avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avg)
        c++;
        
    }
    printf("%d",c);
    return 0;
}