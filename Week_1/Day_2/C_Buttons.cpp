#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = a + b;
    int y = max(a, b) * 2 - 1;
    if(x>y)
        cout << x << endl;
    else
        cout << y << endl;
    return 0;
}