class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxPro = 0;
        int i=0;
        while(i<prices.size()){
            minPrice = min(minPrice,prices[i]);
            maxPro = max(maxPro,prices[i]-minPrice);
            i++;
        }
        return maxPro;
    }
};