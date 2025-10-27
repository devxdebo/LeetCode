class Solution {
public:
    void recursion(vector <int> &nums,vector <int> temp,unordered_set <int> s,vector <vector<int>> &ans){
        if(temp.size()==nums.size()){
            ans.emplace_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                continue;
            }
            s.emplace(nums[i]);
            temp.emplace_back(nums[i]);
            recursion(nums,temp,s,ans);
            temp.pop_back();
            s.erase(nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector<int>> ans;
        vector <int> temp;
        unordered_set <int> s;
        recursion(nums,temp,s,ans);
        return ans;
    }
};