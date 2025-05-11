//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    static bool compare(vector<int> &a, vector<int> &b){
        double a1=(1.0 *a[0])/a[1];
        double b1=(1.0*b[0])/b[1];
        return a1>b1;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<vector<int>>items(n, vector<int>(2));
        for(int i=0;i<val.size();i++){
            items[i][0]=val[i];
            items[i][1]=wt[i];
        }
        sort(items.begin(),items.end(), compare);
        int cap=capacity; double result=0;
        for(int i=0;i<val.size();i++){
            if(items[i][1]<=cap){
                result+=items[i][0];
                cap-=items[i][1];
            }
            else{
                result+=(1.0 * items[i][0] / items[i][1])*cap;
                break;
            }
            
        } return result;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends