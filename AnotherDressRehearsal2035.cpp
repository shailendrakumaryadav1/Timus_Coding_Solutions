#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,n,i;
    scanf("%d%d%d",&a,&b,&n);
    if(n>a+b)
        printf("Impossible\n");
    else if(n>=a&&n<=a+b)
        printf("%d %d\n",a,n-a);
    else
        printf("%d 0\n",n);

}

