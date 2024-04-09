/*
-----------------------------
Author: Md. Al Imran
Created: 09-04-2024 21:32:17
File: Q_Mainak_and_Array.cpp
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
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(i>0) ans=max(ans,v[i-1]-v[i]);
            if(i>0) ans=max(ans,v[i]-v[0]);
            if(i<n-1) ans=max(ans,v[n-1]-v[i]);   
        }
        cout<<ans<<endl;
    }
    return 0;
}