class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {


        unordered_map<int,set<int>> mp;

        for(auto &seat : reservedSeats){
            mp[seat[0]].insert(seat[1]);
        }

        int ans = (n-mp.size())*2;


        for(auto &[row,seats] : mp){
            bool left = true;
            bool right = true;
            bool middle = true;
            if(seats.count(2) || seats.count(3) || seats.count(4) || seats.count(5)) left = false;

            if(seats.count(4) || seats.count(5) || seats.count(6) || seats.count(7)) middle = false;

            if(seats.count(6) || seats.count(7) || seats.count(8) || seats.count(9)) right = false;

            if(left && right){
                ans += 2;
            }
            else if(left || middle || right){
                ans += 1;
            }
        }


        return ans;
    }
};
