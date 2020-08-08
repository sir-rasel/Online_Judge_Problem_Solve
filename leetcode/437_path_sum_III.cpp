class Solution {
public:
    int DFS(TreeNode *root,int sum){
        return root ? (root->val==sum) + DFS(root->left,sum-root->val) + DFS(root->right,sum-root->val) : 0;
    }
    int pathSum(TreeNode* root, int sum) {
        return root ? DFS(root,sum) + pathSum(root->left,sum) + pathSum(root->right,sum) : 0;
    }
};
