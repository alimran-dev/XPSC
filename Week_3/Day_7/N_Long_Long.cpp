/*
-----------------------------
Author: Md. Al Imran
Created: 09-04-2024 20:08:52
File: N_Long_Long.cpp
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
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int l=0,r=0;
        ll sum=0,cnt=0;
        while(l<n)
        {
            bool flag=false;
            while(v[r]<=0 && r<n)
            {
                if(v[r]<0)
                flag=true;
                v[r]*=(-1);
                r++;
            }
            while(v[l]>=0 && l<n)
            {
                sum+=v[l];
                l++;
            }
            r=l;
            if(flag) cnt++;
        }
        cout<<sum<<" "<<cnt<<endl;
    }
    return 0;
}