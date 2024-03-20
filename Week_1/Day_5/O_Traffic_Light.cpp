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
        string x, s;
        cin >> x >> s;
        s += s;
        if (x[0] == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        bool flag = false;
        int cnt = 0, res = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                res = max(res, cnt);
                flag = false;
            }
            if (s[i] == x[0] && flag == false)
            {
                flag = true;
                cnt++;
            }
        }
        cout << res << endl;
    }

    return 0;
}