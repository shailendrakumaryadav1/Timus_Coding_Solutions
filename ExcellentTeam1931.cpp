#include<stdio.h>
int main()
{
    int n,noi,mpn,f,max,a,b,i;
    scanf("%d",&n);
    noi=1;
    mpn=1;
    f=0;
    max=0;
    scanf("%d",&a);
    for(i=2;i<=n;i++)
    {
        scanf("%d",&b);
        f++;
        if(b<a)
        {
            a=b;
            if(f>max)
            {
                mpn=noi;
                max=f;
            }
            noi=i;
            f=1;//when the pirate is exchanged,
                //this is also counted as a comparison for the new pirate.
        }
    }
    if(f>max)
    {
        mpn=noi;
        max=f;
    }
    printf("%d\n",mpn);
}
