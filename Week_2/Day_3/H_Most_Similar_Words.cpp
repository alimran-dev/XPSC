#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;

int fun(string a,string b)
{
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int x = a[i] - 'a', y = b[i] - 'a';
        ans += abs(1.0 * (x - y));
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                ans = min(ans, fun(ar[i], ar[j]));
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}