class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int rowsize = matrix.size();
        int colsize = matrix[0].size();

        if(rowsize==colsize){
            for(int i=0;i<rowsize;i++){
                for(int j=0;j<i;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            return matrix;
        }else{
            vector<vector<int>> vec(colsize,vector<int>(rowsize));
            for(int i=0;i<colsize;i++){
                for(int j=0;j<rowsize;j++){
                    vec[i][j] = matrix[j][i];
                }
            }
            return vec;
        }
    }
};