#include<stdio.h>
int main()
{
    int n,i,arr[100],e=0,o=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            
            o=o+arr[i];
        }
        else
        {
            e=e+arr[i];
        }
    }
    sum=o+e;
    
    printf("%d",sum);
}