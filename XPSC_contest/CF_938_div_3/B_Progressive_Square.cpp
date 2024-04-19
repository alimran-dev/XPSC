/*
-----------------------------
author: Md. Al Imran
created: 08-04-2024 20:46:54
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
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> v(n*n);
        map<ll, ll> mp;
        map<ll, ll> m;
        for (int i = 0; i < n*n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        ll mat[n][n];
        mat[0][0] = v[0];
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                mat[i + 1][j] = mat[i][j] + c;
                mat[i][j + 1] = mat[i][j] + d;
            }
        }
        mat[n - 1][n - 1] = mat[n - 2][n - 1] + c;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[mat[i][j]]++;
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(mp[mat[i][j]]!=m[mat[i][j]])
                {
                    flag = false;
                    break;
                }
            }
            if(!flag)
                break; 
        }
        if(flag)
            yes;
        else
            no;
    }
    
    return 0;
}