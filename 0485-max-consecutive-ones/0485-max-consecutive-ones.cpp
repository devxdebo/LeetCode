class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = INT_MIN;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                int ptr = i;
                while(ptr<nums.size() && nums[ptr]==1){
                    ptr++;
                }
                count = ptr-i;
                maxcount = max(maxcount,count);
                i = ptr;
            }
        }
        if(maxcount == INT_MIN){
            maxcount = 0;
        }
        return maxcount;
    }
};