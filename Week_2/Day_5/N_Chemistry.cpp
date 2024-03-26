/*
-----------------------------
author: Md. Al Imran
created: 26-03-2024 22:31:42
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> m;
        for (char a : s)
        {
            m[a]++;
        }
        int x = 0;
        for (auto it : m)
        {
            if (it.second % 2 != 0)
                x++;
        }
        if (x - 1 < 0)
            x = 0;
        else
            x = x - 1;
        if (k >= x && k <= n)
            yes;
        else
            no;
    }

    return 0;
}