class Solution {
public:
    int jump(vector<int>& nums) {
      //  int maxi=0;
        int l=0, r=0; int count=0;
        while(r<nums.size()-1){
            int maxi=0;
            for(int i=l;i<=r;i++){
                maxi=max(maxi,i+nums[i]);
               
            }l=r+1; r=maxi; count++;
        } return count;
    }
};