class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_Sum = 0;
        int sum = 0;
        int max_cust = -1;

        for(int i=0; i<accounts.size(); i++){
            sum = 0;
            for(int j=0; j<accounts[0].size(); j++){
                sum = sum + accounts[i][j];
            }
            max_Sum = max(max_Sum, sum);
        }

        return max_Sum;
    }
};
