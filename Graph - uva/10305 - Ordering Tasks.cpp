#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define MAX 101

vector<int>edges[MAX];
int dfsColor[MAX];
int topologicalSort[MAX];
int index=0;

void dfsVisit(int u)
{
    dfsColor[u] = 1;
    for(int i=0;i<edges[u].size();i++)
    {
        int v = edges[u][i];
        if(dfsColor[v]==0)
            dfsVisit(v);
    }
    topologicalSort[index]=u;
    index++;
}

void dfs(int V)
{
    for(int i=1;i<=V;i++)
    {
        dfsColor[i]=0;
        topologicalSort[i]=-1;
    }
    for(int i=1;i<=V;i++)
    {
        if(dfsColor[i]==0)
            dfsVisit(i);
    }
}

int main()
{
    int V,E,u,v;
    cin>>V>>E;
    while( true )
    {
        if(V==0 && E==0) break;
        for(int i=1;i<=E;i++)
        {
            cin>>u>>v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        dfs(V);
        for(int i=V-1;i>=0;i--)
        {
            cout<<topologicalSort[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<MAX;i++)
        {
            edges[i].clear();
        }
        cin>>V>>E;
        index=0;
    }
    return 0;
}
