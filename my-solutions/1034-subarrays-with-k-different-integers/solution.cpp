class Solution {
public:
    int atMostK(vector<int>& nums, int k){
        int n = nums.size();
        unordered_map<int, int> freq;
        int count = 0;

        int left = 0;
        for(int right = 0; right < n; right++){
            freq[nums[right]]++;
            while(freq.size()>k){
                freq[nums[left]]--;
                if(freq[nums[left]] == 0) freq.erase(nums[left]);

                left++;
            }
            if(freq.size()<=k){
                count += right - left + 1;
            }
        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int count = atMostK(nums, k) - atMostK(nums, k-1);
        return count;

    }
};
