class Solution {
public:
    void helper(int o,int c,int n,string &temp,vector <string> &ans){
        if(c==o && o==n){
            ans.emplace_back(temp);
            return;
        }
        if(c>o){
            return;
        }
        if(o<n){
            temp.push_back('(');
            helper(o+1,c,n,temp,ans);
            temp.pop_back();
        }
        if(c<n){
            temp.push_back(')');
            helper(o,c+1,n,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        
        string temp = "(";
        vector <string> ans;
        helper(1,0,n,temp,ans);
        return ans;
    }
};