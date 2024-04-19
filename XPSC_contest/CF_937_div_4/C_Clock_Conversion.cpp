/*
-----------------------------
author: Md. Al Imran
created: 28-03-2024 21:18:02
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
        string s;
        cin >> s;
        bool flag;
        int h = (s[0] - '0') * 10 + s[1] - '0';
        int m = (s[3] - '0') * 10 + s[4] - '0';
        if (h < 12)
            flag = true;
        else
            flag = false;
        if (flag)
        {
            if(h==0)
            {
                s[0] = '1';
                s[1] = '2';
            }
            cout << s << " "
                 << "AM" << endl;
        }
            
        else
        {
            if (h > 12)
            {
                h -= 12;
            }
            if(h>=10)
            {
                s[1] = h % 10 + '0';
                s[0] = (h / 10) % 10 + '0';
            }
            if (h < 10)
            {
                s[0] = '0';
                s[1] = h + '0';
            }
            cout << s << " "
                 << "PM" << endl;
        }
    }

    return 0;
}