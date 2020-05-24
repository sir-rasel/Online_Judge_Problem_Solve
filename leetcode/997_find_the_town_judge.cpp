class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int>in(N+1,0),out(N+1,0);
        for(int i=0;i<trust.size();i++){
            out[trust[i][0]]++;
            in[trust[i][1]]++;
        }

        for(int i=1;i<=N;i++)
            if(in[i]==N-1 and out[i]==0)
                return i;

        return -1;
    }
};
