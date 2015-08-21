#include<stdio.h>
int main()
{
    int n,s,a;
    scanf("%d%d",&n,&s);
    while(n--)
    {
        scanf("%d",&a);
        printf("%d ",s/a-1);
        s=a;
    }
    printf("\n");
}
