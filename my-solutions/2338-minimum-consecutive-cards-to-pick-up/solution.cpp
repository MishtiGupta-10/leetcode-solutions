class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n = cards.size();

        unordered_map<int, int> mp;

        int r=0, minCards = n+1;
        while(r<n){
            int card;
            if(mp.find(cards[r]) != mp.end()){
                card = r-mp[cards[r]] + 1;
                minCards = min(minCards, card);
            }

            mp[cards[r]] = r;
            r++;

        }
            if(minCards == n+1) return -1;

        return minCards;
    }
};
