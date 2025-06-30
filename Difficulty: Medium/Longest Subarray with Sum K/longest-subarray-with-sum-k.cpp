class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mp;
        int sum=0, maxi=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k) maxi=i+1;
            if(mp.find(sum-k)!=mp.end()){
                int len=i-mp[sum-k];
                maxi=max(maxi,len);
            }
            if(mp.find(sum)==mp.end()) mp[sum]=i;
        } return maxi;
    }
};