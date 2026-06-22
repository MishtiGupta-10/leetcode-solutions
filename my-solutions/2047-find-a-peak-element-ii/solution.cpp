class Solution {
public:
    int rowMax(vector<vector<int>>& mat, int mid){
        int maxRow = 0;

        for(int i=1; i<mat.size(); i++){
            if(mat[i][mid] > mat[maxRow][mid]){
                maxRow = i;
            }
        }

        return maxRow;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();

        int low = 0;
        int high = cols-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            int maxRow = rowMax(mat, mid);

            int left = mid-1 >= 0 ? mat[maxRow][mid-1] : INT_MIN;
            int right = mid+1 < cols ? mat[maxRow][mid+1] : INT_MIN;

            if(mat[maxRow][mid] > left && mat[maxRow][mid] > right){
                return {maxRow, mid};
            }
            else if(left > mat[maxRow][mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return {-1, -1};
    }
};
