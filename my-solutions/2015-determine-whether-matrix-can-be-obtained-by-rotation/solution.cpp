class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int r=0; r<n; r++){
            int i=0;
            int j=n-1;
            while(j>i){
                swap(matrix[r][i], matrix[r][j]);
                i++;
                j--;
            }
        }
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0; i<4; i++){
            if(mat == target)
                return true;
            rotate (mat);
        }
        return false;
        
    }
};
