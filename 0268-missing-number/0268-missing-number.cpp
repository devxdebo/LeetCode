class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int N = nums.size();
        int ans = N;

        for(int i=0;i<N;i++){
            while(nums[i]!=i){
                if(nums[i]==N){
                    break;
                }else{
                    swap(nums[i],nums[nums[i]]);
                }
            }
        }

        for(int i=0;i<N;i++){
            if(nums[i]!=i){
                ans = i;
                break;
            }
        }

        return ans;
    }
};