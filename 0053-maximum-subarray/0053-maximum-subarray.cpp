class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int N = nums.size();
        int sum = 0;
        int maxsum = INT_MIN;

        for(int i=0;i<N;i++){

            sum += nums[i];
            if(sum>maxsum)
                maxsum = sum;
            if(sum<0)
                sum = 0;
        }
        
        return maxsum;
    }
};