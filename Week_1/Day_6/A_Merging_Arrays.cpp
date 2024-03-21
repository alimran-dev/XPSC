#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int ar[n], arr[m];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int ans[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n)
    {
        while (arr[j] <= ar[i] && j < m)
        {
            ans[k] = arr[j];
            j++;
            k++;
        }
        ans[k] = ar[i];
        i++;
        k++;
        while (i >= n && j < m)
        {
            ans[k] = arr[j];
            j++;
            k++;
        }
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}