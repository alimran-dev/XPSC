#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int c[200005] = {0};
        bool flag = true;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            c[arr[i]]++;
            if (flag && c[arr[i]] == 3)
            {
                flag = false;
                ans = arr[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}