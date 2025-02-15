bool check(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return true; // Arrays of size 0 or 1 are trivially sorted and rotated
    }

    int count = 0;

    // Find the point where the order is disrupted
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[i - 1]) {
            count++;
        }
    }
    if(nums[numsSize-1]>nums[0]) count++;

    // For a rotated sorted array, there should be at most one disruption point
    return count <= 1;
}
