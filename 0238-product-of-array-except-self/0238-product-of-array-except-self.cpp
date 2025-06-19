class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
    vector<int> pre(n, 1), suff(n, 1), res(n);

        for(int i=1;i<nums.size();i++){
            pre[i]=nums[i-1]*pre[i-1];
        }

        for(int i=nums.size()-2;i>=0;i--){
            suff[i]=nums[i+1]*suff[i+1];
        }

        for(int i=0; i<nums.size(); i++){
            res[i]=pre[i]*suff[i];
        } return res;

    }
};