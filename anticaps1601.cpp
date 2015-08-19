#include<stdio.h>
#include<ctype.h>
int main()
{
/*
    #ifndef ONLINE_JUDGE
    freopen("1601.in","r",stdin);
    freopen("1601.out","w",stdout);
    #endif
*/
    int flag=1;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='.'||ch=='!'||ch=='?')
        {
            printf("%c",ch);
            flag=1;
        }
        else if(ch==' '||ch==','||ch=='-'||ch==':'||ch=='\n')
            printf("%c",ch);
        else
        {
            if(flag==1)
                printf("%c",toupper(ch)),flag=0;//printf("%c",ch),flag=0;
            else
                printf("%c",tolower(ch));
        }
    }
}
