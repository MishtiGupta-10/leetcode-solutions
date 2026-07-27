class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int, int> sumCount;

        int count = 0, sum = 0;

        sumCount[0] = 1;

        for(int num: nums){
            sum += num;

            if(sumCount.find((sum-goal)) != sumCount.end()){
                count += sumCount[(sum-goal)];
            }

            sumCount[sum]++;
        }

        return count;
    }
};
