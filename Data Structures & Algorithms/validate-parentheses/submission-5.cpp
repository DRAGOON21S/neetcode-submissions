class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        unordered_map<char,char> close = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for ( char it : s){
            if(close.count(it)){
                if(!ans.empty() && ans.top()==close[it]){
                    ans.pop();
                }
                else{
                    return false;
                }
            }
            else{
                ans.push(it);
            }
        }
        return ans.empty();
    }
};
