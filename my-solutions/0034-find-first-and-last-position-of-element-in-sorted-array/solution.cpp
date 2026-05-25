class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);

        int n = nums.size();
        int low = 0;
        int high = n-1;

        int start = 0;
        int end = n-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid]==target){
                ans[0] = mid;
                high = mid - 1;
                
            }
            else if(nums[mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]==target){
                ans[1] = mid;
                start = mid+1;
            }
            else if(nums[mid] > target){
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }

        return ans;
    }
};
