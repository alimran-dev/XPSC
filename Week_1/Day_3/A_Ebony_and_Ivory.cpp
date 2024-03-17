#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if(a*i+b*j==c)
                ans = true;
        }
    }
    
    if (ans)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}