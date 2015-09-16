
#include<stdio.h>
int main()
{
//all the tires are of the same size and not different
    int n,i,a,arr[101]={};
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        arr[a-600]++;
    }
    n=0;
    for(i=0;i<101;i++)
        n=n+arr[i]/4;
    printf("%d\n",n);
}

