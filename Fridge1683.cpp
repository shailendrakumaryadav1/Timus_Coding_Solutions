#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int arr[40];
    k=0;
    while(n>1)
    {
        arr[k]=n/2;
        n=(arr[k]>n-arr[k])?arr[k]:n-arr[k];
        k++;
    }
    printf("%d\n",k);
    for(i=0;i<k;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
