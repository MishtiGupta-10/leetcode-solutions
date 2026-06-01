class Solution {
public:
    long long function_k(vector<int>& piles, int k){
        long long sum = 0;
        for(int i=0; i<piles.size(); i++){
            sum = sum + (((long long)piles[i]+k-1)/k);
        }

        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans;

        while(low<=high){
            int mid = low + (high-low)/2;
            long long f_k = function_k(piles, mid);

            if(f_k<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;


    }
};
