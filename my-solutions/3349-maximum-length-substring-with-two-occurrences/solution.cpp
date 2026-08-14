class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int maxLen = 0;

        unordered_map<int, int> freq;
        for(int right=0; right < s.size(); right++){
            freq[s[right]]++;
            while(freq[s[right]] > 2){
                freq[s[left]]--;
                left++;
            }
            maxLen = max(maxLen, right-left+1);
        }

        return maxLen;
    }
};
