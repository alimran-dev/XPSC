/*
-----------------------------
author: Md. Al Imran
created: 03-04-2024 20:31:56
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
    
    int x,y;
    cin >> x >> y;
    int r = x + y;
    if(r>=2000)
        yes;
    else
        no;
    return 0;
}