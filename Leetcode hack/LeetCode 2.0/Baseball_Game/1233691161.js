/**
 * @param {string[]} operations
 * @return {number}
 */
var calPoints = function(operations) {
    let stack = [];
    for(let i = 0; i < operations.length; i++){
        let len = stack.length;
        switch(operations[i]){
            case "+" :
                stack.push( stack[len-1]+stack[len-2] );
                break;
            case "D" :
                stack.push(stack[len - 1] * 2);
                break;
            case "C" : 
                stack.pop()
                break;
            default :
                    stack.push(parseInt(operations[i]))
        }
    }
    return stack.length ? stack.reduce((acc, cur) => acc + cur) : 0;
}; 