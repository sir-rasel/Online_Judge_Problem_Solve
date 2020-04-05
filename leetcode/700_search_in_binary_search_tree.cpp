class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        if(val==root->val) return root;
        else if(val>root->val)
            root = searchBST(root->right, val);
        else if(val<root->val)
            root = searchBST(root->left, val);
        return root;
    }
};
