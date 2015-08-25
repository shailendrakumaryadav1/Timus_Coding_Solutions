#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double sx,sy;
    scanf("%d",&n);
    int arr[100][2];
    sx=sy=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);
        sx+=arr[i][0];
        sy+=arr[i][1];
    }
    sx=sx/n+0.5;//sx=0;
    sy=sy/n+0.5;//sy=0;
    double d,max=0;
    for(i=0;i<n;i++)
    {
        d=sqrt((sx-arr[i][0])*(sx-arr[i][0])*1.0+(sy-arr[i][1])*(sy-arr[i][1]));
        if(d>max)
            max=d;
    }
    printf("%.39lf %.39lf %.39lf\n",sx,sy,max);
}

