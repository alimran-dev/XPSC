/*
-----------------------------
author: Md. Al Imran
created: 25-03-2024 01:30:59
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
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (char a : s)
        {
            if ((st.empty() && a != ')') || a == '(')
                st.push(a);
            else if (!st.empty() && st.top() == '(' && a == ')')
                st.pop();
            else
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}