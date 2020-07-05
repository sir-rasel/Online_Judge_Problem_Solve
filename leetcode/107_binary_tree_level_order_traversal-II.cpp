class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     vector<vector<int> > ans;
     vector<int> temp;
     queue<TreeNode*> q;
     if(root==NULL)
         return ans;
     q.push(root);
     q.push(NULL);
     while(!q.empty()){
         TreeNode* t=q.front();
         q.pop();
         if(t==NULL){
             ans.push_back(temp);
             temp.clear();
             if(q.empty()){
                reverse(ans.begin(),ans.end());
                return ans;
             }
             else{
                 q.push(NULL);
             }
            continue;
         }
         temp.push_back(t->val);
         if(t->left!=NULL)
             q.push(t->left);
         if(t->right!=NULL)
             q.push(t->right);
     }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
