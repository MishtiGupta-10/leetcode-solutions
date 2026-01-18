class Solution {
public:
    void reverse (vector<int>& nums, int left, int right)
    {

        while(left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size()-1;

        if(k > nums.size())
            k = k%nums.size();

        if(nums.size() == 1 || nums.size() == 0 || k == 0)
        {
            return;
        }

        reverse (nums, 0, n);
        reverse (nums,0, k-1);
        reverse (nums, k, n);

        return;

    }
};
