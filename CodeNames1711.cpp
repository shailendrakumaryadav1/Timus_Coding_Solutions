#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("1711.in","r",stdin);
    freopen("1711.out","w",stdout);
    #endif // ONLINE_JUDGE

    int n,i,j,k,d,dd;
    scanf("%d",&n);
    int *nn=new int[n+1];
    char str[21],s[21];
    char arr[17][4][21];//char arr[n+1][4][21];
    for(i=1;i<=n;i++)
    {
        scanf("%s%s%s",&arr[i][0],&arr[i][1],&arr[i][2]);
        for(j=0;j<3-1;j++)//bubble sort
            for(k=0;k<3-1-j;k++)
            if(strcmp(arr[i][k],arr[i][k+1])>0)
        {
            strcpy(s,arr[i][k]);
            strcpy(arr[i][k],arr[i][k+1]);
            strcpy(arr[i][k+1],s);
        }
    }
    for(i=1;i<=n;i++)
        scanf("%d",&nn[i]);

    strcpy(arr[0][3],"");
    nn[0]=0;
    for(i=1;i<=n;i++)
    {
        strcpy(str,arr[nn[i-1]][3]);
    dd=1000;
    for(j=0;j<3;j++)
    {
        d=strcmp(arr[nn[i]][j],str);
        if(d>0)
        {
           strcpy(s,arr[nn[i]][j]);
           dd=d;
           break;
        }
    }
    if(dd==1000)
        printf("IMPOSSIBLE\n"),exit(0);

    strcpy(arr[nn[i]][3],s);
    }
    for(i=1;i<=n;i++)
        printf("%s\n",arr[nn[i]][3]);
}
/*
int strcmp1(char str1[],char str2[])
{
    int i,j,n1,n2,k=0;
	n1=strlen(str1);
	n2=strlen(str2);

	for(i=0;i<(n1<n2?n1:n2);i++)
    {
        j=str1[i]-str2[i];
        k=k+j;
        if(j!=0)
            return k;
    }
    if(n1==n2)
        return 0;
    if(n1>n2)
        return (k+str1[i]);
    return (k+str2[i]);
}
*/
