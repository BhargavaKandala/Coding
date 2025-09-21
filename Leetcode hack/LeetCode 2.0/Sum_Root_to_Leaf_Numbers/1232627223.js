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
var sumNumbers = function(root) {
    let total = 0;

    let dfs = (node, sum) => {
        if(!node.left && !node.right) total += sum * 10 + node.val;
        else {
            if(node.left) dfs(node.left, sum * 10 + node.val);
            if(node.right) dfs(node.right, sum * 10 + node.val);
        }
    }
    dfs(root, 0);
    return total
};