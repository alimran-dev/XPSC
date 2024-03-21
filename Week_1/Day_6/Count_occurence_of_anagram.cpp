// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int l=0,r=0;
	    int n=txt.size();
	    int m=pat.size();
	    int freq1[26]={0};
	    int freq2[26]={0};
	    for(char a:pat)
	    freq1[a-'a']++;
	    int ans=0;
	    while(r<n)
	    {
	        freq2[txt[r]-'a']++;
	        if(r-l+1==m)
	        {
	            bool flag=true;
	            for(int i=0;i<26;i++)
	            {
	                if(freq1[i]!=freq2[i])
	                {
	                flag=false;
	                break;
	                }
	            }
	            if(flag)
	            ans++;
	            freq2[txt[l]-'a']--;
	            l++;
	            r++;
	        }
	        else
	        {
	            r++;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends