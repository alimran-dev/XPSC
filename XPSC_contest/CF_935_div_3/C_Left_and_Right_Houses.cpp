#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt1 = 0, cnt2 = 0;
        for (char a : s)
        {
            if (a == '0')
                cnt1++;
            else if (a == '1')
                cnt2++;
        }
        if (cnt1 == 0 || cnt2 == 0)
            cout << 0 << endl;
        else if (cnt1 == cnt2)
            cout << 0 << endl;
        else
        {
            int i = 0;
            cnt1 /= 2;
            cnt2 /= 2;
            while (cnt1 == 0 || cnt2 == 0)
            {
                if (s[i] == '0')
                    cnt1--;
                else if (s[i] == '1')
                    cnt2--;
                i++;
            }
            cout << i << endl;
        }
    }

    return 0;
}