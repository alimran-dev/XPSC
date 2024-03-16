#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double t = c + 0.5;
    int ans = (int)(t / a) * b;
    cout << ans << endl;
    return 0;
}