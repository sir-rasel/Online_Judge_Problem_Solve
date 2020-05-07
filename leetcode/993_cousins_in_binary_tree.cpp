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
    map<int,pair<int,int> >depth;
    void dfs(TreeNode *r,int parent,int d=0){
        depth[r->val]={d,parent};
        if(r->left) dfs(r->left,r->val,d+1);
        if(r->right) dfs(r->right,r->val,d+1);
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,0);
        return (depth[x].first==depth[y].first and depth[x].second!=depth[y].second);
    }
};
