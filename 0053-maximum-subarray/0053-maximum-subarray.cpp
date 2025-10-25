class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxsum = INT_MIN;
        int sum = 0;
        int N = nums.size();

        for(int i=0;i<N;i++){

            sum += nums[i];

            maxsum = max(sum,maxsum);

            if(sum<0){
                sum = 0;
            }
        }

        return maxsum;
    }
};