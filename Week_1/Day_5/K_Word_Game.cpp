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
        map<string, int> m;
        string arr[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                m[arr[i][j]]++;
            }
        }
        int pt[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (m[arr[i][j]] == 1)
                    pt[i] += 3;
                else if (m[arr[i][j]] == 2)
                    pt[i]++;
            }
        }
        cout << pt[0] << " " << pt[1] << " " << pt[2] << endl;
    }

    return 0;
}