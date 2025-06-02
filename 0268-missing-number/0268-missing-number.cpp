class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x1 = 0;          // XOR of all indices (1 to n)
        int x2 = 0;          // XOR of all elements in the array
        int n = nums.size(); // Size of the array

        // XOR all indices from 0 to n-1 and elements in nums
        for (int i = 0; i < n; i++) {
            x1 = x1 ^ (i); // XOR of all indices (1 to n)
            x2 = x2 ^ nums[i]; // XOR of all elements in nums
        }

        x1 = x1 ^ n; // XOR with n (since indices go from 0 to n)

        return x1 ^ x2; // The missing number will be x1 ^ x2
    }
};