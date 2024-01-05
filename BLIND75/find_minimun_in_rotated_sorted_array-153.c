int findMin(int* nums, int numsSize) {
    int min = nums[0];
    int last = nums[0];
    for(int i = (numsSize/2)-1; i<numsSize; i++){
        min = nums[i];
        if(min>last){
            min = last;
        }
        last = nums[i];
    }
    return min;
}