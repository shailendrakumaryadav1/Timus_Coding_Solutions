#include<stdio.h>
#include<stdlib.h>
#include<math.h>
bool isprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n*1.0);i++)//(i*i<=n)
        if(n%i==0)
        break;
    if(i<=sqrt(n*1.0))//(i*i<=n)
        return false;
    return true;
}
int main()
{
    int k,i,max,a;
    scanf("%d",&k);
    int *arr=new int [k];
    max=0;
    for(i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }
    int *p=new int[max];
    a=2;
    i=0;
    while(i<max)
    {
        if(isprime(a)==true)
            p[i++]=a;
        a++;
    }
    for(i=0;i<k;i++)
        printf("%d\n",p[arr[i]-1]);
        return EXIT_SUCCESS;
}//you can check only 6*i-1 or 6*i+1 integers;prime number can't be any other type:))

/*
I think they have some limit on the max size of the program
that you can submit. Btw generating the prime array is
quite easy, if you have to check if x is prime then check
the numbers only from 2 to sqrt(x) if they are x's
divisors. Since you can generate the array bottom->up and
it doesn't make sense checking if composite numbers are x's
divisors, then you can use the already generated part
(discarding when you go > sqrt(x)) to check if it divides x.
If x is prime then you put it in the array. Btw you can
treat 2 as special case(it is the only prime that is even)
and try to add the numbers from 3-> using +2 as step.
*/




