#include<stdio.h>
int max,s,lim;
void work(int n,int k)
{

if(n>lim)
{

    //printf("%d\t%d\n",n,k);
k--;
if(k>max)
max=k;
return;
}
    int i,j;
    i=1;
    while(i*100%n!=0)
    {
        i++;
    }





    for(j=i;j<=n;j=j+i)
        //if(i*100%n==0)
        {
            //printf("%d\n",n+i);
            work(n+j,k+1);

        }
}
int main()
{

    scanf("%d%d",&lim,&s);
    max=0;
    work(s,1);

    printf("%d\n",max);
}
