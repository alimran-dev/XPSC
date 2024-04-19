#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        ll sum = 0;
        ll mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if(mn>arr[i])
                mn = arr[i];
        }
        ll ans = sum - mn * n;
        cout << ans << endl;
    }
    
    return 0;
}