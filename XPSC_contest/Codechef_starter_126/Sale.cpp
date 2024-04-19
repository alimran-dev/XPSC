#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll cnt[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cnt[i] = sum + arr[i] * 2;
            sum += arr[i];
        }
        sort(cnt, cnt + n,greater<ll>());
        cout << cnt[0] << endl;
    }
    
    return 0;
}