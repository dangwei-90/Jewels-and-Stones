class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 可以当天卖出后，当天买入
        int nMax = 0;
        for(int n = 1; n < prices.size(); n++)
        {
            if(prices[n] > prices[n-1])
            {
                nMax = nMax + prices[n] - prices[n-1];
            }
        }
        
        return nMax;
    }
};
