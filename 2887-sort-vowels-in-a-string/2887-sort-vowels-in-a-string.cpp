class Solution {
public:
    string sortVowels(string s) {

        vector <int> hashu(26,0);
        vector <int> hashl(26,0);
        
        for(auto &i:s){
            if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
                hashu[i-65]++;
                i = ' ';
            }else if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
                hashl[i-97]++;
                i = ' ';
            }
        }

        int ptr = 0;

        for(int i=0;i<26;i++){
            while(hashu[i]!=0){
                if(s[ptr]== ' '){
                    s[ptr] = char(i+65);
                    hashu[i]--;
                }
                ptr++;
            }
        }
        for(int i=0;i<26;i++){
            while(hashl[i]!=0){
                if(s[ptr]== ' '){
                    s[ptr] = char(i+97);
                    hashl[i]--;
                }
                ptr++;
            }
        }

        return s;

    }
};