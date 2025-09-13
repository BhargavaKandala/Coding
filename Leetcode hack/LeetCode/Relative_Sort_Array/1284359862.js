/**
 * @param {number[]} arr1
 * @param {number[]} arr2
 * @return {number[]}
 */
var relativeSortArray = function(arr1, arr2) {
    const count = Array(1001).fill(0);
    arr1.forEach(num => {
        count[num]++;
    });

    const ans = [];
    arr2.forEach(num => {
        while (count[num] > 0) {
            ans.push(num);
            count[num]--;
        }
    });

    for (let i = 0; i < count.length; i++) {
        while (count[i] > 0) {
            ans.push(i);
            count[i]--;
        }
    }
    return ans;
};