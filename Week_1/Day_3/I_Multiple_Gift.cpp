#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    ll mn = min(x, y);
    ll mx = max(x, y);
    int cnt = 0;
    for (ll i = mn; i <= mx; i*=2)
    {
        cnt++;
    }
    cout << cnt;
    return 0;
}