#include<stdio.h>
int main()
{
    int n,max,min,i,j;
    scanf("%d",&n);
    //int arr[n][2];
    int (*arr)[2]=new int[n][2];
    min=100,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);
        if(arr[i][1]>max)
            max=arr[i][1];
        if(arr[i][1]<min)
            min=arr[i][1];
    }
    for(i=max;i>=min;i--)
        for(j=0;j<n;j++)
        if(arr[j][1]==i)
        printf("%d %d\n",arr[j][0],arr[j][1]);
}

