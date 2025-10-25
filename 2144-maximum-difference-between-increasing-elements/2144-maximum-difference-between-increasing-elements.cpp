class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int maxdiff = INT_MIN;
        int N = nums.size();

        vector <int> suffix(N,0);
        int maxelement = nums[N-1];

        for(int i=N-2;i>=0;i--){
            suffix[i] = maxelement;
            if(nums[i]>maxelement){
                maxelement = nums[i];
            }
        }

        for(int i=0;i<N-1;i++){
            if(suffix[i]-nums[i]>maxdiff){
                maxdiff = suffix[i]-nums[i];
            }
        }

        if(maxdiff<=0){
            return -1;
        }else{
            return maxdiff;
        }

    }
};