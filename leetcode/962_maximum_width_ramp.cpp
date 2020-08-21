class Solution {
public:
    int maxWidthRamp(vector<int>& A) {
        if(A.size() <= 1)
            return 0;

        vector<pair<int,int> >element;
        for(int i=0;i<A.size();i++)
            element.push_back({A[i],i});
        sort(element.begin(),element.end());

        int distance = 0;
        int minIndex = element[0].second;
        for(int i=1;i<element.size();i++){
            int index = element[i].second;

            if(index<minIndex) minIndex = index;
            else distance = max(distance, index - minIndex);
        }

        return distance;
    }
};
