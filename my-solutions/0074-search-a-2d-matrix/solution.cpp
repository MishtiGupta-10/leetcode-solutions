class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int low_r = 0;
        int high_r = rows-1;

        while(low_r <= high_r){
            
            int mid_r = low_r + (high_r - low_r)/2;

            int low_c = 0;
            int high_c = cols-1;

            if(matrix[mid_r][low_c] <= target && matrix[mid_r][high_c] >= target){
                while(low_c <= high_c){
                    int mid_c = low_c + (high_c -low_c)/2;

                        if(matrix[mid_r][mid_c] == target){
                            return true;
                        }
                        else if(matrix[mid_r][mid_c] < target){
                            low_c = mid_c + 1;
                        }
                        else{
                            high_c = mid_c -1;
                        }

                }

                return false;
            }
            else if(matrix[mid_r][high_c] < target){
                low_r = mid_r+1;
            }
            else{
                high_r = mid_r-1;
            }
        }


        return false;
    }
};
