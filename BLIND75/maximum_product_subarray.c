int maxProduct(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0; 
    }
    int result = nums[0];
    int currentMax = nums[0];
    int currentMin = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < 0) {
            // Swap currentMax and currentMin when encountering a negative number.
            int temp = currentMax;
            currentMax = currentMin;
            currentMin = temp;
        }
        // Update currentMax and currentMin based on the current element.
        currentMax = (currentMax * nums[i] > nums[i]) ? (currentMax * nums[i]) : nums[i];
        currentMin = (currentMin * nums[i] < nums[i]) ? (currentMin * nums[i]) : nums[i];

        result = (currentMax > result) ? currentMax : result;
    }
    return result;
}
