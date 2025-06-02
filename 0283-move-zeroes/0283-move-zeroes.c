void moveZeroes(int* nums, int numsSize) {
    if(numsSize==0 || numsSize==1){
        return;
    }
    
    int nz=0;
    int z=0;
    while(nz<numsSize){
        if(nums[nz]!=0){
            int temp=nums[z];
            nums[z]=nums[nz];
            nums[nz]=temp;
            nz++;
            z++;
        }
        else{
            nz++;
        }

    }
}