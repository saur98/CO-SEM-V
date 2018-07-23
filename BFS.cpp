#include<iostream>
#include<queue>
using namespace std;

class queue1
{
    public:
    queue <int> q;
    int ab[20][20];
    int *visited;
    queue1(int n)
    {

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ab[i][j]=0;
        visited=new int[n];
        for(int i=0;i<n;i++)
       visited[i]=0;
    }
    void edge(int a,int b)
    {
        ab[a][b]=1;
        ab[b][a]=1;
    }
    void bfs(int n,int k)
    {
        int i,x;
        visited[n]=1;
        for(i=0;i<k;i++)
        {
            if(ab[n][i]==1)
            {
                if(visited[i]==0)
                {
                    //cout<<i<<endl;
                    visited[i]=1;
                    q.push(i);
                }
            }
        }
        //cout<<q.back()<<endl;
        if(q.empty())
        return;
        x=q.front();
        cout<<x<<endl;
        q.pop();
        bfs(x,k);
    }
};


int main()
{
    cout<<"Enter number of nodes"<<endl;
    int n=0,k,c=1,i,j,source=0;
    cin>>n;
    queue1 g(n);
    /*g.edge(0, 1);
    g.edge(0, 2);
    g.edge(1, 3);
    g.edge(1, 4);
    g.edge(2, 5);
    g.edge(2, 6);*/
    cout<<"enter source node"<<endl;
    cin>>source;
    while(c!=0)
    {
        int a,b;
        cout<<"enter adjacent nodes"<<endl;
        cin>>a>>b;
        g.edge(a,b);
        cout<<"STOP ?(press 0 to stop/press 1 to continue)"<<endl;
        cin>>c;
    }
    cout<<source<<endl;
    g.bfs(source,n);
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<g.ab[i][j]<<"\t";
        }
        cout<<endl;
    }*/

}
