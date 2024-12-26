class Solution {
public:
    // int minim(vector<int>& nums){
    //     int mini=INT_MAX;
    //     for(int i=0;i<nums.size();i++){
    //         mini=min(mini,nums[i]);
    //     } return mini;
    // }
    int maxim(vector<int>& nums){
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++) maxi=max(maxi,nums[i]);
        return maxi;
    }
    int divi(vector<int>& nums,int k){
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+ceil((double)nums[i]/(double) k);
        } return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=maxim(nums); int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            int total=divi(nums,mid);
            if(total<=threshold){
                ans=min(ans,mid);
                high=mid-1;

            } else low=mid+1;


        } return ans;
    }
};