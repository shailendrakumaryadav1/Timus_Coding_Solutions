#include<stdio.h>
#include<string.h>
struct s
{
    char d[21];
    int f;
    int cost;
};
int main()
{

    int i,j,c,len;char str[21];
    s arr[7];
    len=0;

    for(i=0;i<6;i++)
    {
        scanf("%s",&str);
        scanf("%s",&str);
        scanf("%d",&c);


        for(j=0;j<len;j++)
        {
            if(strcmp(str,arr[j].d)==0)
                break;
        }
        if(j<len)
        {
            arr[j].f++;
            if(c<arr[j].cost)
                arr[j].cost=c;
        }
        else
        {
            strcpy(arr[len].d,str);
            arr[len].f=1;
            arr[len].cost=c;
            len++;
        }
    }

    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j].f<arr[j+1].f)
            {
                arr[6]=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[6];
            }
            else if(arr[j].f==arr[j+1].f)
            {
                if(arr[j].cost>arr[j+1].cost)
                {
                    arr[6]=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[6];
                }
            }
        }
    }
    printf("%s\n",arr[0].d);
}


