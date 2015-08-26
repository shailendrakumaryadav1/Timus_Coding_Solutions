
#include<stdio.h>
int main()
{
    int n,k,a,b,s1=0,s2=0;
    scanf("%d%d",&n,&k);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        s1=s1+a-2;
        s2=s2+b;
    }
    s1=s1+k-2;
    n=s1-s2;
    if(n<0)
        printf("Big Bang!\n");
    else
        printf("%d\n",n);
}
