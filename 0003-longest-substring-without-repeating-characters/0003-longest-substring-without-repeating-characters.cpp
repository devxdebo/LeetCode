class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int N = s.size();
        int st = 0;
        int end = st;

        int count = 0;
        int maxcount = 0;
        int delcount = 0;

        unordered_set <char> container;

        while(st<=end && end!=N){
            
            if(container.find(s[end]) == container.end()){
                count++;
                if(count>maxcount){
                    maxcount = count;
                }
                container.emplace(s[end]);
                end++;
            }else{
                delcount = 0;
                while(st<=end){
                    if(s[st]!=s[end]){
                        container.erase(s[st]);
                        delcount++;
                        st++;
                    }else{
                        st++;
                        end++;
                        count -= delcount;
                        break;
                    }
                }
                
            }

        }

        return maxcount;
    }
};