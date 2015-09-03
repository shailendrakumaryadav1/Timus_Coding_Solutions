#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{

    double n,x,y,k;
    int ii;
    scanf("%lf%lf%lf",&x,&y,&n);
if(x<=y)
        printf("0\n"),exit(0);

    y=y+0.05;
    k=(x*100*n-y*100*n)/(y*100-100);
    //k=(x*n-y*n)/(y-1);
    //System.out.println(k);

    if(k<0)
    printf("0\n"),exit(0);

    k=k+0.000000000001;
    k=ceil(k);

    printf("%.0lf\n",k);
}








