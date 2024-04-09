/*
-----------------------------
Author: Md. Al Imran
Created: 09-04-2024 22:58:05
File: R_Remove_Prefix.cpp
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
        vector<ll> v(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++) 
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        ll l=0,r=0,ans=0;
        while(r<n)
        {
            ll cnt=mp[v[r]],val=v[r];
            bool flag=true;
            while(cnt>1 && r<n)
            {
                mp[v[r]]--;
                if(v[r]==val) cnt--;
                r++;
                ans=r;
                flag=false;
            }
            if(flag) r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}