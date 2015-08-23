#include<stdio.h>
int main()
{
    int n,k,b,sb=0,sd=0;
    scanf("%d%d",&n,&k);

    while(n--)
    {
        scanf("%d",&b);
        if(b>k)
            sb=sb+b-k;
        else
            sd=sd+k-b;
    }
    printf("%d %d\n",sb,sd);
}

