class Solution {
public:
    int diagonalSum(vector<vector<int>>& nums) {
        
        int N = nums[0].size();
        long long sum = 0;

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j){
                    sum += nums[i][j];
                }
            }
        }

        int x = 0;
        int y = N-1;

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==x && j==y){
                    sum += nums[i][j];
                    x++;
                    y--;
                }
            }
        }

        if(N%2==0){
            return sum;
        }else{
            return sum-nums[N/2][N/2];
        }
    }
};