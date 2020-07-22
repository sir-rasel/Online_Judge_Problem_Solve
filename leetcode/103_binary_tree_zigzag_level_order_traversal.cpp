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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool rev = false;

        while(!q.empty()){
            int n = q.size();
            vector<int>temp(n);
            for(int i=0;i<n;i++){
                auto it = q.front();
                q.pop();

                int ind = rev? n-i-1 : i;
                temp[ind] = it->val;
                if(it->left) q.push(it->left);
                if(it->right) q.push(it->right);
            }

            ans.push_back(temp);
            rev = !rev;
        }
        return ans;
    }
};
