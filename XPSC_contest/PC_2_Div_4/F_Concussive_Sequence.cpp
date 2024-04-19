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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int i = 1, j = n - 1;
        while (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i += 2;
            j -= 2;
        }
        bool flag = true;
        for (int i = 1; i < n - 1; i++)
        {
            if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}