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
//     int ans,n;
//     void inorderTraversal(TreeNode *root){
//         if(!root) return;
//         inorderTraversal(root->left);
//         if(--n==0){
//             ans = root->val;
//             return;
//         }
//         inorderTraversal(root->right);
//     }
public:
//     int kthSmallest(TreeNode* root, int k) {
//         n = k;
//         inorderTraversal(root);
//         return ans;
//     }

    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> nodes;
        TreeNode* top = root;
        int result = 0;
        while(!nodes.empty() || top){
            while(top){
                nodes.push(top);
                top = top->left;
            }
            top = nodes.top();
            nodes.pop();
            if(!(--k)){
                result = top->val; break;
            }
            top = top->right;
        }
        return result;
    }

};
