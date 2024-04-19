/*
-----------------------------
author: Md. Al Imran
created: 02-04-2024 23:19:29
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
        vector<char> v(n), vv(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vv[i];
        }
        int c = 0, ch = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 'R' && vv[i] == 'S')
                c++;
            else if (v[i] == 'S' && vv[i] == 'R')
                ch++;
            if (v[i] == 'S' && vv[i] == 'P')
                c++;
            else if (v[i] == 'P' && vv[i] == 'S')
                ch++;
            if (v[i] == 'P' && vv[i] == 'R')
                c++;
            else if (v[i] == 'R' && vv[i] == 'P')
                ch++;
        }
        int ans = 0;
        if(c<=ch)
            ans = ((c+ch) / 2 + 1) - c;
        cout << ans << endl;
    }

    return 0;
}