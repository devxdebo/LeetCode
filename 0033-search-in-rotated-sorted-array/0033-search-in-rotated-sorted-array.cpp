class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int N = nums.size();
        int st = 0;
        int end = N-1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>=nums[0]){

                if(target<nums[mid] && target>=nums[0]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else{

                if(target>nums[mid] && target<=nums[N-1]){
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
        }

        return -1;
    }
};