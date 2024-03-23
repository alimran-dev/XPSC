#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

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
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += arr[i][j] - 'a';
            }
            int av = ceil(1.0 * (sum / n));
            ans += av;
        }
        cout << ans << endl;
    }
    
    return 0;
}