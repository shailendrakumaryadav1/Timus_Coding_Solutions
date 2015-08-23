#include<stdio.h>
#include<math.h>
int main()
{
    double v,a,k,n;
    scanf("%lf%lf%lf",&v,&a,&k);
    n=k/(k-1)*v*v/10*sin(2*(a*3.1415926535/180));
    printf("%.2lf\n",n);
}
