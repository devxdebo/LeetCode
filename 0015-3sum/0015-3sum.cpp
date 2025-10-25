class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int N = nums.size();

        vector <vector<int>> ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<N-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int j = i+1;
            int k = N-1;

            while(j<k){

                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j>i+1 && nums[j]==nums[j-1] && j!=k){
                        j++;
                    }
                }else if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                    while(k<N-1 && nums[k]==nums[k+1] && k!=j){
                        k--;
                    }
                }else{
                    j++;
                    while(j>i+1 && nums[j]==nums[j-1] && j!=k){
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};