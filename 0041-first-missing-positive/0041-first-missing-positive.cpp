class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int N = nums.size();
        int ans = N+1;

        for(int i=0;i<N;i++){
            while(nums[i]!=i+1){
                if(nums[i]<=0 || nums[i]>N || nums[i]==nums[nums[i]-1])
                    break;
                else
                    swap(nums[i],nums[nums[i]-1]);
            }
        }

        for(int i=0;i<N;i++){
            if(nums[i]!=i+1){
                ans = i+1;
                break;
            }
        }

        return ans;
    }
};