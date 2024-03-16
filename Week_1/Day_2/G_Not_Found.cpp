#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool arr[26];
    memset(arr, false, sizeof(arr));
    for(char a:s)
    {
        int x = a - 'a';
        arr[x] = true;
    }
    bool flag = false;
    char ans;
    for (int i = 0; i < 26; i++)
    {
        if(!arr[i])
        {
            ans = i + 'a';
            flag = true;
            break;
        }
    }
    if(!flag)
        cout << "None" << endl;
    else
        cout << ans << endl;
    return 0;
}