class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 1; // Start from the first positive integer
        int i = 0;   // Pointer to iterate through the array

        while (k > 0) {
            if (i < arr.size() && arr[i] == low) {
                // If the current array element matches low, move both pointers
                i++;
            } else {
                // If there's a gap, it's a missing number; decrement k
                k--;
            }
            low++;
        }

        // The loop stops when k == 0, and `low - 1` is the kth missing number
        return low - 1;
    }
};