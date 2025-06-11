class Solution {
public:
    void backtrack(vector<int>& nums, int ind, vector<vector<int>>&res, vector<int> path){
        //ind=0;
        res.push_back(path);
           
        for(int i=ind;i<nums.size();i++){
            path.push_back(nums[i]);
            backtrack(nums, i+1, res, path);
            path.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>path;
        backtrack(nums, 0, res, path);
        return res;
    }
};