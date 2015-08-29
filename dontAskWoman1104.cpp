#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,n,B,s,max;
    char ch;
    n=0;
    char a[1000000];//NOT int a[1000000]; bcoz it will cause stack overflow for size 10^6.
    max=-1;
    while(scanf("%c",&ch))
    {
        if(ch=='\n')
            break;

        if(ch>='0'&&ch<='9')
            a[n]=ch-'0';
        else
            a[n]=ch-65+10;
        if(a[n]>max)
            max=a[n];
        n++;
    }
    if(a[0]==0)
        printf("2\n"),exit(0);
    for(B=max+1;B<=36;B++)
    {

        s=0;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==B-1);
            else
                s=s+a[i];
        }
        s=s%(B-1);
        if(s==0)
            printf("%d\n",B),exit(0);
    }
    printf("No solution.\n");
}
/*
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,k,i,B,BB,s,max;
    char ch;
    n=0;
    char a[1000000];//NOT int a[1000000]; bcoz it will cause stack overflow for size 10^6.
    max=-1;
    while(scanf("%c",&ch))
    {
        if(ch=='\n')
            break;

        if(ch>='0'&&ch<='9')
            a[n]=ch-'0';
        else
            a[n]=ch-65+10;
        if(a[n]>max)
            max=a[n];
        n++;
    }
    if(a[0]==0)
        printf("2\n"),exit(0);
    for(B=max+1;B<=36;B++)
    {
        BB=1;
        k=B-1;
        s=0;
        for(i=n-1;i>=0;i--)
        {
            s=s+(a[i]*BB)%k;
            BB=(BB*B)%k;
        }
        s=s%k;
        if(s==0)
            printf("%d\n",B),exit(0);
    }
    printf("No solution.\n");
}
*/
