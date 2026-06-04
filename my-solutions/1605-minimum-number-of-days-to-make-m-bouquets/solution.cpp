class Solution {
public:

    bool possible(vector<int>& bloomDay, int m, int k, int day){
        int cnt = 0;
        int bouquet = 0;

        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                cnt++;
                if(cnt == k){
                    bouquet++;
                    cnt = 0;
                }
            }
            else{
                cnt=0;
            }
        }

        return bouquet >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int result;

        if(1LL*m*k > n) return -1;   // if total flowers are more than the available flowers

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low <= high){
            int mid = low + (high - low)/2;

            if(possible(bloomDay, m, k, mid)){
                result = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return result;

    }
};
