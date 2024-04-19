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
        int ans;
        if (n <= 1399)
            ans = 4;
        else if (n <= 1599)
            ans = 3;
        else if (n <= 1899)
            ans = 2;
        else
            ans = 1;
        cout << "Division " << ans << endl;
    }

    return 0;
}