#include<stdio.h>
int main()
{
    int t,d,n,k;
    scanf("%d%d",&n,&k);
    t=0;d=1;
    while(d<n&&d<k)
    {
        d=d*2;
        t++;
    }
    t=t+(n-d+k-1)/k;
//integer ceiling of x/y can be done in a single step like this:(x + y - 1)/y
    printf("%d\n",t);
}

