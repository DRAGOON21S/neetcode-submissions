class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        
        vector<char> ans;
        for(char it : s){
            if(alphaNum(it)){
                ans.push_back(tolower(it));
            }
        }
        for (char c : ans) {
            cout << c;
        }
        int right = ans.size()-1;
        while (left<right){
            if(ans[left]!=ans[right]){
                return false;
            }
            left++;
            right--;
        } 
        return true;    
    }
    bool alphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
