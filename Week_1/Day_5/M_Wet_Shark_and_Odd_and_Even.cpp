#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i], sum += arr[i];
    if(sum%2==0)
        cout << sum << endl;
    else
    {
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2)
            {
                sum -= arr[i];
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}