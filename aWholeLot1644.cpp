#include<stdio.h>
int main()
{
    int n,h,s,k;
    scanf("%d",&n);
    char arr[15];
    h=2;
    s=10;
    while(n--)
    {
        //scanf("%d %s",&k,&arr);
        scanf("%d",&k);
        scanf("%s",&arr);

        //printf("str=:%s:\n",arr);
        if(arr[0]=='h')
        {
            if(k>h)
                h=k;
        }
        else if(arr[0]=='s')
        {
            if(k<s)
                s=k;
        }
    }
    if(s<=h)
        printf("Inconsistent\n");
    else
        printf("%d\n",s);
}
