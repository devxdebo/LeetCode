class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int N = mat.size();
        
        int sum = 0;

        for(int i=0;i<N;i++){
             sum += mat[i][i];
        }
        
        int i = 0;
        int endsize = N-1;

        while(i<=N-1 && endsize>=0){
            sum += mat[i][endsize];
            endsize--;
            i++;
        }

        if(N%2!=0){
            sum -= mat[N/2][N/2];
        }

        return sum;
        
    }
};