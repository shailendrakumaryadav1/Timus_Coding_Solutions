#include<stdio.h>
int main()
{
    int x[100]={},y[100]={},c[100]={},n=5,i,j,k,z,x1,x2,y1,y2;
    double a,b;
    for(i=1;i<=n;i++)
        scanf("%d%d",&x[i],&y[i]);
    z=0;
    for(i=1;i<n;i=i+2)
    {
        if(c[i]!=0)
            continue;
        j=i+1;
        {
            if(c[j]!=0)
                continue;
            x1=x[i];
            x2=x[j];
            y1=y[i];
            y2=y[j];
            if(x1*x1*x2-x2*x2*x1==0)
                continue;
            a=(x2*y1-x1*y2)*1.0/(x1*x1*x2-x2*x2*x1);
            b=(x1*x1*y2-x2*x2*y1)*1.0/(x1*x1*x2-x2*x2*x1);
            if(a>=0)
                continue;
            z++;
            for(k=1;k<=n;k++)
            {
                if(c[k]!=0)
                    continue;
                if(a*x[k]*x[k]+b*x[k]-y[k]==0)
                    c[k]=z;
            }
        }
    }

    printf("%d\n",z);
}













