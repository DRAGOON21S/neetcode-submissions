class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int num:nums){
            int q = abs(num)-1;
            if(nums[q]<0){
                return q+1;
            }
            nums[q]*=-1;
        }
        return -1;
    }
};
