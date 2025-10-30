class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int N = nums.size();
        int ans = N;

        int st = 0;
        int end = N-1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
        
    }
};