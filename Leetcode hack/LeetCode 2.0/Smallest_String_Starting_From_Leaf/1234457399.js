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
 * @return {string}
 */
var smallestFromLeaf = function(root) {
    let a = "a".charCodeAt(), string
    let ans = String.fromCharCode(255)
    let stack = [[root, ""]]
    while(stack.length > 0) {
        [root, string] = stack.pop()
        string = String.fromCharCode(root.val + a) + string
        if(root.left)
            stack.push([root.left, string])
        if(root.right)
            stack.push([root.right, string])
        else if(!root.left && string < ans)
            ans = string
    }
    return ans
};