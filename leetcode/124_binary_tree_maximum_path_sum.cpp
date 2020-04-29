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
    int helper( TreeNode* node, int &maxSum ) {
        if( !node ) return 0;
        int left = 0, right = 0;
        if( node->left )  left = helper( node->left, maxSum );
        if( node->right ) right = helper( node->right, maxSum );

        // node+left or node+right or node
        int leftOrRightOrNode = max( node->val, node->val + max( left, right ) );
        // set maxSum to max of maxSum, node+left+right, node+left, node+right, node
        maxSum = max( maxSum, max( node->val + left + right, leftOrRightOrNode ) );
        return leftOrRightOrNode;
    }

public:
    int maxPathSum( TreeNode* root ) {
        int maxSum = INT_MIN;
        helper( root, maxSum );
        return maxSum;
    }
};
