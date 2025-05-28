class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int result=1; int temp=1;
        int i=1,j=0;
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        while(i<arr.size()){
            if(arr[i]<=dep[j]){
                i++; temp++;
            } else{
                temp--; j++;
            } result=max(result,temp);
        } return result;
        
    }
};
