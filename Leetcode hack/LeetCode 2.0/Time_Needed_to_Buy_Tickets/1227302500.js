/**
 * @param {number[]} tickets
 * @param {number} k
 * @return {number}
 */
var timeRequiredToBuy = function(tickets, k) {
    let result = 0;
    for(let i = 0; i < tickets.length; i++){
        if(tickets[i] < tickets[k]){
            result += tickets[i];
        } else if(i <= k && tickets[i] >= tickets[k]){
            result += tickets[k];
        } else {
            result += tickets[k] - 1;
        }

    }
    return result;
};