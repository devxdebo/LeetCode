class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int N = nums.size();
        int st = 0;
        int end = N-1;
        int firstpos = -1;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]==target){
                firstpos = mid;
                end = mid-1;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }

        if(firstpos == -1)
            return {-1,-1};
        else{

            int lastpos = -1;
            st = 0;
            end = N-1;

            while(st<=end){

                int mid = st + (end-st)/2;

                if(nums[mid]==target){
                    lastpos = mid;
                    st = mid+1;
                }else if(nums[mid]>target){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }

            return {firstpos,lastpos};
        }
    }
};