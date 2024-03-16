#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[4];
    memset(s, '0', sizeof(s));
    int j = 3;
    while (n)
    {
        int x = n % 10;
        n /= 10;
        s[j] = x + '0';
        j--;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << s[i];
    }
    return 0;
}