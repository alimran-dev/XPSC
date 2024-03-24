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
        int j = 0, cnt = 0;
        bool flag[99999];
        memset(flag, false, sizeof(flag));
        for (int i = 0; i < n; i++)
        {
            if (!flag[arr[i]])
            {
                arr[j++] = arr[i];
                flag[arr[i]] = true;
                cnt++;
            }
        }
        if ((n - cnt) % 2)
            cout << cnt - 1 << endl;
        else
            cout << cnt << endl;
    }

    return 0;
}