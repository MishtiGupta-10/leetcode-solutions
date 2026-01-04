class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> v = nums;
        sort(v.begin(), v.end());
        int i;
        int count;

        for(int x=0; x <= nums.size()-1; x++)
        {
            count = 1;
            for (int i = 0; i < nums.size(); i++)
            {
                if(nums[i] != v[((i+x)%v.size())])
                {
                    count = 0;
                    break;
                }
            }

            if (count == 1)
                    return true;

        }

            return false;

    }
};
