/*
-----------------------------
author: Md. Al Imran
created: 08-04-2024 20:36:47
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if(n%2==0 && a*2>b)
        {
            cout << (n / 2) * b << endl;
        }
        else if(n%2==1 && a*2>b)
        {
            cout << ((n / 2) * b) + a << endl;
        }
        else if(a*2<=b)
        {
            cout << n * a << endl;
        }
    }
    
    return 0;
}