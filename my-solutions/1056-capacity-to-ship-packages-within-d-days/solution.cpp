class Solution {
public:
    int required_days(vector<int>& weights, int mid){
        int sum=0;
        int days = 1;
        for(int i=0; i< weights.size(); i++){
            sum += weights[i];
            if(sum > mid){
                days++;
                sum = weights[i];
            }
        }

        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int result;

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high){
            int mid = (low + high)/2;
            
            int req_days = required_days(weights, mid);

            if(req_days <= days){
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
