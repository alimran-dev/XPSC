/*
-----------------------------
Author: Md. Al Imran
Created: 09-04-2024 18:24:07
File: L_Train_and_Queries.cpp
-----------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc; cin>>tc; while(tc--)
    {
        ll n,k; cin>>n>>k;
        vector<ll> v(n);
        map<ll,vector<ll>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        while(k--)
        {
            int a,b; cin>>a>>b;
            if(mp[a].empty() || mp[b].empty())
                no;
            else if(mp[a].front()<=mp[b].back())
                yes;
            else
                no;
        }
    }
    return 0;
}