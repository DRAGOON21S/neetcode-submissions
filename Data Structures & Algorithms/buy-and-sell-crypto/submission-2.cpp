class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int ans=0;
        while(r<prices.size()){
            if((prices[r]-prices[l])>ans)
                ans=prices[r]-prices[l];
            if(prices[l]>prices[r]){
                l=r;
                r++;
            }
            else
                r++;
        }
        return ans;
    }
};
