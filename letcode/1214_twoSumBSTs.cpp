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
    vector<int>arr1,arr2;
public:
    void traverse(TreeNode *t,vector<int>&arr){
        if(t==NULL) return;
        arr.push_back(t->val);
        traverse(t->left,arr);
        traverse(t->right,arr);
    }

    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        bool ans=false;
        traverse(root1,arr1);
        traverse(root2,arr2);
        for(int i=0;i<arr1.size() and !ans;i++)
            for(int j=0;j<arr2.size() and !ans;j++)
                if(arr1[i]+arr2[j]==target) ans=true;

        return ans;
    }
};
