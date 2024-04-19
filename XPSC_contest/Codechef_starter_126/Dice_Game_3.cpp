#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = n / 2;
        long long int ans;
        if(n==1)
        {
            cout << 6 << endl;
            continue;
        }
        if(n%2)
            ans = (x + 1) * 12 + x - 6;
        else
            ans = x * 12 + x;
        cout << ans << endl;
    }

    return 0;
}