#include<stdio.h>
int main()
{
    int N,K,a[5000],b[5000],c[5000],i,j,k,z,na,nb,nc,s;
    scanf("%d%d",&N,&K);
    a[0]=1;
    b[0]=K-1;
    nc=na=nb=0;
    for(i=2;i<=N;i++)
    {
        for(j=0;j<=nc;j++)
            c[j]=0;
        nc=(na>nb)?na:nb;
        for(j=1;j<=K-1;j++)//You don't necessarily use *. + is enough. And quicker.
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
