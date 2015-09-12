#include<stdio.h>
int main()//u can use Fenwick Tree, or just summ[y] - summ[x-1].
{
    int N,i,j,s;
    scanf("%d",&N);
    int *arr=new int[N+1];
    arr[0]=s=0;
    for(i=1;i<N+1;i++)
    {
        scanf("%d",&j);
        s=s+j;
        arr[i]=s;
    }
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d%d",&i,&j);
        printf("%d\n",arr[j]-arr[i-1]);
    }
}
