/*
-----------------------------
author: Md. Al Imran
created: 29-03-2024 22:37:36
-----------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;
const int N = 205;
ll mat[N][N];
int n, m;
vector<pair<int, int>> d = {{-1, -1}, {1, -1}, {-1, 1}, {1, 1}};
bool isValid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}
ll fun(int si,int sj)
{
    ll sum = mat[si][sj];
    for(auto it:d)
    {
        int ci = si + it.first, cj = sj + it.second;
        while (isValid(ci,cj))
        {
            sum += mat[ci][cj];
            ci += it.first;
            cj += it.second;
        }
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        ll ans = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll val = fun(i, j);
                ans = max(val, ans);
            }
        }
        cout << ans << endl;
    }

    return 0;
}