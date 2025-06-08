class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>& s, int size, int count){
        if(count==size/2){
            s.pop();
            return;
        }
        int num=s.top();
        s.pop();
        solve(s, size, count+1);
        s.push(num); 
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int n=s.size();
        solve(s, n, 0);
        
    }
};