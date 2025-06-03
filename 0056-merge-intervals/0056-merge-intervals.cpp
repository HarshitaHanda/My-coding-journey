class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1) return intervals;
        vector<vector<int>> ans;
    
        sort(intervals.begin(), intervals.end());
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] <= ans.back()[1]){
                vector<int> temp(2);
                temp[0] = min(ans.back()[0], intervals[i][0]);
                temp[1] = max(ans.back()[1], intervals[i][1]);
                ans.pop_back(); 
                ans.push_back(temp);
            }
            else ans.push_back(intervals[i]);
        } return ans;
    }
};