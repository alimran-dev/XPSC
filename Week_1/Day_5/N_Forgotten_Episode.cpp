#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int arr[n];
    bool fr[n + 1];
    memset(fr, false, sizeof(fr));
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        fr[arr[i]] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if(!fr[i])
            cout << i << endl;
    }
    
    return 0;
}