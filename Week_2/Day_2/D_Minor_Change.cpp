#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(t[i]!=s[i])
            ans++;
    }
    cout << ans << endl;
    return 0;
}