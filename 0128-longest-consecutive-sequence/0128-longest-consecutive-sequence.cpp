class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=0) return 0;
        unordered_set<int>st;
        for(int num:nums) st.insert(num);
        int longest=1;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int count=1;
                while(st.find(x+1)!=st.end()){
                    count++,x++;
                } longest=max(longest,count);
            }
        } return longest;
    }
};