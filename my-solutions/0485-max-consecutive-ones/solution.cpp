class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        int max = 0;
        vector<int> sum;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                
                count = count + 1;
                if(count > maxcount)
                    maxcount++;
            }
            else 
            {
                count = 0;
            }
        }

        return maxcount;

    }
};
