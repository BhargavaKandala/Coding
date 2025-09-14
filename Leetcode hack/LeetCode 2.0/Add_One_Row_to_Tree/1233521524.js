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
 * @param {number} val
 * @param {number} depth
 * @return {TreeNode}
 */
var addOneRow = function(root, val, depth) {
    const inorder = (node, height = 1, child = '') => {
        if(!node) {
            return height === depth ? new TreeNode(val) : node;
        }

        if(height === depth){
            const newNode = new TreeNode(val);
            if(child === 'L' || child === ''){
                newNode.left = node;
            }
            else if(child === 'R') {
                newNode.right = node;
            }
            return newNode;
        }
        else if (height < depth) {
            node.left = inorder(node.left, height + 1, 'L');
            node.right = inorder(node.right, height + 1, 'R');
            return node;
        }

        return node;
    }
    return inorder(root);
};