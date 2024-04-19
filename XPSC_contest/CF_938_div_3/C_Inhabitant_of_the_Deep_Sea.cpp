/*
-----------------------------
author: Md. Al Imran
created: 09-04-2024 13:25:10
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

    ll t; cin>>t; while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll x,y;
        if(k%2==0) x=k/2;
        else x=k/2+1;
        y=k-x;
        ll l=0,r=n-1;
        ll ans=0;
        while(x && l<=r)
        {
            if(x>=v[l])
            {
                x-=v[l];
                v[l]=0;
                ans++;
                l++;
            }
            else
            {
                v[l]-=x;
                x=0;
                break;
            }
        }
        while(y && r>=l)
        {
            if(y>=v[r] && v[r]>0)
            {
                y-=v[r];
                v[r]=0;
                ans++;
                r--;
            }
            else if(v[r]>0)
            {
                v[r]-=y;
                y=0;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}