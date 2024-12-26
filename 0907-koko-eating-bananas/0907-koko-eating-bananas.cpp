class Solution {
public:
    int maxim(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i:piles) maxi=max(i,maxi);
        return maxi;
    }
    long long totalhour(vector<int>& piles, int mid){
        long long ans=0;
        for(int i=0;i<piles.size();i++){
            ans=ans+((piles[i] + mid - 1) / mid);
        } return ans;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=maxim(piles); int k=0;
        while(low<=high){
            int mid=(low+high)/2; long long hr=totalhour(piles,mid);
            if(hr<=h){
                k=mid;
                high=mid-1;
            } else low=mid+1;


        } return k;
    }
};