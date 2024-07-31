class Solution {
public:

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i=0; i<matrix.size(); i++){
            for(auto j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] == target) {
                    return true;
                }
                
            }
        }
        return false;
    }
};
    




