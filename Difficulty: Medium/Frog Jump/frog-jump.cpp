class Solution {
  public:
    int solve(int n, vector<int>&heights, vector<int>&dp){
        if(n==0) return 0;
        // int left=solve(n-1, heights)+abs(heights[n]-heights[n-1]);
        // int right=INT_MAX;
        // if(n>1) right=solve(n-2, heights)+abs(heights[n]-heights[n-2]);
        // return min(left, right);
        if(dp[n]!=-1) return dp[n];
        int left=solve(n-1, heights, dp)+abs(heights[n]-heights[n-1]);
        int right=INT_MAX;
        if(n>1) right=solve(n-2, heights, dp)+abs(heights[n]-heights[n-2]);
        return dp[n]=min(left, right);

    }
    int minCost(vector<int>& heights) {
        // Code here
        vector<int>dp(heights.size()+1, -1);
        return solve(heights.size()-1, heights, dp);
        
    }
};