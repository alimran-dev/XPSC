/*
-----------------------------
author: Md. Al Imran
created: 05-04-2024 22:27:50
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<ll> pq;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]!=0)
                pq.push(v[i]);
            else if(!pq.empty() && v[i]==0)
            {
                ans += pq.top();
                pq.pop();
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}