#include<stdio.h>
int main()
{
    int tv,tc,s,e,sum;
    scanf("%d%d%d%d",&tv,&tc,&s,&e);
    if(s==e)
        sum=tv;
    else if(s<e)//Worm can move both left and right.
        sum=2*tc+(e-s-1)*(tv+2*tc);
    else
        sum=2*(tv+tc)+(s-e-1)*(tv+2*tc);
    printf("%d\n",sum);
}
