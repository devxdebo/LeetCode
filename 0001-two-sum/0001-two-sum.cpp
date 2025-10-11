class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map <int,int> mpp;
        int N = nums.size();

        for(int i=0;i<N;i++){
            mpp.emplace(nums[i],i);
        }

        for(int i=0;i<N;i++){
            if(mpp.find(target-nums[i])!=mpp.end() && mpp[target-nums[i]]!=i){
                return {mpp[target-nums[i]],i};
            }
        }
        return {0,0};
    }
};