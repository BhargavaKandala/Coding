int exists(int num, int nums[], int n){
    for(int i = 0; i < n; i++){
        if(nums[i] == num)
        return 1;
    }
    return 0;
}

int findMaxK(int nums[], int numsSize) {
    int largest = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0 && exists(-nums[i], nums, numsSize) && nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}
