class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i = 0;

        while(i!=matrix.size()){
            int st = 0;
            int end = matrix[0].size()-1;
            
            if(target>matrix[i][end]){
                i++;
            }else{
                while(st<=end){

                    int mid = st + (end-st)/2;
                    if(matrix[i][mid]==target){
                        return true;
                    }else if(matrix[i][mid]>target){
                        end = mid-1;
                    }else{
                        st = mid+1;
                    }
                }

                return false;
            }
        }
        return false;
    }
};