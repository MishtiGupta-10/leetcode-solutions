class Solution {
public:

    int countPartitions(vector<int>& nums, int maxSum){
        long long subarraySum = 0;
        int partition = 1;
        for(int i=0; i<nums.size(); i++){
            if(subarraySum+nums[i] <= maxSum){
                subarraySum += nums[i];
            }
            else{
                partition++;
                subarraySum = nums[i];
            }
        }

        return partition;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low<=high){
            int mid = (low+high)/2;

            if(countPartitions(nums, mid) > k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        return low;

        return low;
    }
};
