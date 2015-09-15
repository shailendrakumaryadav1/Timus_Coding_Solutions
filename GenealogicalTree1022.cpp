#include<stdio.h>
int main()
{
    int n,i,j,k,t;
    scanf("%d",&n);

    int a[100],f[100]={};
    for(i=0;i<n;i++)
    {
        a[i]=i;
        while(1)
        {
            scanf("%d",&k);
            if(k==0)
                break;
            f[i]++;
        }
    }
    //for(i=0;i<n;i++)
        //printf("%d\t%d\n",a[i],f[i]);

    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
        if(f[j]<f[j+1])
    {
        t=f[j];
        f[j]=f[j+1];
        f[j+1]=t;
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]+1);
}


