/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */

let moves;
var countmoves = function (root){
    if(!root) return 0;

var leftcoins = countmoves(root.left);
var rightcoins = countmoves(root.right);

moves += Math.abs(leftcoins) + Math.abs(rightcoins);

return root.val + leftcoins + rightcoins - 1;
}



var distributeCoins = function(root) {
    moves = 0;
    countmoves(root)
    return moves;
};