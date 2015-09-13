#include<stdio.h>
int n;
char ch;
void work();
int main()
{
    scanf("%d",&n);
    work();
}
void work()
{
    if(n==1)
    {
    char ar[3];
    scanf("%s",ar);//scanf("%s",&ar);
    scanf(" %c",&ch);//here space is very essential.
    if(ar[0]==ch)
        printf("%s\n",ar);
    return;
    }
    char ar[3];
    scanf("%s",ar);//scanf("%s",&ar);
    n--;
    work();
    if(ar[0]==ch)
        printf("%s\n",ar);
}








