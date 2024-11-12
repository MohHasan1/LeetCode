/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */
function treverse(node, depth) {
    if (!node) return depth;
    depth++;
    const h1 = treverse(node.left, depth)
    const h2 = treverse(node.right, depth)

    return Math.max(h1, h2)
}

function maxDepth(root: TreeNode | null): number {
    return treverse(root, 0)
};