class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int maxx=0;
        stack<pair<int,int> >bar;
        for(int i=0;i<heights.size();i++){
            maxx = max(maxx,heights[i]);
            if(bar.empty() or bar.top().first<heights[i])
                bar.push({heights[i],i});
            else{
                int pos;
                while(!bar.empty() and bar.top().first>=heights[i]){
                    pos = bar.top().second;
                    maxx = max(maxx,(i-pos)*bar.top().first);
                    bar.pop();
                }
                bar.push({heights[i],pos});
            }
        }
        return maxx;
    }
};
