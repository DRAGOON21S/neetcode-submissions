class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> ans1;
        bool q=true;
        if(nums.size()==1)
            return nums[0];
        else if(nums.size()==2)
            return max(nums[0],nums[1]);
        ans1.push_back(nums[0]);
        ans1.push_back(nums[1]);
        ans1.push_back(nums[2]+nums[0]);
        for(int i = 3;i<nums.size(); i++){
            ans1.push_back(max(nums[i]+ans1[i-2],nums[i]+ans1[i-3]));
        }
        for(auto an:ans1){cout<<an<<"\t";}
        return max(ans1[nums.size()-1],ans1[nums.size()-2]);
    }
};
