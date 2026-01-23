class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count = nums.size();
        int sum = 0, total = 0;
        for (int i = 0; i <= count; i++)
        {
            sum = sum + i;
        }

        for (int i = 0; i< nums.size(); i++)
        {
            total = total + nums[i];
        }

        return sum - total;
    }
};
