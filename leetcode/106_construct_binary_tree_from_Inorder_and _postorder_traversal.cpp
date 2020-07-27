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
    unordered_map<int,int> mp;
    TreeNode* buildTreeUtil(vector<int>& post, int& idx, const int& si, const int& ei) {
        if (si>ei) return NULL;
        TreeNode* root = new TreeNode(post[idx]);
        int mid = mp[post[idx]];
        idx--;
        root->right = buildTreeUtil(post, idx, mid+1, ei);
        root->left = buildTreeUtil(post, idx, si, mid-1);
        return root;
    }

    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        for(int i=0; i<in.size(); i++) mp[in[i]]=i;
        int idx=post.size()-1;
        return buildTreeUtil(post, idx, 0, in.size()-1);
    }
};
