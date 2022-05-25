#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int iv;
    float fv;
    scanf("%d",&n);
    fv=sqrt((double)n);
    iv=fv;
    if(iv==fv)
    printf("True");
    else
    printf("False");
    return 0;
}