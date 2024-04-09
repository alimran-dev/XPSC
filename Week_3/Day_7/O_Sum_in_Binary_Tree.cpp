/*
-----------------------------
Author: Md. Al Imran
Created: 09-04-2024 21:03:34
File: O_Sum_in_Binary_Tree.cpp
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
        ll ans=0;
        while(n) ans+=n,n/=2;
        cout<<ans<<endl;
    }
    return 0;
}