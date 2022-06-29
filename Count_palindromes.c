#include<stdio.h>
int pal(int n)
{
    int rev=0,r;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    //scanf("%d",&s);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==pal(a[i]))
        {
            c++;
        }
    }
    printf("%d",c);
}