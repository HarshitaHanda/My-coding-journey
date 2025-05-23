class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxi=0; int res=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxi=maxi+arr[i];
            res=max(res,maxi);
            if(maxi<0) maxi=0;
        } return res;
    }
};