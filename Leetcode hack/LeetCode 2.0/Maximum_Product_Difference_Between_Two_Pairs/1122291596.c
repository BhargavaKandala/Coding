int maxProductDifference(int* nums, int numsSize){
        for(int i = 0; i < numsSize - 1 ; i++){
            for(int j = 0 ; j < numsSize-i-1; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }

        int maxpro = nums[numsSize-1] * nums[numsSize-2];
        int minpro = nums[0] * nums[1];
        return maxpro - minpro;
}