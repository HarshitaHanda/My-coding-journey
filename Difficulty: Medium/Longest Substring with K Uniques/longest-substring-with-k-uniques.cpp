//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
#include<map>
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
       unordered_map<char,int> track;
        int left=0, right=0, maxlen=0, n=s.length();
        while(right<n){
            track[s[right]]++;
            if(track.size()>k){
                track[s[left]]--;
                if(track[s[left]]==0) track.erase(s[left]);
                left++;
            }
            if(track.size()==k) maxlen=max(maxlen,right-left+1);
            right++;
        } return maxlen==0?-1:maxlen;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends