/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int ans = 0;
    int height(TreeNode *root){
        if(!root) return 0;
        int l = height(root->left);
        int r = height(root->right);

        ans = max(ans,l+r);
        return max(l,r)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};
