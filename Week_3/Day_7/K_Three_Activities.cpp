/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 13:33:00
File: K_Three_Activities.cpp
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
        ll n; cin>>n;
        vector<pair<ll,ll>> a(n),b(n),c(n);
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            a[i]={x,i};
        }
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            b[i]={x,i};
        }
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            c[i]={x,i};
        }
        sort(a.begin(),a.end(),greater<>());
        sort(b.begin(),b.end(),greater<>());
        sort(c.begin(),c.end(),greater<>());
        // for(ll i=0;i<n;i++) cout<<a[i].first<<" ";
        // cout<<endl;
        ll ans=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second)
                    ans=max(ans,a[i].first+b[j].first+c[k].first);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}