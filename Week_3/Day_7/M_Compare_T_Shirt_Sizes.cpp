/*
-----------------------------
Author: Md. Al Imran
Created: 09-04-2024 19:25:56
File: M_Compare_T_Shirt_Sizes.cpp
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

    ll tc; cin>>tc; while(tc--)
    {
        string a,b; cin>>a>>b;
        int x1=0,x2=0;
        for(int i=0;i<a.size()-1;i++)
            if(a[i]=='X') x1++;
        for(int i=0;i<b.size()-1;i++)
            if(b[i]=='X') x2++;
        
        if((a[a.size()-1]=='L' && (b[b.size()-1]=='S' || b[b.size()-1]=='M')) || (a[a.size()-1]=='M' && b[b.size()-1]=='S'))
            cout<<">"<<endl;
        else if((a[a.size()-1]=='S' && (b[b.size()-1]=='L' || b[b.size()-1]=='M')) || (a[a.size()-1]=='M' && b[b.size()-1]=='L'))
            cout<<"<"<<endl;
        else if(a[a.size()-1] == b[b.size()-1] && a[a.size()-1]=='L')
        {
            if(x1>x2) cout<<">"<<endl;
            else if(x1<x2) cout<<"<"<<endl;
            else cout<<"="<<endl;
        }
        else if(a[a.size()-1] == b[b.size()-1] && a[a.size()-1]=='S')
        {
            if(x1>x2) cout<<"<"<<endl;
            else if(x1<x2) cout<<">"<<endl;
            else cout<<"="<<endl;
        }
        else cout<<"="<<endl;
    }
    return 0;
}