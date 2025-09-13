/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let start = -1, end = -1;
    for(let i = 0; i < nums.length; i++){
        if(target == nums[i]){
            start = i
            break
        }
    }
    for(let i = 0; i < nums.length; i++){
        if(target == nums[i]){
           end = i;
        }
    }
    return [start, end]; 
};