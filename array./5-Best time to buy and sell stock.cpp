int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int n = prices.size();
    int min = prices[0];
    int max_profit=0;

    for(int i = 1;i<n;i++){
        int cost = prices[i]-min;
         max_profit = max(max_profit,cost);

        if(min>prices[i])min= prices[i];
    }

    return max_profit;
}
