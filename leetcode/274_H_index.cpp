class Solution {
public:
    int hIndex(vector<int>& cit) {
        priority_queue<int, vector<int>, greater<int>> pq(begin(cit), end(cit));
        while (!pq.empty() && pq.top() < pq.size())
            pq.pop();
        return pq.size();
    }
};
