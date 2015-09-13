#include<stdio.h>
#include<string.h>
int main()
{
    int N,n,t,k,i,j,ind1,ind2,lastrem1,lastrem2,reqd1,reqd2;
    scanf("%d\n",&N);
    int rem[1001];
    char str[1001][21]={"000"},str1[21]={"000"},str2[21],s[21];
    for(i=1;i<=N;i++)
        scanf("%d of %s",&rem[i],&str[i]);
    reqd1=ind1=lastrem1=0;
    scanf("%d\n",&n);
    k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d of %s",&reqd2,&str2);
        for(j=1;j<=N;j++)
                if(strcmp(str2,str[j])==0)
                {
                ind2=j;
                lastrem2=rem[ind2];
                break;
                }
            if(j>N)
            {
            ind2=-1;
            lastrem2=0;
            }
        while(1)
        {
            k++;
            if(ind1<0)
            {
            strcpy(str1,str2);
            reqd1=reqd2;
            ind1=ind2;
            lastrem1=lastrem2;
            break;
            }
            else if(rem[ind1]<=0)
            {
            strcpy(str1,str2);
            reqd1=reqd2;
            ind1=ind2;
            lastrem1=lastrem2;
            break;
            }
            else if(reqd1<=rem[ind1]&&lastrem1==rem[ind1])
            {//Check the situation when one husband comes back for
//the second time,the quantity he wants to buy was modified meanwhile...
                rem[ind1]=rem[ind1]-reqd1;
                strcpy(str1,str2);
                reqd1=reqd2;
                ind1=ind2;
                lastrem1=lastrem2;
                lastrem1=rem[ind1];
                break;
            }
            else
            {
                lastrem1=rem[ind1];
                reqd1=rem[ind1];

                strcpy(s,str1);
                strcpy(str1,str2);
                strcpy(str2,s);
                t=reqd1;
                reqd1=reqd2;
                reqd2=t;
                t=lastrem1;
                lastrem1=lastrem2;
                lastrem2=t;
                t=ind1;
                ind1=ind2;
                ind2=t;
            }
        }
    }
    k++;//for last article
    printf("%d\n",k-1);
}

/*
int main()//wrong program...
{
    int N,n,i,j,reqd1,reqd2,rem1,rem2,ind1,ind2,t,k;
    scanf("%d\n",&N);
    int rem[1001];
    char str[1001][21]={"000"},str1[21]={"000"},str2[21],s[21];
    for(i=1;i<=N;i++)
        scanf("%d of %s",&rem[i],&str[i]);
    reqd1=rem[0]=0;
    //str[0]={"000"};
    scanf("%d\n",&n);
    k=0;rem1=0;ind1=0;

    for(i=0;i<n;i++)
    {
        scanf("%d of %s",&reqd2,&str2);
        for(j=1;j<=N;j++)
                if(strcmp(str2,str[j])==0)
                {
                ind2=j;
                rem2=rem[j];
                break;
                }
            if(j>N)
            {
            ind2=-1;
            rem2=0;
            }

        if(ind1<0)
        {
            k++;
            //printf("\t\t\t%s\t%d\t%d\t%d\n",str1,reqd1,rem1,ind1);

            strcpy(str1,str2);
            reqd1=reqd2;
            rem1=rem2;
            ind1=ind2;
            continue;
        }


        while(1)
        {
            k++;
            //printf("\t\t\t%s\t%d\t%d\t%d\n",str1,reqd1,rem1,ind1);
            if(rem[ind1]<=0)
            {
                strcpy(str1,str2);
                reqd1=reqd2;
                rem1=rem2;
                ind1=ind2;
                break;
            }
            else if(rem1!=rem[ind1])
            {
                strcpy(s,str1);
                strcpy(str1,str2);
                strcpy(str2,s);
                t=reqd1;
                reqd1=reqd2;
                reqd2=t;
                t=rem1;
                rem1=rem2;
                rem2=t;
                t=ind1;
                ind1=ind2;
                ind2=t;

                rem2=rem[ind2];

                reqd2=rem2;
            }
            else if(reqd1<=rem1)
            //if(reqd1<=rem[ind1])
            {
                rem[ind1]=rem1-reqd1;
                //rem[ind1]-=reqd1;
                strcpy(str1,str2);
                reqd1=reqd2;
                rem1=rem2;
                ind1=ind2;
                break;
            }
            else
            {
                strcpy(s,str1);
                strcpy(str1,str2);
                strcpy(str2,s);
                t=reqd1;
                reqd1=reqd2;
                reqd2=t;
                t=rem1;
                rem1=rem2;
                rem2=t;
                t=ind1;
                ind1=ind2;
                ind2=t;

                rem2=rem[ind2];
                reqd2=rem2;
            }
        }
    }
    k++;//for last article


    printf("%d\n",k-1);
}
*/
