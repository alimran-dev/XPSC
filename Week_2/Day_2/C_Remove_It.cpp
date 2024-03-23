#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=x)
            arr[cnt++] = arr[i];
    }
    for (int i = 0; i < cnt; i++)
    {
        cout << arr[i] << " ";
    }
    if(cnt==0)
        cout << endl;
    return 0;
}