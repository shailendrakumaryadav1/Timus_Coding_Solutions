#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[10001],y[10001],c[10001],n,i,j,t;
    scanf("%d",&n);
    if(n==0)
        printf("0\n"),exit(0);
    for(i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]),c[i]=i;

    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
    {
        if((x[j]>x[j+1])||(x[j]==x[j+1]&&y[j]>y[j+1]))
        {
                t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
                t=y[j];
                y[j]=y[j+1];
                y[j+1]=t;
                t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;
        }
    }
    for(i=0;i<n;i=i+2)
        printf("%d %d\n",c[i]+1,c[i+1]+1);
}

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x[10001],y[10001],c[10001]={0},n,i,j,k,a,pos,neg;
    scanf("%d",&n);
    if(n==0)
        printf("0\n"),exit(0);
    for(i=1;i<=n;i++)
        scanf("%d%d",&x[i],&y[i]);
    for(i=1;i<n;i++)
    {
        if(c[i]==1)
            continue;
        for(j=i+1;j<=n;j++)
        {
            if(c[j]==1)
                continue;
            pos=neg=0;
            for(k=1;k<=n;k++)
            {
                if(c[k]==1||k==i||k==j)
                    continue;

                a=(y[k]-y[i])*(x[j]-x[i])-(y[j]-y[i])*(x[k]-x[i]);
                if(a>0)
                    pos++;
                else if(a<0)
                    neg++;
            }
            if(pos==0||neg==0)
            {
                printf("%d %d\n",i,j);
                c[i]=1;
                c[j]=1;
                break;
            }
        }
    }
    for(i=1;i<=n;i++)
        if(c[i]==0)
        printf("%d ",i);
    printf("\n");
}
*/
