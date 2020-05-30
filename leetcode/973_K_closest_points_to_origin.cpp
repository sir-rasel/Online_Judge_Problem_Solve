class Solution {
    struct point{
        int x,y;
        int dis;
        bool operator<(point a){
            return (dis)<(a.dis);
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<point>a;
        for(auto it:points){
            point t;
            t.x = it[0];
            t.y = it[1];
            t.dis = (t.x*t.x)+(t.y*t.y);
            a.push_back(t);
        }

        sort(a.begin(),a.end());
        vector<vector<int> >res;
        for(int i=0;i<K;i++)
            res.push_back({a[i].x,a[i].y});
        return res;
    }
};
