/**
 * @param {number[]} nums
 * @param {number} n
 * @param {number} left
 * @param {number} right
 * @return {number}
 */
var rangeSum = function(nums, n, left, right) {
    let arr = [];
    for(let i = 0; i < n; i++){
        let s = 0;
        for(let j = i; j < n ; j++){
            s += nums[j];
            arr.push(s);
        }
    }
    arr.sort((a,b) => a - b);
    const mod = 10 ** 9 + 7;
    let result = 0
    for(let k = left - 1; k < right ; k++){
        result = (result + arr[k]) % mod
    }
    return result;

};