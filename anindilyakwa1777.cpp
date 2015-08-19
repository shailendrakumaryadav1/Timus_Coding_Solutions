#include<stdio.h>
using namespace std;
#include<algorithm>
int main()
{
    int n,i;
    long long int d,arr[100000];
    scanf("%lld%lld%lld",&arr[0],&arr[1],&arr[2]);
    n=3;
    sort(arr,arr+n);
    while(arr[0]!=0)
    {
        d=arr[1]-arr[0];
        for(i=1;i<n-1;i++)
            if(arr[i+1]-arr[i]<d)
            d=arr[i+1]-arr[i];
        arr[n]=d;
        n++;
        sort(arr,arr+n);
    }
    printf("%d\n",n-3);
}

