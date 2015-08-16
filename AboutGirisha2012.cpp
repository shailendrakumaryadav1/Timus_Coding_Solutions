#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    t=300;

    t=t-60;
    n=12-n;

    if(n*45>t)
        printf("NO\n");
    else
        printf("YES\n");
}

