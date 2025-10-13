class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int N = nums.size();

        sort(nums.begin(),nums.end());

        vector <vector <int>> ans;

        for(int i=0;i<N-3;i++){

            if(i>0 && nums[i]==nums[i-1])
                continue;

            for(int j=i+1;j<N-2;j++){

                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int m = j+1;
                int n = N-1;

                while(m<n){

                    long long sum = (long long)nums[i]+nums[j]+nums[m]+nums[n];

                    if(sum>target){
                        n--;
                    }else if(sum<target){
                        m++;
                    }else{
                        ans.push_back({nums[i],nums[j],nums[m],nums[n]});
                        m++;

                        while(nums[m]==nums[m-1] && m<n){
                            m++;
                        }
                    }
                }
            }
        }

        return ans;
    }
};