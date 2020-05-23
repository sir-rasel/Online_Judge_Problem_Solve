class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int aSize = A.size();
        int bSize = B.size();

        int i=0,j=0;
        vector<vector<int> >ans;
        while(i<aSize and j<bSize){
            int a = max(A[i][0],B[j][0]) , b = min(A[i][1],B[j][1]);

            if(a<=b) ans.push_back({a,b});

            if(A[i][1]<B[j][1]) i++;
            else j++;
        }
        return ans;
    }
};
