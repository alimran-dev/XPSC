/*
-----------------------------
author: Md. Al Imran
created: 06-04-2024 23:54:27
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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                ll cnt = 0, j = i;
                while (v[i] <= q && i < n)
                {
                    cnt++;
                    i++;
                }
                if(cnt>=k)
                {
                    ll a = cnt - k + 1;
                    ll x = a * (a + 1) / 2;
                    ans += x;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}