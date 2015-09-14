#include<stdio.h>
int main()
{//you need only n and k to solve it. Other information isn't needed.
    int n;
    //scanf("%d%d",&n,&k);
    //n=n*(n-1)/2-k;
    printf("%d\n",scanf("%d",&n)*n*(n-1)/2-scanf("%d",&n)*n);
}

/*
#include<stdio.h>
int main()
{//you need only n and k to solve it. Other information isn't needed.
    int n,k;
    scanf("%d%d",&n,&k);
    n=n*(n-1)/2-k;
    printf("%d\n",n);
}
*/


