#include<stdio.h>
int main()
{
    int n,max,i,j,s;;
    scanf("%d\n",&n);
    int *a=new int[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s=s+a[j];
            if(s>max)
                max=s;
        }
    }
    if(max<0)
        printf("0\n");
    else
        printf("%d\n",max);
}
