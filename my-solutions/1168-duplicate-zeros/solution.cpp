class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros = 0;

        for(int z = 0; z < n; z++){
            if(arr[z] == 0) zeros++;
        }

        int i = n-1;
        int j = n+zeros-1;

        while(i>=0 &&  i<j){
            if(j < n){
                arr[j] = arr[i];
            }
            if(arr[i] == 0){
                j--;
                if(j < n) arr[j] = arr[i];
            }
            j--;
            i--;
        }
    }
};
