#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s;
    cin>>s;
    queue<int> q;
    vector<bool> vis(n+1,false);
    q.push(s);
    vis[s]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0;i<adj[u].size();i++)
        {
            if(!vis[adj[u][i]])
            {
                q.push(adj[u][i]);
                vis[adj[u][i]]=true;
            }
        }
    }
    return 0;
}
