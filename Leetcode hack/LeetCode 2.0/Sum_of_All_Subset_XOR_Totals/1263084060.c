int helper(int* nums, int numsSize, int level, int currentXOR);

// Main function
int subsetXORSum(int* nums, int numsSize) {
    // Call the helper function with initial parameters
    return helper(nums, numsSize, 0, 0);
}

// Helper function definition
int helper(int* nums, int numsSize, int level, int currentXOR) {
    // Base condition
    if (level == numsSize) {
        return currentXOR;
    }
    // Creating include
    int include = helper(nums, numsSize, level + 1, currentXOR ^ nums[level]);
    // Creating exclude
    int exclude = helper(nums, numsSize, level + 1, currentXOR);

    return include + exclude;
}