class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=0; int prev2=0;
        for(int i=0;i<nums.size();i++){
            int pick=nums[i];
            if(i>1) pick+=prev2;
            int skip=prev;
            int maxi=max(pick, skip);
            prev2=prev; 
            prev=maxi;
        } return prev;
    }
};