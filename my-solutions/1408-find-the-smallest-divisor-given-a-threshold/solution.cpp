class Solution {
public:

    bool threshold_reached(vector<int>& nums, int threshold, int div){
        long long result = 0;

        for(int i=0; i<nums.size(); i++){
            result += ((nums[i] + div - 1)/div);
        }

        if(result <= threshold) return true;
        else return false;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int div;

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low<=high){
            int mid = (low + high)/2;

            if(threshold_reached(nums, threshold, mid)){
                div = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }

        }

        return div;
    }
};
