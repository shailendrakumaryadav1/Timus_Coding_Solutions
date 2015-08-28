#include<stdio.h>//use the greedy algo to solve the program.
#include<stdlib.h>
int main()
{
    int n,i,j,aa,bb,s,t,k;
    scanf("%d",&n);
    s=2000;
    int *a=new int[s];
    int *b=new int[s];
    char *c=new char[s];
    for(j=0;j<s;j++)
        a[j]=b[j]=0,c[j]='N';
        for(j=0;j<n;j++)
        {
            scanf("%d%d",&aa,&bb);
            aa=aa+1000;
            bb=bb+1000;
            if(bb<aa) t=aa,aa=bb,bb=t;
            b[bb]=1;
            a[bb]=(aa>a[bb])?aa:a[bb];
        }
        //for(i=0;i<9;i++)
            //printf("%d %d\n",a[i],b[i]);
    t=0;
    k=1;
    for(i=0;i<s;i++)
    {
        if(a[i]>=k)
        {
            t++;
            c[i]='Y';
            k=i;
        }
    }
    printf("%d\n",t);
    for(i=0;i<s;i++)
        if(c[i]=='Y')
        printf("%d %d\n",a[i]-1000,i-1000);
}
/*
#include<stdio.h>
#include<stdlib.h>
struct sam
    {
        int a;
        int b;
        char c;
    };
int cmp(const void *p,const void *q)
{
    int l =((struct sam *)p)->b;
    int r =((struct sam *)q)->b;
    //if(l-r==0) return 1; for stable sort
    return (l - r);
}
int main()
{
    int i,j,n,t,k;
    scanf("%d",&n);
    sam *arr=new sam[n];
        for(j=0;j<n;j++)
            {
                scanf("%d%d",&arr[j].a,&arr[j].b);
                arr[j].c='N';
                if(arr[j].a>arr[j].b)
                {
                    t=arr[j].a;
                    arr[j].a=arr[j].b;
                    arr[j].b=t;
                }
            }
    qsort(arr,n,sizeof(sam),cmp);
    //sort(arr,arr+5,cmp);
    t=1;
    k=arr[0].b;
    arr[0].c='Y';
    for(i=1;i<n;i++)
    {
        if(arr[i].a>=k)
        {
            t++;
            k=arr[i].b;
            arr[i].c='Y';
        }
    }
    printf("%d\n",t);
    for(i=0;i<n;i++)
        if(arr[i].c=='Y')
        printf("%d %d\n",arr[i].a,arr[i].b);
}
*/
