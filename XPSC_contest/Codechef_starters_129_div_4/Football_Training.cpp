/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 20:31:59
File: Football_Training.cpp
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
    
    ll a,b; cin>>a>>b;
    if(a>b) cout<<"FREEKICK"<<endl;
    else cout<<"PENALTY"<<endl;
    return 0;
}