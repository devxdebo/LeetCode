class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int N = mat.size();
        int endsize = N-1;
        int sum = 0;

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j){
                    sum += mat[i][j];
                }
            }
            sum += mat[i][endsize];
            endsize--;
        }

        if(N%2!=0){
            sum -= mat[N/2][N/2];
        }

        return sum;
        
    }
};