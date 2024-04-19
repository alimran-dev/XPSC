#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < 6;i++)
        {
            if(i<3)
                cnt1 += s[i] - '0';
            else
                cnt2 += s[i] - '0';
        }
        if(cnt1==cnt2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}