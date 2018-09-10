#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    cout<<"Enter input strings"<<endl;
    char s1[20];
    char s2[20];
    char s3[20];
    cin>>s1>>s2;
    int l1,l2;
    l1=strlen(s1);
    l2=strlen(s2);
    int a[l1+1][l2+1][2],i,j;
    for(i=0;i<=l1;i++)
    {
        for(j=0;j<=l2;j++)
        {
            if(j==0 || i==0)
            a[i][j][0]=0;
            else if(s1[i-1]==s2[j-1])
            {
                cout<<s1[i-1]<<" "<<s2[j-1]<<endl;
                cout<<a[i-1][j][0]<<" "<<a[i-1][j][0]<<endl;
                a[i][j][0]=a[i-1][j-1][0]+1;
                a[i][j][1]=0;
                cout<<a[i-1][j-1][0]<<" "<<a[i][j][0]<<endl;
            }
            else
            {
                if(a[i-1][j]>a[i][j-1])
                {
                    a[i][j][0]=a[i-1][j][0];
                    a[i][j][1]=1;
                }
                else
                {
                    a[i][j][0]=a[i][j-1][0];
                    a[i][j][1]=-1;
                }
            }
        }
    }
    for(i=0;i<=l1;i++)
    {
        for(j=0;j<=l2;j++)
        {
            cout<<a[i][j][0]<<" ";
        }
        cout<<endl;
    }
    i=l1;j=l2;
    int k=0;
    while(i!=0 && j!=0)
    {
        if(a[i][j][1]==0)
        {
            s3[k]=s1[i-1];
            i=i-1;
            j=j-1;
        }
        else
        if(a[i][j][1]==1)
        {
            i=i-1;
        }
        else
        j=j-1;
    }
    for(i=strlen(s3)-1;i>=0;i--)
    {
        cout<<s3[i];
    }

}

