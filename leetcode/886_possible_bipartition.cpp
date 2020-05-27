class Solution {
    vector<bool>visit;
    vector<int>color;

    bool isBipartite(vector<int>edge[],int node,int col){
        color[node] = col;
        visit[node] = true;

        bool ans = true;
        for(int i=0;i<edge[node].size();i++){
            if(!visit[edge[node][i]] and color[edge[node][i]] == -1)
                ans &= isBipartite(edge,edge[node][i],!col);
            else if(visit[edge[node][i]] and color[edge[node][i]] == col)
                return false;
        }
        return ans;
    }
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<int>edge[N+2];
        visit.resize(N+5,false);
        color.resize(N+5,-1);

        for(int i=0;i<dislikes.size();i++){
            edge[dislikes[i][0]].push_back(dislikes[i][1]);
            edge[dislikes[i][1]].push_back(dislikes[i][0]);
        }

        bool res = true;
        for(int i=1;i<=N;i++)
            if(!visit[i])
                res &= isBipartite(edge,i,1);
        return res;
    }
};
