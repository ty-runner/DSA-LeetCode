int findMin(int* nums, int numsSize) {
    if(numsSize == 0){
        return nums[0];
    }
    int min = nums[numsSize/2];
    int last = nums[0];
    if(nums[min+1] < min){
        return nums[min+1];
    }
    return min;
}
//at the half way point, if the next num is less than the last, then that is the smallest num, if it's greater, then either the number is further back or that middle number