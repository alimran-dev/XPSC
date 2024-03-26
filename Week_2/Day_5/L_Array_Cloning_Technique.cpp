/*
-----------------------------
author: Md. Al Imran
created: 26-03-2024 16:19:33
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int cnt = 0, cnt2 = 0, val = arr[0], cntV = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == val)
            {
                cnt2++;
                if (cnt2 > cnt)
                {
                    cnt = cnt2;
                    cntV = val;
                }
            }
            else
            {
                val = arr[i];
                cnt2 = 1;
            }
        }
        if (cnt == n)
        {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        while (cnt < n)
        {
            int rem = n - cnt;
            ans++;
            ans += min(cnt, rem);
            cnt += min(cnt, rem);
        }
        cout << ans << endl;
    }

    return 0;
}