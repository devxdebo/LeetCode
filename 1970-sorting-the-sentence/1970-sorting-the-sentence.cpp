class Solution {
public:
    string sortSentence(string s) {

        int st = 0;
        int end = -1;
        map <int,string> mpp;

        for(int i=0;i<s.size();i++){
            if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)){
                end++;
            }else if(s[i]>=48 && s[i]<=57){
                string temp = "";
                for(int i = st;i<=end;i++){
                    temp.push_back(s[i]);
                }
                mpp[s[i]] = temp;
            }else{
                st = i+1;
                end = i;
            }
        }
        s = "";
        for(auto i:mpp){
            s += i.second;
            s += " ";
        }
        s.pop_back();
        return s;
    }
};