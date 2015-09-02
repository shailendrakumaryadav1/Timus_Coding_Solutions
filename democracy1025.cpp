
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n, a[105], s=0;
    scanf("%d", &n);
    int num = (n+1)/2;
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    stable_sort (a, a+n);//   sort (a, a+n);
    for(int i=0; i<num; i++) s += (a[i]+1)/2;
    printf("%d\n", s);
    return 0;
}
/*
include <iostream>
#include <cstdlib>

int sravn(const void *a, const void *b) {return *(int*)a - *(int*)b;}

int main()
{
    int kol, res = 0;
    std::cin >> kol;
    int *izbir = new int [kol];
    for (int i = 0; i < kol; i++)
        std::cin >> izbir[i];
    qsort(izbir, kol, sizeof(int), sravn);


    for (int i = 0; i < (kol/2 + 1); i++)
        res += izbir[i]/2 + 1;


    delete [] izbir;
    std::cout << res;
    return 0;
}
-------------------------------
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[201],i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)

        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
             int   temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;


            }

            int s=0;
            for(i=0;i<=n/2;i++)
            s=s+a[i]/2+1;

            cout<<s<<endl;

    }



*/
