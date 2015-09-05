#include<stdio.h>
int main()
{
    unsigned int n,a,b,c;
    scanf("%u",&n);
    a=2;
    b=0;
    while(n--)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%u\n",c);
}

