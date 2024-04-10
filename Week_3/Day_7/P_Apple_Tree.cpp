/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 13:01:31
File: P_Apple_Tree.cpp
-----------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;

const int N=2e5+5;
vector<int> adj[N];
vector<bool> vis(N);
vector<ll> leaf(N);
ll dfs(int src)
{
    vis[src]=true;
    ll ans=0;
    bool flag=true;
    for(ll i=0;i<adj[src].size();i++)
    {
        if(!vis[adj[src][i]])
        {
            flag=false;
            ans+=dfs(adj[src][i]);
        }
    }
    if(flag) return leaf[src]=1;
    return leaf[src]=ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc; cin>>tc; while(tc--)
    {
        ll n; cin>>n;
        ll e=n-1;
        vis.assign(N,false);
        leaf.assign(N,0);
        while(e--)
        {
            ll a,b; cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1);
        ll q; cin>>q;
        while(q--)
        {
            ll x,y; cin>>x>>y;
            cout<<leaf[x]*leaf[y]<<endl;
        }
        for(ll i=0;i<=n;i++) adj[i].clear();
    }
    return 0;
}