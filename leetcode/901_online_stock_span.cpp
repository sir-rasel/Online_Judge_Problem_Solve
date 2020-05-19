class StockSpanner {
    stack<pair<int,int> >span;
public:
    StockSpanner() {
        span.push({1e6,0});
    }

    int next(int price) {
        int res = 1;
        while(price>=span.top().first){
            res += span.top().second;
            span.pop();
        }
        span.push({price,res});
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
