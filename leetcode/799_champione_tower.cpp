class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double g[100][100];

        for(int i=0;i<=query_row;i++)
            for(int j=0;j<=query_glass;j++)
                g[i][j] = 0;

        g[0][0] = (double)poured;

        for(int i=0;i<query_row;i++){
            for(int j=0;j<=i;j++){
                double p = ((double)g[i][j] - 1)/2;
                if(p > 0){
                    g[i+1][j] += p;
                    g[i+1][j+1] += p;
                }
            }
        }

        return min(1.0,g[query_row][query_glass]);
    }
};
