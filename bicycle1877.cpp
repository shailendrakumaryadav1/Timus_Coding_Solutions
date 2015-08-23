#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,m;
    scanf("%d%d",&a,&b);
    m=(a>b)?a:b;
    for(i=0;i<=m;i++)
        if((i%2==0&&i==a)||(i%2!=0&&i==b))
            break;
    if (i<=m)
        printf("yes\n");
    else
        printf("no");
}
/*
a better way:
#include<iostream>
using namespace std;
int main(){
    int lock1,lock2;
    cin>>lock1>>lock2;
    if(lock1%2==0||lock2%2==1){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}
-------------------
include<cstring>
string lock1;
    int x;
    cin>>lock1;
    x= atoi(lock1.c_str());
*/
