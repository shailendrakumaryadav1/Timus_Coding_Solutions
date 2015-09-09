#include<stdio.h>
int main()
{
    char a[30000],ch;
    int s=0;
    while(scanf("%c",&ch)!=EOF)
    {

        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        {
            a[s++]=ch;
        }
        else //if(ch!='\n')
        {
            while(s>0)
                printf("%c",a[--s]);
            printf("%c",ch);
        }
    }
    while(s>0)//any non-letter chars can be processed the same way,
        //but you should pay some extra attention to "EOF"
                printf("%c",a[--s]);
    //printf("\n");
}

