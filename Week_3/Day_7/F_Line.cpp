/*
-----------------------------
author: Md. Al Imran
created: 04-04-2024 21:49:28
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
        string s;
        cin >> s;
        ll sum = 0;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
                v[i] = i;
            }
            else if (s[i] == 'R')
            {
                sum += (n - i - 1);
                v[i] = (n - i - 1);
            }
        }
        sort(v.begin(), v.end());
        vector<ll> ans(n);
        // cout << sum << endl;
        ll x = sum;
        for (ll i = 0; i < n; i++)
        {
            if(n-v[i]-1>v[i])
            {
                x -= v[i];
                x += n - v[i] - 1;
            }
            ans[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}