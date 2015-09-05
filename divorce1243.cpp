#include<stdio.h>
int main()
{
    char ch;
    int k=0;
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='\n')
            break;
        k=(k*10+(ch-'0'))%7;
    }
    printf("%d\n",k);
}
/*
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int k=ch-'0';
    while(scanf("%c",&ch))  // (1)  //   while(scanf("%c",&ch)!=EOF);
    {
                        // scanf("%c",&ch);
        if(ch=='\n')
            break;
        k=k*3+(ch-'0');
        k=k%7;
    }
    k=k%7;
    printf("%d\n",k);

}
---------------------
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[55];
    scanf("%s",arr);
    int i,k=arr[0]-'0',n=strlen(arr);
    for(i=1;i<n;i++)
    {
        k=k*3;
        k=k+(arr[i]-'0');
        k=k%7;
    }
    k=k%7;
    printf("%d\n",k);
}
*/
