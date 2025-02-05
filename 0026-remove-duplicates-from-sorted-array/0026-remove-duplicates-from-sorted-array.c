int removeDuplicates(int* nums, int numsSize) {
        int j=0;
        for(int i=1;i<numsSize;i++){
            if(nums[j]!=nums[i]){
                j++;
                nums[j]=nums[i];
            }
        }
       return j+1;

}