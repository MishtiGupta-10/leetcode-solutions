class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int>freq;

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }

        if(k==n){
            return *max_element(nums.begin(), nums.end());
        }

        else if(k == 1){
            int maxEle = INT_MIN;
            for(int i=0; i<n; i++){
                if(freq[nums[i]]==1){
                    maxEle = max(maxEle, nums[i]);
                }
            }
            return maxEle == INT_MIN ? -1 : maxEle;
        }
            int maxEle = INT_MIN;
            if(freq[nums[0]] == 1){
                maxEle = max(maxEle, nums[0]);
            }
            if(freq[nums[n-1]]==1){
                maxEle = max(maxEle, nums[n-1]);
            }

            return maxEle == INT_MIN ? -1 : maxEle;


    }
};
