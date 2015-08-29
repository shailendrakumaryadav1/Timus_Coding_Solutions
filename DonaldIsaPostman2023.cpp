#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int s,k,n,i;
    char a[]="AliceArielAuroraPhilPeterOlafPhoebusRalphRobin";
    char b[]="BambiBelleBoltMulanMowgliMickeySilverSimbaStitch";
    char c[]="DumboGenieJiminyKuzkoKidaKenaiTarzanTianaWinnie";
    char str[100];
    scanf("%d",&n);
    s=0;
    i=1;
    while(n--)
    {
        scanf("%s",&str);
        k=0;
        if(strstr(a,str)!=NULL)
            k=1;
        else if(strstr(b,str)!=NULL)
            k=2;
        else if(strstr(c,str)!=NULL)
            k=3;

        s=s+abs(i-k);
        i=k;
    }
    printf("%d\n",s);
}

