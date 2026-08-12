class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right= nums.size()-1;

        while(left<right){
            int m = (left+right)/2;
            if(nums[m]<nums[right]){
                right=m;
            }
            else{
                left=m+1;
            }
        }
        right= nums.size()-1;
        if(nums[left]<=target && target<=nums[right]){
            ;
        }
        else{
            
            right=left-1;
            left=0;
        }
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left]<=target && target < nums[mid]){
                right=mid-1;
                cout << "q";
            }
            
            else{
                left=mid+1;
                cout << left;
            }
            // cout << mid;
        }
        return -1;
    }
};
