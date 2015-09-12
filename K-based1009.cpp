#include<stdio.h>//no int bcoz There is a 32-bit integer overflow in test #2.
long long int N,K,sum;
void check(long long int n,long long int no1)
{
    long long int i,f;
    for(i=1;i<=N-2;i++)
    {
        if(n%100==0)
            return;
        n=n/10;
    }
    f=1;
    for(i=1;i<=no1;i++)
        f=f*(K-1);
    sum+=f;
}
void work(long long int k,long long int num,long long int no1)//no1 is used to count no. of 1s in the
                                        //corresponding binary no.
{
    if(k==N-1)
        check(num,no1);
    else
    {
        work(k+1,num*10+0,no1);
        work(k+1,num*10+1,no1+1);
    }
}
int main()
{
    scanf("%lld%lld",&N,&K);
    sum=0;
    work(0,0,0);
    sum=sum*(K-1);
    printf("%lld\n",sum);
}
/*
#include<stdio.h>
int main()//this is not a correct program..eg no. can be 10010
{
    int f,s,i,N,K;
    scanf("%d%d",&N,&K);
    f=1;
    s=0;
    for(i=N-1;i>=2;i--)
    {
        s=s+f*(N-i);
        f=f*(K-1);
    }
    f=1;
    for(i=1;i<N;i++)
        f=f*K;
    s=(f-s)*(K-1);
    printf("%d\n",s);
}
*/
