/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int sum = 0;
    int* result = (int*)malloc(3*sizeof(int));
    int** final = (int**)malloc(sizeof(result));
    *returnSize = 0;
    for(int i = 0; i<numsSize; i++){
        sum += nums[i];
        if(i >= 3 && sum == 0){
            result[0] = nums[i-2];
            result[1] = nums[i-1];
            result[2] = nums[i];
            final[0] = result;
            *returnSize++;
        }
    }
    return final;
}