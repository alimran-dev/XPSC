/*
-----------------------------
Author: Md. Al Imran
Created: 10-04-2024 20:35:23
File: Pep_Bidding.cpp
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
        vector<ll> a(n),b(n),c(n),d(n);
        ll sum1=0,sum2=0,sum3=0,sum4=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>c[i];
            sum3+=c[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>d[i];
            sum4+=d[i];
        }
        if(sum1>sum3 && sum2>sum4) cout<<"A"<<endl;
        else if(sum1<sum3 && sum2<sum4) cout<<"P"<<endl;
        else cout<<"DRAW"<<endl;
    }
    return 0;
}