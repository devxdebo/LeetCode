class Solution {
public:
    void helperfunction(vector <int> &nums,vector <vector <int>> &ans,int N,int index,vector <int> &temp){
        if(index == N){
            ans.emplace_back(temp);
            return;
        }
        helperfunction(nums,ans,N,index+1,temp);
        temp.push_back(nums[index]);
        helperfunction(nums,ans,N,index+1,temp);
        temp.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector <vector<int>> ans;
        int N = nums.size();
        vector <int> temp;
        helperfunction(nums,ans,N,0,temp);
        return ans;
        
    }
};