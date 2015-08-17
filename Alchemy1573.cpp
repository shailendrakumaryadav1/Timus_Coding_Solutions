#include<stdio.h>
int main()
{
    int B,R,Y,k,p;
    char str[10];
    scanf("%d%d%d%d\n",&B,&R,&Y,&k);

    p=1;
    while(k--)
    {
        scanf("%s",&str);
        switch(str[0])
        {
            case 'R': p*=R; break;
            case 'Y': p*=Y; break;
            case 'B': p*=B; break;
        }
    }
    printf("%d\n",p);
}


