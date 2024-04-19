/*
-----------------------------
author: Md. Al Imran
created: 02-04-2024 23:07:01
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
        int n;
        cin >> n;
        int ans = 0;
        if(n>=2)
            ans = ((n - 2) / 7) + 1;
        cout << ans << endl;
    }
    
    return 0;
}