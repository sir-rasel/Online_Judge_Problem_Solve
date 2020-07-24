class Solution {
public:
    void fillpath(int node, vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>& path){
        if (node == graph.size() - 1)
            ans.push_back(path);
        for (int i = 0; i < graph[node].size(); ++i){
            path.push_back(graph[node][i]);
            fillpath(graph[node][i], graph, ans, path);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int> path;
        path.push_back(0);
        fillpath(0, graph, ans, path);
        return ans;
    }
};
