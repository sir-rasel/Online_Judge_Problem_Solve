/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int ans = 0;

    void visit(TreeNode* root, int num){
        if(!root){
            ans+=num;
            return;
        }
        if(!root->left and !root->right){
            ans+=(10*num+root->val);
            return;
        }
        if(root->left) visit(root->left,10*num+root->val);
        if(root->right) visit(root->right,10*num+root->val);
    }
public:
    int sumNumbers(TreeNode* root) {
        visit(root,0);
        return ans;
    }
};
