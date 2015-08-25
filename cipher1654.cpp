#include<stdio.h>
#include<string.h>
int main()
{
    char arr[200001],ch;
    arr[0]='-';
    int j,i=1;
    scanf("%c",&arr[i]);
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='\n')
            break;
        if(ch==arr[i])
            arr[i--]='\0';
        else
            arr[++i]=ch;
    }
    for(j=1;j<=i;j++)
    printf("%c",arr[j]);
    printf("\n");
    //puts(arr);
}
/*
why the tag for this problem is "data structures"?
Because it can be solved using data structure called "stack".
Stack<char> Stack = new Stack<char>();
foreach (char c in Console.ReadLine())
    if (Stack.Count > 0 && Stack.Peek() == c) Stack.Pop(); else Stack.Push(c);
foreach (char c in Stack.Reverse()) Console.Write(c);
------------------
The easiest way is removing the successful characters as you read them.
insert each characters one by one from the input string by comparing them
with the lastly pushed character.
If they match, then pop it off that lastly pushed character.
Then printout the stack in reverse.
------------------
#include<iostream>
//#include<cstring>//#include<string.h>
#include<string>
using namespace std;
int main()
{
    int n,i;
    string str;
    getline(cin,str);
    str="-"+str;
    n=str.length();
    for(i=1;i<n;i++)
        if(str[i]==str[i-1])
    {
        str=str.substr(0,i-1)+str.substr(i+1);//substr will take much time,so TLE.
        i-=2;
        n-=2;
    }
    cout<<str.substr(1)<<"\n";
}
*/
