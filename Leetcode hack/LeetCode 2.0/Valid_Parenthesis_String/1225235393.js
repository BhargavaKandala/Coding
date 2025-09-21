/**
 * @param {string} s
 * @return {boolean}
 */
var checkValidString = function(s) {
    let leftmin = 0;
    let leftmax = 0;

    for(c of s){
        if(c === "("){
            leftmin += 1;
            leftmax += 1;
        }else if(c === ")"){
            leftmin -= 1;
            leftmax -= 1;
        }else {
            leftmin -= 1;
            leftmax += 1;
        }
         if(leftmax < 0)return false;
         if(leftmin < 0)leftmin = 0;
    }
    return leftmin === 0;
};