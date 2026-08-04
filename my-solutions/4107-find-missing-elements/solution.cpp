class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;

        for(auto num: nums){
            mp[num]++;
        }

        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());

        for(int i=min; i<=max; i++){
            if(mp.find(i) == mp.end()){
                ans.push_back(i);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
