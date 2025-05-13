class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int sum=0; int mini=nums.size() + 1;
        int l=0,r=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=k){
                mini=min(mini,r-l+1);
                sum-=nums[l];
                l++;
            } r++;
    
        }  return mini == nums.size() + 1 ? 0 : mini;
    }
};