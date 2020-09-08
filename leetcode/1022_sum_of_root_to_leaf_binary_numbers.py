# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def __init__(self):
        self.sum = 0

    def dfs(self, root, bin_str = ""):
        if not root.left and not root.right:
            bin_str += str(root.val)
            self.sum += int(bin_str, 2)
            return

        if root.left:
            self.dfs(root.left, bin_str + str(root.val))
        if root.right:
            self.dfs(root.right, bin_str + str(root.val))
        
    def sumRootToLeaf(self, root: TreeNode) -> int:
        self.dfs(root)
        return self.sum