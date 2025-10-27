class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int row = 0;
        int col = m-1;
        
        while(row!=n && col!=-1){
            if(mat[row][col]==x){
                return true;
            }else if(mat[row][col]>x){
                col--;
            }else{
                row++;
            }
        }
        return false;
    }
};