class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int N = nums.size();

        while(i<=j && j!=N){
            
            nums[i] = nums[j];

            while(j!=N && nums[j] == nums[i]){
                j++;
            }
            i++;
        }
        return i;
    }
};