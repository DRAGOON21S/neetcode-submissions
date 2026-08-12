class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto it : nums){
            if(s.count(it)){
                return true;
            }
            else{
                s.insert(it);
            }
        }
        return false;
    }
};