#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
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
        string s;
        cin >> s;
        if(n!=5)
        {
            cout << "NO" << endl;
            continue;
        }
        bool ans[5];
        memset(ans, false, sizeof(ans));
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='T')
                ans[0] = true;
            else if(s[i]=='i')
                ans[1] = true;
            else if(s[i]=='m')
                ans[2] = true;
            else if(s[i]=='u')
                ans[3] = true;
            else if(s[i]=='r')
                ans[4] = true;
        }
        bool flag = true;
        for (int i = 0; i < 5; i++)
        {
            if(!ans[i])
                flag = false;
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}