/*
-----------------------------
author: Md. Al Imran
created: 29-03-2024 19:34:01
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
        if(n<4)
        {
            no;
            continue;
        }
        stack<char> st;
        bool flag = true;
        for (char b : s)
        {
            if ((st.empty() && (b == 'm' || b == 'M')) || (!st.empty() && (st.top() == 'm' || st.top() == 'M')) && (b == 'm' || b == 'M' || b == 'e' || b == 'E'))
                st.push(b);
            else if (!st.empty() && (st.top() == 'e' || st.top() == 'E') && (b == 'e' || b == 'E' || b == 'o' || b == 'O'))
                st.push(b);
            else if (!st.empty() && (st.top() == 'o' || st.top() == 'O') && (b == 'o' || b == 'O' || b == 'w' || b == 'W'))
                st.push(b);
            else if (!st.empty() && (st.top() == 'w' || st.top() == 'W') && (b == 'w' || b == 'W'))
                st.push(b);
            else
            {
                flag = false;
                break;
            }
        }
        if(!st.empty() && (st.top()!='w' && st.top()!='W'))
            flag = false;
        if (flag)
            yes;
        else
            no;
    }

    return 0;
}