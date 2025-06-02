class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        
        // return vector with correct order of elements
     

        set<int> st;
        for(auto i: a){
            st.insert(i);
        }
        for(auto j: b){
            st.insert(j);
        }
        for(auto k: st){
            cout<< k<< " ";
        }
 
    }
};