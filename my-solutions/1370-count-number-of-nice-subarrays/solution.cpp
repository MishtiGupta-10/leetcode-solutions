class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;

        int result = 0;
        int oddCount = 0;

        freq[0] = 1;

        for(int num: nums){
            if(num % 2 == 1) oddCount++;

            if(freq.find((oddCount-k)) != freq.end()){
                result += freq[(oddCount-k)];
            }

            freq[oddCount]++;
        }

        return result;
    }
};
