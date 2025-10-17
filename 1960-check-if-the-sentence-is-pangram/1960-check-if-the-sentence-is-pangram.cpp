class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        vector <int> hash(26,0);

        for(auto i: sentence){
            hash[i-97]++;
        }

        for(int i:hash){
            if(i==0){
                return false;
            }
        }
        return true;
    }
};