class Solution {
public:
    int minimumPushes(string word) {
        
        int n = word.length();
        int push = 0;
        int cost = 0;

        unordered_map<char, int> freq;
        vector<int> cnt;

        for(int i=0; i<n; i++){
            freq[word[i]]++;
        }

        for(auto num: freq){
            cnt.push_back(num.second);
        }

        sort(cnt.begin(), cnt.end(), greater<int>());

        for(int i=0; i<cnt.size(); i++){
            cost = i/8 + 1;
            push += cnt[i]*cost;
        }

        return push;

    }
};
