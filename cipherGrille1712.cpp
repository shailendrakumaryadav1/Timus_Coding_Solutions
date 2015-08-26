#include<stdio.h>
char c[4][5],cc[4][5],pw[4][5];
int i,j;
void prnt()//for printing after each 90 degrees rotation
{
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        if(c[i][j]=='X')
        printf("%c",pw[i][j]);
}
void work()//for 90 degrees rotation
{
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            cc[j][4-1-i]=c[i][j];
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            c[i][j]=cc[i][j];
}
int main()
{
    for(i=0;i<4;i++)
        gets(c[i]);
    for(i=0;i<4;i++)
        gets(pw[i]);
    prnt();
    work();
    prnt();
    work();
    prnt();
    work();
    prnt();
    printf("\n");
}
