int maxProduct(int* nums, int numsSize) {
    int current = nums[0];
    int result = nums[0];
    int total = nums[0];
    for(int i=1; i<numsSize; i++){
        total *= nums[i];
        if(current*nums[i] > result){
            result = current * nums[i];
        }
        else if(nums[i] > result){
            result = nums[i];
        }
        current = nums[i];
    }
    if(total > result){ result = total;}
    return result;
}
//132/190 test cases passed
//Test case: [2,-5,-2,-4,3]