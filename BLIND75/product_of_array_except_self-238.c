/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int left = 1;
    for(int i = 0; i < numsSize; i++){
        result[i] = left;
        left *= nums[i];
    }
    left = 1;
    for(int i = numsSize - 1; i >= 0; i--){
        result[i] *= left;
        left *= nums[i];
    }
    *returnSize = numsSize;
    return result;
}
