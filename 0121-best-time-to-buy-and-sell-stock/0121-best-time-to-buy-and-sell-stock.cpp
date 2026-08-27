class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minPrice = prices[0];
      int maxProfite = 0;

      for(int i=1;i<prices.size();i++){
        int profite = prices[i] - minPrice;
        maxProfite = max(profite, maxProfite);
        minPrice = min(minPrice , prices[i]);
      }
      return maxProfite;
    }
};