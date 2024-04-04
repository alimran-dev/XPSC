/*
-----------------------------
author: Md. Al Imran
created: 04-04-2024 16:32:54
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
        vector<string> v(n);
        map<string, bool> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]] = true;
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 1; j < v[i].size(); j++)
            {
                string s1 = v[i].substr(0, j);
                string s2 = v[i].substr(j, v[i].size() - 1);
                if(m[s1] && m[s2])
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
                ans += "1";
            else
                ans += "0";
        }
        cout << ans << endl;
    }

    return 0;
}