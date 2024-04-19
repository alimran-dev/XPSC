/*
-----------------------------
author: Md. Al Imran
created: 03-04-2024 20:37:46
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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int curr = 0, mx = 0, mn = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] >=l && ar[i]<=r)
                curr++;
            else
                curr--;
            mx = max(mx, curr);
            mn = min(mn, curr);
        }
        cout << mx << " " << mn << endl;
    }

    return 0;
}