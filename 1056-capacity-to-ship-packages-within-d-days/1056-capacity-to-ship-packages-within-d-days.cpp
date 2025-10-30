class Solution {
public:
    bool ispossible(int maxweight,vector <int> &nums,int k){

        long long sum = 0;
        int numofdays = 1;

        for(int i=0;i<nums.size();i++){
            
            sum += nums[i];
            if(sum > maxweight){
                numofdays++;
                if(numofdays>k){
                    return false;
                }
                sum = nums[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& nums, int k) {
        
        int st = *(max_element(nums.begin(),nums.end()));
        int end = accumulate(nums.begin(),nums.end(),0);
        int ans;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(ispossible(mid,nums,k)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};