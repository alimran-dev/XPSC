/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 20:08:17
File: B_Segment_with_Big_Sum.cpp
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
    ll l=0,r=0,sum=0,ans=n+1;
    bool flag=false;
    while(r<n)
    {
        sum+=v[r];
        while(sum>=s && l<n)
        {
            ans=min(ans,(r-l+1));
            sum-=v[l];
            flag=true;
            l++;
            
        }
        r++;
    }
    if(flag) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}