#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, m;
        cin >> a >> b >> m;
        ll x = (m + 1) / a;
        ll p = (m + 1) % a;
        ll y = (m + 1) / b;
        ll q = (m + 1) % b;
        ll ans = x + y;
        if (p != 0 && q != 0)
            ans += 2;
        else if (p != 0 || q != 0)
            ans++;
        cout << ans << endl;
    }

    return 0;
}