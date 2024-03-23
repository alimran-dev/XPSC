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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for(char a:s)
            {
                if(a=='U' && arr[i]>0)
                {
                    arr[i]--;
                }
                else if(a=='U' && arr[i]==0)
                {
                    arr[i] = 9;
                }
                else if(a=='D' && arr[i]<9)
                {
                    arr[i]++;
                }
                else if(a=='D' && arr[i]==9)
                {
                    arr[i] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}