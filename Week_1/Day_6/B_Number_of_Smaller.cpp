#include<bits/stdc++.h>
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
    int i = 0, j = 0, ans = 0;
    while (j<m)
    {
        while (ar[i]<arr[j] && i<n)
        {
            ans++;
            i++;
        }
        cout << ans << " ";
        j++;
    }
    
    return 0;
}