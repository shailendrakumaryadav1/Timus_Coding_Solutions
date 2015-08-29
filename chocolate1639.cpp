//1639. Chocolate 2
#include<stdio.h>
int main()
{
    int  n;
    printf((scanf("%d",&n)*n*scanf("%d",&n)*n)%2==0?"[:=[first]\n":"[second]=:]\n");
    //printf("%s\n",(scanf("%d",&n)*n*scanf("%d",&n)*n)%2==0?"[:=[first]\n":"[second]=:]\n");
}


