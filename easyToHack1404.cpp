#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int i,u,n,minus,v[128],aux,auxs;
char st[128],auxx;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("1404.in","r",stdin);
    freopen("1404.out","w",stdout);
    #endif
    scanf("%s",st);
    u=strlen(st);
    for(i=0;i<u;i++)
        v[i]=(int)(st[i])-'a';
    for(i=0;i<u;i++)
    {
        if(i==0)
            v[i]+=26;
        else
            while(v[i]<v[i-1])
                v[i]+=26;
    }
    minus=5;
    for(i=0;i<u;i++)
    {
        auxs=st[i]-st[i]+(v[i]-minus)%26+'a';
        printf("%c",auxs);
        minus=v[i];
    }
    return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char c[101];
    gets(c);
    int a,n,k[101],kk[101],kkk[101],i;
    n=strlen(c);
    a=0;
    if((c[0]-'a'-5)<0)
        a=1;
    k[0]=c[0]-'a';
    kk[0]=k[0]+26*a;
    kkk[0]=kk[0]-5;
    c[0]=kkk[0]+'a';
    for(i=1;i<n;i++)
    {
        k[i]=c[i]-'a';
        if(k[i]<k[i-1])
            a++;
        kk[i]=k[i]+26*a;
        kkk[i]=kk[i]-kk[i-1];
        c[i]=(kkk[i]+'a');
    }
    puts(c);
}
*/

