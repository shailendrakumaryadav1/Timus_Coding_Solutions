#include<stdio.h>//The tsar's program is quicksort algorithm
//it sorts input array and counts in how many swaps it was done (variable c)
//(not exact value but c represents it)...
int main()
{
int i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("%d ",i);
printf("\n");
}
/*
#include <stdio.h>
 long c,N;
 long A[100];

 long P(long l, long r)
 {
  long x=A[l],
       i=l-1,
       j=r+1,
       t;
  while(1)
  {
   do
   {
       --j;
       ++c;
    }while(A[j]>x);
   do
    {
        ++i;
        ++c;
   }while(A[i]<x);
   if(i<j)
   {
    t=A[i];
    A[i]=A[j];
    A[j]=t;
   }
   else return j;
  }
 }

 void Q(long l, long r)
 {
  long n;
  if(l<r)
  {
   n=P(l,r);
   Q(l,n);
   Q(n+1,r);
  }
 }

 void work(long aa,long bb,long cc,long dd)
 {
  c=0;
  //scanf("%ld",&N);
  //for(long i=0; i<N; ++i)
   //scanf("%ld", &A[i]);
   A[0]=aa;
   A[1]=bb;
   A[2]=cc;
   A[3]=dd;
  Q(0,N-1);
  if(c==(N*N+3*N-4)/2)
   printf("%ld\t%ld\t%ld\t%ld\n",aa,bb,cc,dd);
   //("Beutiful Vasilisa");
  //else printf
  // ("Immortal Koshcei");

 }
 int main()
 {
     long i,j,k,l;
     N=4;
     for(i=1;i<2;i++)
        for(j=0;j<5;j++)
            for(k=0;k<5;k++)
                for(l=0;l<5;l++)
        work(i,j,k,l);
 }
*/
