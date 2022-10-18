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
    int vis[n+1]={0};
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            cnt++;
            stack<int> s;
            s.push(i);
            vis[i]=1;
            while(!s.empty())
            {
                int node=s.top();
                s.pop();
                for(auto it:adj[node])
                {
                    if(vis[it]==0)
                    {
                        s.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
