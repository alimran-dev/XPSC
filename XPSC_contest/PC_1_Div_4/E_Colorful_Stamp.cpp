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
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if(st.empty())
                st.push(a);
            else if(st.top()!=a)
            {
                st.pop();
            }
        }
        if(st.size()<=1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}