class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<int, int> freq;

        int left = 0;

        int max_freq =0;

        int max_len = 0;

        for(int right = 0; right < s.length(); right++){
            freq[s[right]]++;

            max_freq = max(max_freq, freq[s[right]]);

            while((right-left+1)-max_freq > k){
                freq[s[left]]--;

                left++;
            }

            max_len = max((right-left+1), max_len);
        }

        return max_len;
    }
};
