class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int N = s.size();
        int st = 0;
        int end = st;

        int count = 0;
        int maxcount = 0;
        int m = 1;

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
                count = 0;
                container.clear();
                st = m;
                m++;
                end = st;
            }

        }

        return maxcount;
    }
};