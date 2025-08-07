class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=0,profit=0;
        for(int j=0;j<prices.size();j++)
        {
            while(prices[i]>prices[j])
            {
                i++;
            }
            profit=max(profit,prices[j]-prices[i]);
        }
        return profit;
    }
};