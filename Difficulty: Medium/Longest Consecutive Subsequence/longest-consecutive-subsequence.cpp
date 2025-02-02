//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int longestConsecutive(vector<int>& arr) {
    if (arr.empty()) return 0; // Handle empty array case

    sort(arr.begin(), arr.end()); // Sort the array
    int cnt = 1;                 // Current subsequence count
    int maxCnt = 1;              // Maximum subsequence length

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) continue; // Skip duplicates

        if (arr[i] == arr[i - 1] + 1) {
            cnt++; // Extend the current subsequence
        } else {
            maxCnt = max(maxCnt, cnt); // Update max subsequence length
            cnt = 1;                   // Reset counter for new subsequence
        }
    }

    return max(maxCnt, cnt); // Final check for the last subsequence
}};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends