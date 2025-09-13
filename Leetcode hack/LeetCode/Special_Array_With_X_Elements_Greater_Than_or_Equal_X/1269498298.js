/**
 * @param {number[]} nums
 * @return {number}
 */
var specialArray = function(nums) {
    nums.sort((a,b) => a - b);
    for(let i = 1,j = 0; i <= nums.length; i++){
        while(nums[j] < i) j++;
        if(i === nums.length - j) return i;
    }
    return -1;
};