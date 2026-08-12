class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy=prices[0];
        int maxP=0;

        for (auto it : prices){
            maxP=max(maxP, it-minBuy);
            minBuy=min(minBuy, it);
        }
        return maxP;
    }
};
