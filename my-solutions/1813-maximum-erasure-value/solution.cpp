class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int, int> mp;

        int l=0, r=0, maxScore = 0;

        while(r<n){
            if(mp.find(nums[r]) != mp.end(nums[r])){
                l = max(mp[nums[r]]+1, l);
            }

            int score = 0;

            for(int i=l; i<=r; i++){
                score = score + nums[i];
            }

            maxScore = max(maxScore, score);

            mp[nums[r]] = r;
            r++;
        }

        return maxScore;
    }
};
