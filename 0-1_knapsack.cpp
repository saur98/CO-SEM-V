#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int m,n;
    cout<<"enter max capacity"<<endl;
    cin>>m;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int w[n+1],p[n+1],i,j,o[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>w[i]>>p[i];
    }
    cout<<"Matrix\n"<<endl;
    int a[n+1][m+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {

            if(j==0 || i==0)
            a[i][j]=0;
            else if(j<w[i])
            a[i][j]=a[i-1][j];
            else
            a[i][j]=max(a[i-1][j],a[i-1][j-w[i]]+p[i]);
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nMax profit is :- "<<a[n][m]<<endl<<endl;
    i=n;j=m;
    while(i!=0 && j!=0)
    {
        if(a[i][j]!=a[i-1][j])
        {
            o[i]=1;
            j=j-w[i];
            i=i-1;
        }
        else
        {
            o[i]=0;
            i=i-1;
        }
    }
    cout<<"Elements used are :- \n"<<endl;
    for(i=1;i<=n;i++)
    {
        if(o[i]==1)
        cout<<i<<"   weight :-"<<w[i]<<"   profit :-"<<p[i]<<endl;
    }
}
/*
11
5
1 1
2 6
3 12
4 18
5 22
*/
