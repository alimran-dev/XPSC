/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 11:56:27
File: T_Alt_Tab.cpp
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
    
    ll n; cin>>n;
    vector<string> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    reverse(v.begin(),v.end());
    // for(ll i=0;i<n;i++) cout<<v[i]<<endl;
    map<string,bool> mp;
    for(string s:v)
    {
        if(!mp[s])
        {
            int x=s.size()-1,y=s.size()-2;
            cout<<s[y]<<s[x];
            mp[s]=true;
        }
    }
    return 0;
}