class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int colnum = matrix[0].size()-1;
        int rownum = matrix.size()-1;
        int xi = 0;
        int yi = colnum;

        while(xi<=rownum && yi>=0){
            if(matrix[xi][yi]==target){
                return true;
            }else if(matrix[xi][yi]>target){
                yi--;
            }else{
                xi++;
            }
        }
        return false;
    }
};