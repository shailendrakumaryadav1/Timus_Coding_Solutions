#include<stdio.h>
int main()
{
    int a,b,k,l;
    scanf("%d%d",&a,&b);
    k=39*2+40+(a-40)*2+1;
    l=40*2+(b-40)*2+40;
    if(k>l)
    printf("%d\n",k);
    else
        printf("%d\n",l);
}
/*
there are 2 possible answers:
2*a+39 and 2*b+40
 there are 2 "worst" cases:
1). We take 40 right (equals 40*2=80 secs),
then throw all the rest of the right ones (2*(b-40) secs),
and them take the 40 left (40 secs). The time is 80+2*(b-40)+40=120+2*(b-40).
2). We take 39 left (78 secs),
take 40 left ones (40 secs), throw all the other left ones away (2*(a-40)),
and take the last right one (1 sec). The time is 78+40+2*(a-40)+1=119+2*(a-40).

The answer is the maximum of these two.
*/
