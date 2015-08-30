#include<stdio.h>
int main()
{
    int n,i;
    double s,k;
    scanf("%d",&n);
    k=n*(n+1)/2.0;
    s=0;
    for(i=0;i<=n;i++)
    {
        s=s+k+i*(n-i+1);
        k=k-i;
    }
    printf("%.0lf\n",s);// or u can just write cout<<n*(n+1)*(n+2)/2;
}
/*
The formula is correct and is easily proven by solving the sums:

sum(i=0 -> N) sum(j=i -> N) (i + j)
*/
