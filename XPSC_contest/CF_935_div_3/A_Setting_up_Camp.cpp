#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll tn1 = b / 3;
        b = b % 3;
        ll tn2 = (b + c) / 3;
        ll x = (b + c) % 3;
        ll tn3 = 0;
        if (x > 0)
            tn3 = 1;
        ll ans = tn1 + tn2 + tn3 + a;
        if (b!=0 && tn2 == 0)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}