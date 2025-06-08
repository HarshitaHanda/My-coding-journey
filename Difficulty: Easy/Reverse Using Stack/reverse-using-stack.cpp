class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char>st; string x;
        for(auto it: S){
            st.push(it);
        } 
        while(!st.empty()){
            x+=st.top();
            st.pop();
        } return x;
    }
};