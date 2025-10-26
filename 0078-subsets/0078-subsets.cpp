class Solution {
public:
    void recursion(vector <int> &nums,int i, vector <int> temp, vector <vector <int>> &ans){
        if(i==nums.size()){
            ans.emplace_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        recursion(nums,i+1,temp,ans);
        temp.pop_back();
        recursion(nums,i+1,temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> ans;
        vector <int> temp;
        recursion(nums,0,temp,ans);
        return ans;   
    }
};