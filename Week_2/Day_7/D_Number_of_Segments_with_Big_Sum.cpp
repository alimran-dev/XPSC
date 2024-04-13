/*
-----------------------------
Author: Md. Al Imran
Created: 12-04-2024 21:04:12
File: D_Number_of_Segments_with_Big_Sum.cpp
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
    
    ll n,s; cin>>n>>s;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll l=0,r=0,sum=0,ans=0;
    while(l<n)
    {
        while(sum<s && r<n)
        {
            sum+=v[r];
            r++;
        }
        // cout<<n-r+1<<endl;
        if(sum>=s) ans+=(n-r+1);
        sum-=v[l];
        l++;
    }
    cout<<ans<<endl;
    return 0;
}