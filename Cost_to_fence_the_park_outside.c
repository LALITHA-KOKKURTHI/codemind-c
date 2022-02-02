
#include<stdio.h>
int main()
{
    int L,B,W,C,area,tot_cost,A;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if((L<W-W) || (B<W-W))
    printf("Impossible");
    else
    {
        A=((L+2*W)*(B+2*W))-L*B;    
        tot_cost=A*C;
        printf("%d",tot_cost);
    }
}
