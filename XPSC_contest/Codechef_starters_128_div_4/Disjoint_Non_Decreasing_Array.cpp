/*
-----------------------------
author: Md. Al Imran
created: 03-04-2024 21:01:09
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
        int x = -1;
        int val,j;
        bool flag1 = false, flag = true;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && ar[i] < ar[i - 1] && x == -1)
            {
                x = ar[i - 1] - ar[i];
                val = ar[i - 1];
                flag1 = true;
                j = i;
                break;
            }
        }
        if (flag1)
            for (int i = j; i < n; i++)
            {
                if ((ar[i] < val) || (ar[i - 1] > ar[i]))
                    ar[i] += x;
            }
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && ar[i] < ar[i - 1])
                flag = false;
        }

        if (flag)
            yes;
        else
            no;
    }

    return 0;
}