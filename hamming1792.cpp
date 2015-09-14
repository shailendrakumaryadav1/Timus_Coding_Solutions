#include<stdio.h>
int main()
{
    int k[5],r[4],rr[4],i,j,s;
    for(i=1;i<5;i++)
        scanf("%d",&k[i]);
    for(i=1;i<4;i++)
        scanf("%d",&r[i]);
    for(i=1;i<=3;i++)
    {
        s=0;
        for(j=1;j<=4;j++)
        {
            if(i==j)
                continue;
            s=s+k[j];
        }
        rr[i]=s%2;
    }
    for(i=1;i<=3;i++)
        rr[i]=(r[i]+rr[i])%2;
    s=rr[1]*4+rr[2]*2+rr[3];
    switch(s)
    {
    case 1:
        r[3]=(r[3]+1)%2;
        break;
    case 2:
        r[2]=(r[2]+1)%2;
        break;
    case 3:
        k[1]=(k[1]+1)%2;
        break;
    case 4:
        r[1]=(r[1]+1)%2;
        break;
    case 5:
        k[2]=(k[2]+1)%2;
        break;
    case 6:
        k[3]=(k[3]+1)%2;
        break;
    case 7:
        k[4]=(k[4]+1)%2;
        break;
    }

    for(i=1;i<5;i++)
        printf("%d ",k[i]);
    for(i=1;i<4;i++)
        printf("%d ",r[i]);
    printf("\n");
}
