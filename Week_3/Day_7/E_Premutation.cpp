/*
-----------------------------
author: Md. Al Imran
created: 04-04-2024 17:44:57
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
        int mat[n + 1][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mat[i][j];
            }
        }
        vector<int> ans(n);
        int x, idx = 1;
        for (int i = 0; i < n - 1; i++)
        {
            map<int, int> m;
            for (int j = 0; j < n; j++)
            {
                m[mat[j][i]]++;
                if(i!=0 && mat[j][i]!=x)
                {
                    ans[++idx] = mat[j][i];
                    x = mat[j][i];
                    break;
                }
            }
            if (i == 0)
            {
                for (auto a : m)
                {
                    if (a.second > 1)
                        ans[0] = a.first;
                    else if (a.second == 1)
                    {
                        ans[1] = a.first;
                        x = a.first;
                    }
                }
            }
        }
        for(int z:ans)
            cout << z << " ";
        cout << endl;
    }

    return 0;
}