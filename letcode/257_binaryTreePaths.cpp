class Solution {
private:
    string pathToString(vector<int> path) {
        string stringPath = to_string(path[0]);
        for (int i = 1; i < path.size(); i++) {
            stringPath += "->" + to_string(path[i]);
        }
        return stringPath;
    }

    void helper(vector<string>& ans, vector<int>& path, TreeNode* curr) {
        if (curr == nullptr) return;
        path.push_back(curr->val);
        if (!curr->left && !curr->right) ans.push_back(pathToString(path));
        else {
            helper(ans, path, curr->left);
            helper(ans, path, curr->right);
        }
        path.pop_back();
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path;
        vector<string> ans;
        helper(ans, path, root);
        return ans;
    }
};
