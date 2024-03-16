#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = 1, ans = -1;
    while (c * i <= max(a, b))
    {
        if (c * i >= min(a, b))
        {
            ans = c * i;
            break;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}