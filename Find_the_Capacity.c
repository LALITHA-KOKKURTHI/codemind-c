#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d %d %d",&s,&t,&b);
    int cap=2*s*t*b*512;
    cap=cap/1024;
    printf("%dKB",cap);
}