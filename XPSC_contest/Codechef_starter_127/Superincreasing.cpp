/*
-----------------------------
author: Md. Al Imran
created: 27-03-2024 22:17:48
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
        ll n, k, x;
        cin >> n >> k >> x;
        ll sum = 0;
        for (int i = 1; i < k; i++)
        {
            sum += sum + 1;
        }
        if (sum < x)
            yes;
        else
            no;
    }

    return 0;
}