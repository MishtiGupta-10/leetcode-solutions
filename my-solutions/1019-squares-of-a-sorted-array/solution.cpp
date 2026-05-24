class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squared;
        
        for(int i=0; i<nums.size(); i++){
            squared.push_back(nums[i]*nums[i]);
        }
        
        sort(squared.begin(), squared.end());
        
        return squared;
    }
};
