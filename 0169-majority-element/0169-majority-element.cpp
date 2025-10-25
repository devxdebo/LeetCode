class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int element = nums[0];
        int numoftimes = 1;
        int N = nums.size();

        for(int i=1;i<N;i++){
            if(nums[i]==element){
                numoftimes++;
            }else{
                numoftimes--;
                if(numoftimes==0){
                    element = nums[i];
                    numoftimes = 1;
                }
            }
        }
        return element;
    }
};