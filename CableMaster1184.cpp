#include<stdio.h>
long long int arr[10000],n;
long long int fun(long long int k)
{
    long long int i,s=0;
    for(i=0;i<n;i++)
        s=s+arr[i]/k;
    return s;
}
int main()
{

    long long int i,j,a,b,max,minlen,maxlen,midlen,c,count1,count,flag;
    long double dd;
    char ch;
    scanf("%lld%lld",&n,&c);//scanf("%d%d\n",&n,&c);
    scanf("%c",&ch);
    max=0;
    flag=0;
    for(i=0;i<n;i++)
    {
        j=0;
        while(1)
        {
            scanf("%c",&ch);
            if(ch=='\n')
                break;
            if(ch=='.')
            {
                flag=1;
                continue;
            }
            j=j*10+ch-'0';
        }
        if(flag==0)
            j=j*100;

        arr[i]=j;

            max+=arr[i];
    }
/*  prlong long intf("array is->  ");
    for(i=0;i<n;i++)
        prlong long intf("%d ",arr[i]);
    prlong long intf("\n");
*/

    minlen=1;
    maxlen=max;
    while(minlen<=maxlen)
    {
        midlen=(minlen+maxlen)/2;
        count=fun(midlen);
        count1=fun(midlen+1);
        if(count==c&&count1<c)
            break;
        else if(count<c)
            maxlen=midlen-1;
        else
            minlen=midlen+1;
    }
    if(minlen<=maxlen)
    {
        printf("%.2llf\n",midlen/100.0);
    }
    else
    printf("0.00\n");
}
/*
#include<stdio.h>
int arr[10000],n;
int fun(int k)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s=s+arr[i]/k;
    return s;
}
int main()
{
while(1)
{

    int i,j,a,b,max,minlen,maxlen,midlen,c,count1,count,flag;
    double dd;
    char ch;
    scanf("%d%d",&n,&c);//scanf("%d%d\n",&n,&c);
    scanf("%c",&ch);
    max=-1;
    flag=0;
    for(i=0;i<n;i++)
    {
        j=0;
        while(1)
        {
            scanf("%c",&ch);
            if(ch=='\n')
                break;
            if(ch=='.')
            {
                flag=1;
                continue;
            }
            j=j*10+ch-'0';
        }
        if(flag==0)
            j=j*100;

        arr[i]=j;
        if(arr[i]>max)
            max=arr[i];
    }
  printf("array is->  ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");


    minlen=1;
    maxlen=max;
    while(minlen<=maxlen)
    {
        midlen=(minlen+maxlen)/2;
        count=fun(midlen);
        count1=fun(midlen+1);
        if(count==c&&count1<c)
            break;
        else if(count<c)
            maxlen=midlen-1;
        else
            minlen=midlen+1;
    }
    if(minlen<=maxlen)
    {
        a=midlen/100;
        b=midlen%100;

        printf("%d.",a);
        if(b==0)
            printf("00\n");
        else if(b>0&&b< 10)
            printf("0%d\n",b);
        else
            printf("%d\n",b);
        //printf("%.2lf\n",midlen/100.0);
    }
    else
    printf("0.00\n");
}
}

*/






