class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector <int> ans;

        int rowstart = 0;
        int rowend = matrix.size()-1;

        int colstart = 0;
        int colend = matrix[0].size()-1;

        while(rowstart<=rowend && colstart<=colend){

            for(int j=colstart;j<=colend;j++){
                ans.push_back(matrix[rowstart][j]);
            }
            rowstart++;
            for(int i=rowstart;i<=rowend;i++){
                ans.push_back(matrix[i][colend]);
            }
            colend--;
            
            if(rowstart<=rowend){
                for(int j=colend;j>=colstart;j--){
                    ans.push_back(matrix[rowend][j]);
                }
                rowend--;
            }
            if (colstart <= colend) {
                for (int i = rowend; i >= rowstart; i--)
                    ans.push_back(matrix[i][colstart]);
                colstart++;
            }
        }
        return ans;
    }
};