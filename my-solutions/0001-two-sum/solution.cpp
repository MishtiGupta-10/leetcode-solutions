class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> idx;

        for(int i=0; i<n; i++){
            idx.push_back({nums[i], i});
        }

        int left = 0;
        int right = n-1;

        sort(idx.begin(), idx.end());

        while(left < right){
            int sum = idx[left].first + idx[right].first;

            if(sum == target) return {idx[left].second, idx[right].second};

            else if(sum < target){
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};
