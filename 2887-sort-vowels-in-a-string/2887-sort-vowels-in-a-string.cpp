class Solution {
public:
    string sortVowels(string s) {

        multiset <char> ms;
        
        for(auto &i: s){
            if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U' || i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
                ms.emplace(i);
                i = ' ';
            }
        }

        auto it = ms.begin();

        for(auto &i:s){
            if(i==' '){
                i = *(it);
                it++;
            }
        }

        return s;
        
    }
};