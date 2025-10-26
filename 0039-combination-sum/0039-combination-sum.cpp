class Solution {
public:
    void recursion(vector <int> &candidates,int target,int i,vector <vector <int>> &ans,vector <int> temp){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        recursion(candidates,target,i+1,ans,temp);
        temp.push_back(candidates[i]);
        recursion(candidates,target-candidates[i],i,ans,temp);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> temp;
        recursion(candidates,target,0,ans,temp);
        return ans;
    }
};