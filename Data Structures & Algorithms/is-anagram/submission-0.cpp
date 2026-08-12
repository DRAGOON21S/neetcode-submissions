class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count (26,0);
        if(s.size()!=t.size()){
            return false;
        }
        for(int it=0;it<s.size();it++ ){
            count[s[it]-'a']++;
            count[t[it]-'a']--;
        }
        for(auto it : count){
            if(it!=0)
                return false; 
        }
        return true;
    }
};
