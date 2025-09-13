/**
 * @param {string[]} arr
 * @param {number} k
 * @return {string}
 */
var kthDistinct = function(arr, k) {
    const counter = {}

    arr.forEach(v =>{
        counter[v] = (counter[v] || 0) + 1;
    })

    for(let i = 0; i < arr.length; i++){
        if(counter[arr[i]] === 1){
            k -= 1
            if(k === 0){
                return arr[i];
            }
        }
    }
    return ''
};