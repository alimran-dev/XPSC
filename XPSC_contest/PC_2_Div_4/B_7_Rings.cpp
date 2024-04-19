#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        ll x = a * b;
        int dg = 0;
        while (x)
        {
            x /= 10;
            dg++;
        }
        if (dg == 5)
            yes;
        else
            no;
    }

    return 0;
}