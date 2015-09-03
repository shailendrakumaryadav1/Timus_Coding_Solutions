
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    double a,b,c;
    scanf("%d",&n);
    for(a=1;a<=100;a++)
    {
        for(b=1;b<=100;b++)
        {
            if(a==b) continue;
            for(c=1;c<=100;c++)
            {
                if(a==c||b==c) continue;
                if(pow(a,n)+pow(b,n)-pow(c,n)==0)
                    printf("%.0lf %.0lf %.0lf\n",a,b,c),exit(0);
            }
        }
    }
        printf("-1\n");
}
