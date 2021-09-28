class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max, low = prices[0], sum = 0;
        for (int i=0; i<prices.size()-1; i++) {
            if (prices[i] > prices[i+1]) {
                max = prices[i];
                sum = sum + (max - low);
                low = prices[i+1];
            } 
        }
        if(low < prices[prices.size() - 1]) sum = sum + (prices[prices.size() - 1]- low);
        return sum;
    }
};
