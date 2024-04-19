/*
-----------------------------
author: Md. Al Imran
created: 02-04-2024 22:38:20
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
        int x, y, z;
        cin >> x >> y >> z;
        int m = x * y;
        int h = m / 60;
        int hm = m % 60;
        int d = h / 24;
        int dh = h % 24;
        int ans;
        if(hm>0 || dh>0)
            d++;
        if(d<=z)
            yes;
        else
            no;
    }
    
    return 0;
}