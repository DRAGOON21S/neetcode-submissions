class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right=nums.size()-1;
        int min = INT_MAX;
        while(left<=right){
            int mid = (left+right)/2;
            // cout<<nums[mid];
            if(nums[mid]<min){
                min=nums[mid];
                // cout<<min;
            }
            if(nums[mid]<nums[right]){
                right=mid-1;
            }
            else if(nums[left]<=nums[mid]){
                left=mid+1;
            }
            else if(left==right)
                break;
            // cout << left << right;
        }
        return min;
    }
};
