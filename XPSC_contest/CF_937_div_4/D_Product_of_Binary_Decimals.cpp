/*
-----------------------------
author: Md. Al Imran
created: 28-03-2024 21:49:35
-----------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;

bool isBinary(int x)
{
    while (x)
    {
        int y = x % 10;
        x /= 10;
        if(y!=0 && y!=1)
            return false;
    }
    return true;
}

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
        bool flag = true;
        int x = n;
        while (x)
        {
            int a = x % 10;
            x /= 10;
            if (a != 0 && a != 1)
                flag = false;
        }
        if (flag)
            yes;
        else
        {

        }
    }

    return 0;
}