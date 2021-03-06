#include<iostream>
#include<queue>
using namespace std;

class stack
{
    public:
    int top;
    int *st;
    int ab[20][20];
    int *visited;
    stack(int n)
    {

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ab[i][j]=0;
        st=new int[n];
        visited=new int[n];
        for(int i=0;i<n;i++)visited[i]=0;
        top=-1;
    }
    void spush(int n)
    {
        top++;
        st[top]=n;
    }
    int spop()
    {
        return(st[top--]);
    }
    void edge(int a,int b)
    {
        ab[a][b]=1;
        ab[b][a]=1;
    }
    void dfs(int n,int k)
    {
        //cout<<"hii"<<n<<endl;
        int i;
        visited[n]=1;
        if(top==-1)
        return ;
        for(i=0;i<k;i++)
        {

            if(ab[n][i]==1)
            {
                if(visited[i]==0)
                {
                    cout<<i<<endl;
                    spush(i);
                    dfs(i,k);
                }
            }
        }
        if(i==k)
        {
            spop();
            //cout<<"hi"<<top<<endl;
        }
    }
};


int main()
{
    cout<<"Enter number of nodes"<<endl;
    int n=0,k,c=1,i,j,source=0;
    cin>>n;
    stack g(n);
    cout<<"enter source node"<<endl;
    cin>>source;
    /*g.edge(0,1);
    g.edge(2,1);
    g.edge(4,1);
    g.edge(2,3);
    g.edge(0,3);
    g.edge(4,3);*/
    while(c!=0)
    {
        int a,b;
        cout<<"enter adjacent nodes"<<endl;
        cin>>a>>b;
        g.edge(a,b);
        cout<<"STOP ?(press 0 to stop/press 1 to continue)"<<endl;
        cin>>c;
    }
    cout<<endl<<source<<endl;
    g.spush(source);
    g.dfs(source,n);
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<g.ab[i][j]<<"\t";
        }
        cout<<endl;
    }*/

}
