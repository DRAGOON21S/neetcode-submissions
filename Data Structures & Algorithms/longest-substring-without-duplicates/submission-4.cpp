class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> alpha(256,-1);
        int i=0;
        int j=0;
        int ans=0;
        for(;j<s.length();j++){
            char it = s[j];
            if(alpha[it]<i){
                alpha[it]=j;
            }
            else{
                // alpha.assign(256,0);
                ans=max(ans,j-i);
                i=alpha[it]+1;
                alpha[it]=j;
                // cout<<alpha[it];
                
            }
        }
        // cout << i;
        return max(ans,j-i);
    }
};
