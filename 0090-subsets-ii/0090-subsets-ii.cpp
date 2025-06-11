class Solution {
public:
    void backtrack(vector<int>path, vector<vector<int>> &res, vector<int>nums, int index){
        res.push_back(path);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            path.push_back(nums[i]);
            backtrack(path, res, nums,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        vector<int>path; vector<vector<int>> res;
        backtrack(path, res, nums, 0);
        return res;
    }
};