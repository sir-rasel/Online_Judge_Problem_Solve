class Solution {
public:
    float find_slope(float x1, float x2, float y1, float y2){
        float slope = (float) (y2-y1)/(x2-x1);
        return slope;
    }
    bool checkStraightLine(vector<vector<int>>& c) {
        float x1 = c[0][0], x2 = c[1][0];
        float y1 = c[0][1], y2 = c[1][1];
        float default_slope = find_slope(x1, x2, y1, y2);

        for(int i = 2; i < c.size(); i++){
            x1 = c[i-1][0], x2 = c[i][0];
            y1 = c[i-1][1], y2 = c[i][1];
            float curr_slope = find_slope(x1, x2, y1, y2);
            if(curr_slope != default_slope)
                return false;
        }
        return true;
    }
};
