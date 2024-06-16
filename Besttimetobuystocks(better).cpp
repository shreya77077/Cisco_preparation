class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0; // Handle the case where the input vector is empty
        }

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                int profit = prices[i] - minPrice;
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }

        return maxProfit; // Return the calculated maximum profit
    }
};

class Solution{
    public: 
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }

        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i =0; i<prices.size(); i++){
           if(prices[i] < minPrice ){
            minPrice = prices[i];
           } else {
            int profit = maxProfit - prices[i];
            if(prices[i] > maxProfit){
                maxProfit = profit;
            }
           }
        }

        return maxProfit;
    }
}