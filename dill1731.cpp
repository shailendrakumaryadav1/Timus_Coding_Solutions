
#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        printf("%d ",i);
    printf("\n");
    while(m--)
    {
        printf("%d ",i);
        i=i+n;
    }
    printf("\n");
}
