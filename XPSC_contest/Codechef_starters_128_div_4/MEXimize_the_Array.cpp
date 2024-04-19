/*
-----------------------------
author: Md. Al Imran
created: 03-04-2024 20:45:48
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
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += abs(ar[i] - i);
        }
        cout << ans << endl;
    }
    
    return 0;
}