#include<stdio.h>
int main()
{
    char ar[4],ch;
    int n;
    scanf("%s",&ar);
    if(ar[2]=='\0')
        n=ar[0]-'0',ch=ar[1];
    else
    {
        n=(ar[0]-'0')*10+(ar[1]-'0');
        ch=ar[2];
    }
    if(n==1||n==2)
    {
        if(ch=='A'||ch=='D')
            printf("window\n");
        else
            printf("aisle\n");
    }
    else if(n>=3&&n<=20)
    {
        if(ch=='A'||ch=='F')
            printf("window\n");
        else
            printf("aisle\n");
    }
    else
    {
        if(ch=='A'||ch=='K')
            printf("window\n");
        else if(ch=='C'||ch=='D'||ch=='G'||ch=='H')
            printf("aisle\n");
        else
            printf("neither\n");
    }
}



