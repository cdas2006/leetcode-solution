class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // markup the min price
        int minprice = prices[0];
        // take profit and max of all profit
        int profit = 0, maxprofit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minprice) {
                minprice = prices[i];
            }

            else {
                profit = prices[i] - minprice;
                maxprofit = max(maxprofit, profit);
            }
        }
        return maxprofit;
    }
};