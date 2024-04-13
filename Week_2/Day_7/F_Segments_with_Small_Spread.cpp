/*
-----------------------------
Author: Md. Al Imran
Created: 13-04-2024 18:48:42
File: F_Segments_with_Small_Spread.cpp
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
    
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll l=0,r=0,diff=LONG_MAX,ans=0;
    multiset<ll> mult;
    while(r<n)
    {
        mult.insert(v[r]);
        ll mx,mn;
        mx=*mult.rbegin(),mn=*mult.begin();
        diff=mx-mn;
        if(diff<=k) ans+=(r-l+1);
        else
        {
            while(l<r)
            {
                mx=*mult.rbegin(),mn=*mult.begin();
                diff=mx-mn;
                if(diff<=k) break;
                auto a=mult.find(v[l]);
                mult.erase(a);
                l++;
            }
            mx=*mult.rbegin(),mn=*mult.begin();
            diff=mx-mn;
            if(diff<=k) ans+=(r-l+1);
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}