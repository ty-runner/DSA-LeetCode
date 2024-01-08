int findMin(int* nums, int numsSize) {
    if(numsSize == 1){
        return nums[0];
    }
    int partition = numsSize/2;
    int min = nums[partition];
    int i = 0;
    while(i < numsSize){
        if(nums[i] < min){
            min = nums[i];
        }
        i++;
    }
    return min;
}
//at the half way point, if the next num is less than the last, then that is the smallest num, if it's greater, then either the number is further back or that middle number