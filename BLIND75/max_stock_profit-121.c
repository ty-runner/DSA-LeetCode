int maxProfit(int* prices, int pricesSize) {
    int result = prices[0];
    int small_index = 0;
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < prices[small_index]) {
            small_index = i;
            result = prices[i];
        } else {
            int currentProfit = prices[i] - result;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    return maxProfit;
}
