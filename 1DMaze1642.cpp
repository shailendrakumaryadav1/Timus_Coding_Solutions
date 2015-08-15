#include<stdio.h>
int main()
{
    int n,k,l,r,a;
    scanf("%d%d",&n,&k);
    l=-1001;
    r=1001;
    while(n--)
    {
        scanf("%d",&a);
        if(a>l&&a<0)
            l=a;
        if(a<r&&a>0)
            r=a;
    }
    if(k<l||k>r)
        printf("Impossible\n");
    else if(k<0)
        printf("%d %d\n",2*r-k,-k);
    else
        printf("%d %d\n",k,-2*l+k);
}






