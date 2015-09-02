#include<stdio.h>
int main()
{
    int l,k,h,b;
    scanf("%d%d%d",&l,&k,&h);
    b=l/k*h;
    printf("%d.00000000 ",b);
    if(l%k==0)
        printf("%d.00000000\n",b);
    else
        printf("%d.00000000\n",b+h);
/*
    if(l%k==0)
        printf("%.8lf\n",b*1.0);
    else
        printf("%.8lf\n",b*1.0+h);
*/
}


