/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 20:42:42
File: Ballon_d_Or.cpp
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
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==2) cnt++;
        }
        if(cnt%8==0) yes;
        else no;
    }
    return 0;
}