/*
-----------------------------
author: Md. Al Imran
created: 26-03-2024 21:25:39
-----------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;
bool fun(vector<int> v)
{
    bool flag = true;
    int x = 0, y = v.size() - 1;
    while (x<y)
    {
        if(v[x]!=v[y])
            flag = false;
        x++;
        y--;
    }
    return flag;
}
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        int p = 0,  q= n - 1;
        while (p < q)
        {
            if (v[p] != v[q])
            {
                flag = false;
                break;
            }
            p++;
            q--;
        }
        if (flag || v.size()<=2)
        {
            yes;
            continue;
        }
        vector<int> a;
        vector<int> b;
        for (int i = p; i <= q; i++)
        {
            if(v[i]!=v[p])
                a.push_back(v[i]);
            if(v[i]!=v[q])
                b.push_back(v[i]);
        }
        bool ans1 = fun(a);
        bool ans2 = fun(b);
        if(ans1 || ans2)
            yes;
        else
            no;
    }

    return 0;
}