class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        int rowst = 0;
        int rowend = m-1;

        while(rowst<=rowend){

            int rowmid = rowst + (rowend-rowst)/2;

            if(target>=matrix[rowmid][0] && target<=matrix[rowmid][n-1]){

                int colst = 0;
                int colend = n-1;

                while(colst<=colend){

                    int colmid = colst + (colend-colst)/2;

                    if(matrix[rowmid][colmid]==target){
                        return true;
                    }else if(matrix[rowmid][colmid]>target){
                        colend = colmid-1;
                    }else{
                        colst = colmid+1;
                    }
                }
                return false;
            }else if(target<matrix[rowmid][0]){
                rowend = rowmid - 1;
            }else if(target>matrix[rowmid][n-1]){
                rowst = rowmid + 1;
            }
        }

        return false;
    }
};