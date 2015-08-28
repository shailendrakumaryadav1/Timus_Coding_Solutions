#include<stdio.h>

int gcd(int m ,int n)//  Euclid's algorithm for finding gcd
{
//if(m==0)
//return(n);
if(n==0)
return m;
return gcd(n,m%n);
}
int main()
{
    int r,c;
    scanf("%d%d",&c,&r);
    c--;
    r--;

    printf("%d\n",r+c-gcd(r,c));
}
//it is interesting to note that In a Cartesian coordinate system,
//gcd(a, b) can be interpreted as the number of points with integral coordinates on the straight line
// joining the points (0, 0) and (a, b), excluding (0, 0).
/*
int gcd(int m ,int n)
{
if(m==n)
return m;
else if(m>n)
return gcd(m-n,n);
else
return gcd(m,n-m);
}
*/


