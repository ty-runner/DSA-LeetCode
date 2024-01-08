int search(int* nums, int numsSize, int target) {
    for(int i = 0; i<numsSize; i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}
//just uses linear search, not the best solution, but it works