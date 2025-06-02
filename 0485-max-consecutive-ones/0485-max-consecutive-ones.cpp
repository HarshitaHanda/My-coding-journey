class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (int num = 0; num < nums.size(); num++) {
            if (nums[num] == 1) {
                // Increment currentCount for consecutive 1's
                currentCount++;
            } else {
                // Reset currentCount when encountering 0
                maxCount = max(maxCount, currentCount);
                currentCount = 0;
            }
        }
        // int num=0;
        // while ( num < nums.size()) {
        //     if (nums[num] == 1) {
        //         // Increment currentCount for consecutive 1's
        //         currentCount++;
        //         //num++;
        //     } else {
        //         // Reset currentCount when encountering 0
        //         maxCount = max(maxCount, currentCount);
        //         currentCount = 0;
        //     }num++;
        // }
    


// Update maxCount for the last sequence of consecutive 1's
maxCount = max(maxCount, currentCount);

return maxCount;
}
}
;