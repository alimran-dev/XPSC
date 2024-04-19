/*
-----------------------------
author: Md. Al Imran
created: 28-03-2024 20:49:47
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
        char arr[2 * n][2 * n];
        bool flag1 = false;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i > 1 && arr[i - 2][0] == arr[i - 1][0])
                flag1 = !flag1;
            bool flag2 = !flag1;
            for (int j = 0; j < 2 * n; j++)
            {
                if (j > 1 && arr[i][j - 2] == arr[i][j - 1])
                    flag2 = !flag2;
                if (flag2)
                    arr[i][j] = '#';
                else
                    arr[i][j] = '.';
                
            }
        }
        for (int i = 0; i < 2 * n; i++)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}