/*
-----------------------------
author: Md. Al Imran
created: 27-03-2024 22:07:11
-----------------------------
*/
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
        int x = b + 10;
        int y = x - a;
        int z = y % 3;
        if (y <= 0)
            cout << 0 << endl;
        else if(z==0)
            cout << y / 3 << endl;
        else
            cout << y / 3 + 1 << endl;
    }

    return 0;
}