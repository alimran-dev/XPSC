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
        string a, b;
        cin >> a >> b;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if ((a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G'))
                    continue;
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            yes;
        else
            no;
    }

    return 0;
}