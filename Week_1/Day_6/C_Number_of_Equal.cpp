#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll ar[n], arr[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = 0;
    ll ans = 0;
    while (i < n && j < m)
    {
        int cnt1 = 0, cnt2 = 0, val = ar[i];
        while (ar[i] == val && i < n)
        {
            cnt1++;
            i++;
        }
        while (val > arr[j] && j < m)
        {
            j++;
        }

        while (arr[j] == val && j < m)
        {
            cnt2++;
            j++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;
    return 0;
}