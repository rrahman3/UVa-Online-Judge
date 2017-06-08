#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define MAX 201

vector<int>edges[MAX];

int bfs (int V, int source)
{
    queue<int>Q;
    int color[V];
    int partition[V];
    for(int i=0;i<V;i++)
    {
        color[i]=0;
        partition[i]=0;
    }
    color[source]=1;
    partition[source]=1;
    Q.push(source);
    while(!Q.empty())
    {
        int u = Q.front();
        for(int i=0;i<edges[u].size();i++)
        {
            int v = edges[u][i];
            if(partition[v]==partition[u])
            {
                return 0;
            }
            if(color[v]==0)
            {
                color[v]=1;
                partition[v] = 3 - partition[u];
                Q.push(v);
            }
        }
        Q.pop();
    }
    return 1;
}

int main()
{
    int V,E,u,v,s;
    cin>>V;
    while(V!=0)
    {
        cin>>E;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            if(i==0) s = u;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        if(bfs(V,s)==0)
        {
            cout<<"NOT BICOLORABLE."<<endl;
        }
        else
        {
            cout<<"BICOLORABLE."<<endl;
        }
        for(int i=0;i<MAX;i++)
        {
            edges[i].clear();
        }
        cin>>V;
    }
    return 0;
}
