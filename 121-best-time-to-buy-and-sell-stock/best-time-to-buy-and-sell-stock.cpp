class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_profit = prices[0];
        int max_profit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > min_profit) {
                max_profit = max(max_profit, prices[i] - min_profit);
            } else {
                min_profit = prices[i];
            }
        }
        return max_profit;
    }
};