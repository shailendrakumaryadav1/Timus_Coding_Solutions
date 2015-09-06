
#include <stdio.h>

int main()
{
    int s,i,n;
    scanf("%d", &n);
    s=1;
    for(i=2;i<=n;i++)
        if(i%2==0)
        s+=i;
    else
        s-=i;
    if(s%2==0)
       printf("black\n");
    else
        printf("grimy\n");
    return 0;
}
