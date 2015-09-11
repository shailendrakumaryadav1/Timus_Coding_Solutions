#include<stdio.h>
int main()
{
    int N,K,a[2000],b[2000],c[2000],i,j,k,z,na,nb,nc,s;
    scanf("%d%d",&N,&K);
    a[0]=1;
    b[0]=K-1;
    nc=na=nb=0;
    for(i=2;i<=N;i++)
    {
        for(j=0;j<=nc;j++)
            c[j]=0;
        nc=(na>nb)?na:nb;
        for(j=1;j<=K-1;j++)
        {
            z=0;
            for(k=0;k<=nc;k++)
            {
                s=a[k]+b[k]+c[k]+z;
                c[k]=s%10;
                z=s/10;
            }
            while(z>0)
            {
                nc++;
                c[nc]=z%10;
                z/=10;
            }
        }

        na=nb;
        //
        for(j=0;j<=nb;j++)
            a[j]=b[j];
        nb=nc;
        for(j=0;j<=nc;j++)
            b[j]=c[j];
    }
    for(i=nc;i>=0;i--)
        printf("%d",c[i]);
    printf("\n");
}
/*


#include<stdio.h>
int main()
{
    long long int N,K,a,b,c;
    int i;
    scanf("%lld%lld",&N,&K);
    a=1;
    b=K-1;
    for(i=2;i<=N;i++)
    {
        c=(K-1)*(b+a);
        a=b;
        b=c;
    }
    printf("%lld\n",c);
}
--------------

#include<stdio.h>
int main()
{
    long long int N,K,arr[180];
    int i;
    scanf("%lld%lld",&N,&K);
    arr[0]=1;
    arr[1]=K-1;
    for(i=2;i<=N;i++)
    {
        arr[i]=(K-1)*(arr[i-1]+arr[i-2]);
    }
    printf("%lld\n",arr[N]);
}
*/
