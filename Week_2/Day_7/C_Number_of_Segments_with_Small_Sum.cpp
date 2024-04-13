/*
-----------------------------
Author: Md. Al Imran
Created: 12-04-2024 17:02:10
File: C_Number_of_Segments_with_Small_Sum.cpp
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
    while(r<n)
    {
        // cout<<ans<<endl;
        sum+=v[r];
        while(sum>s && l<n) sum-=v[l],l++;
        if(sum<=s) ans+=(r-l+1);
        r++;
    }
    cout<<ans<<endl;
    return 0;
}