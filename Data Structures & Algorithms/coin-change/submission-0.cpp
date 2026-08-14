class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, amount+1);
        dp[0]=0;
        for(int i=1;i<amount+1;i++){
            for(int a : coins){
                if(i>=a)
                dp[i]=min((dp[i-a]+1),dp[i]);
            }
        }
        if(dp[amount]>amount){
            return -1;
        }
        return dp[amount];
    }
};
