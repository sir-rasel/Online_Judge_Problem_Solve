class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        if(prices.size() == 0)
            return 0;

        vector<int> profit(prices.size());
        vector<int> rprofit(prices.size());

        int mini = INT_MAX, maxprofit = 0;
        for(int i = 0; i < prices.size(); i++){
            mini = min(mini, prices[i]);
            maxprofit = max(maxprofit, prices[i] - mini);
            profit[i] = maxprofit;
        }

        int maxi = INT_MIN;
        maxprofit = 0;
        for(int i = prices.size() - 1; i >= 0; i--){
            maxi = max(maxi, prices[i]);
            maxprofit = max(maxprofit, maxi - prices[i]);
            rprofit[i] = maxprofit;
        }

        //do 1 transcation
        int res = profit.back();
		//do 2 transcation
        for(int i = 0; i + 1 < prices.size(); i++)
            res = max(res, profit[i] + rprofit[i + 1]);

        return res;
    }
};
