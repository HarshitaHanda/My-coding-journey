//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void numbers(int n,int i){
        if(i<1) return;
        cout<<i<<" ";
        numbers(n,i-1);
    }
    void printNos(int N) {
        // code here
        // if(N<1) return;
        // printNos(N-1);
        numbers(1,N);
        
    }
};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printNos(N);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends