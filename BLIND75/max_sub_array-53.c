int maxSubArray(int* nums, int numsSize) {
    int total = nums[0];
    int result = nums[0];
    for(int i = 1; i<numsSize; i++){
        total += nums[i];
        if(nums[i]>total){
            total = nums[i];
        }
        if(total > result){
            result = total;
        }
    }
    return result;
}