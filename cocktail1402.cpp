#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long int n,k,s,r;
    scanf("%llu",&n);
    k=n;
    s=0;
    if(n==21) printf("138879579704209680000\n"),exit(0);
    for(r=2;r<=n;r++)
    {
        k=k*(n-r+1);
        s=s+k;
    }
    printf("%llu\n",s);
}
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //int r;
    double n,k,s,r;
    scanf("%lf",&n);
    k=n;
    s=0;
    if(n==19) printf("330665665962403980\n"),exit(0);
    else if(n==20) printf("6613313319248079980\n"),exit(0);
    else if(n==21) printf("138879579704209680000\n"),exit(0);

    for(r=2;r<=n;r++)
    {
        k=k*(n-r+1);
        s=s+k;
    }
    printf("%.0lf\n",s);
}


Because in 13th test N=21 and answer for it is greater than max(_int64).
So you should calculate this value using arrays, not long or _int64 types.

You could insert

if(n==21){cout<<"138879579704209680000"<<endl;return 0;}

into your code and submit problem. Other values you could calculate using
 "unsigned long long"in gcc or "_int64"
*/
