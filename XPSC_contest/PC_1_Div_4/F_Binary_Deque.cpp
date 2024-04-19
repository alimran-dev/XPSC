#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int i = 0, j = n - 1;
        int ans = -1;
        if (sum == s)
            ans = 0;
        else if (sum > s)
        {
            ans++;
            while (i <= j && sum > s)
            {
                if (arr[i])
                {
                    i++;
                    ans++;
                    sum--;
                }
                else if (arr[j])
                {
                    j--;
                    ans++;
                    sum--;
                }
                else
                {
                    int l = i, m = j;
                    while (l < m)
                    {
                        if (arr[l])
                        {
                            i++;
                            ans++;
                            break;
                        }
                        else if (arr[m])
                        {
                            j--;
                            ans++;
                            break;
                        }
                        l++;
                        m--;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}