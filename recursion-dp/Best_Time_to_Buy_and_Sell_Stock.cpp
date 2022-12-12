class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int maxProfit = 0;
        int profit;

        while (r < prices.size()){
            if (prices[l] < prices[r]){
                profit = prices[r] - prices[l];
                maxProfit = max(maxProfit, profit);
            }
            else l = r;
            r++;
        }
        return maxProfit;
    }
};
