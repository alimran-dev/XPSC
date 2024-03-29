/*
-----------------------------
author: Md. Al Imran
created: 29-03-2024 20:13:32
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

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> v(n+1);
        vector<ll> s(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (i == 1)
                s[i] = v[i];
            else
                s[i] = s[i - 1] + v[i];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            ll sum = s[l - 1] + ((r - l + 1) * k) + (s[n] - s[r]);
            // cout << sum << endl;
            if (sum % 2)
                yes;
            else
                no;
        }
    }

    return 0;
}