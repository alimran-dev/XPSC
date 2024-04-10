/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 11:37:12
File: S_EVacuate_to_Moon.cpp
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
        ll n,m,h; cin>>n>>m>>h;
        vector<ll> a(n),b(m);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end(),greater<>());
        sort(b.begin(),b.end(),greater<>());
        // for(ll i=0;i<n;i++) cout<<a[i]<<" ";
        // cout<<endl;
        // for(ll i=0;i<m;i++) cout<<b[i]<<" ";
        // cout<<endl;
        ll ans=0;
        int l=0,r=0;
        while(l<n && r<m)
        {
            if(b[r]*h<a[l]) ans+=(b[r]*h);
            else ans+=a[l];
            l++,r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}