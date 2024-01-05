int findMin(int* nums, int numsSize) {
    int min = nums[0];
    int last = nums[0];
    for(int i = (numsSize/2); i<numsSize; i++){
        last = nums[i];
        if(min>last){
            min = last;
        }
    }
    return min;
}