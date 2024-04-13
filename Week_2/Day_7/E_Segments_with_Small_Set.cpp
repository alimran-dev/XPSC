/*
-----------------------------
Author: Md. Al Imran
Created: 13-04-2024 10:02:15
File: E_Segments_with_Small_Set.cpp
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
    ll l=0,r=0,cnt=0,ans=0,cnt2=0;
    map<ll,ll> mp;
    while(l<n)
    {
        while(cnt<=k && r<n)
        {
            if(mp[v[r]]==0) cnt++;
            mp[v[r]]++;
            r++;
            cnt2++;
        }
        // cout<<cnt2<<" "<<cnt<<endl;
        if(cnt>k) ans+=cnt2-1;
        else ans+=cnt2;
        cnt2--;
        mp[v[l]]--;
        if(mp[v[l]]==0) cnt--;
        l++;
    }
    cout<<ans<<endl;
    return 0;
}