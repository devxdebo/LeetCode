class Solution {
public:
    void recursion(int n,int o,int c,string temp,vector <string> &ans){
        
        if(o==n && c==n){
            ans.push_back(temp);
            return;
        }
        if(o>=c && o!=n){
            temp.push_back('(');
            recursion(n,o+1,c,temp,ans);
            temp.pop_back();
        }
        
        if(o>c && c!=n){
            temp.push_back(')');
            recursion(n,o,c+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp = "(";
        int o = 1;
        int c = 0;
        vector <string> ans;
        recursion(n,o,c,temp,ans);
        return ans;
    }
};