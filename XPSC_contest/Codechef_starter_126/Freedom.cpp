#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = arr[i];
                int y = arr[j];
                int a = x - y;
                int b = x + y;
                int c = x * y;
                if(c-b==b-a)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}