#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=1;
    if(n==1)
        printf("1.000000\n");
    else
    printf("%.6lf\n",r+r*1.0/sin(3.14159265/n ));
}

