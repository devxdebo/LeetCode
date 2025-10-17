class Solution {
public:
    int longestPalindrome(string s) {
        
        vector <int> hashl(26,0);
        vector <int> hashu(26,0);

        int ans = 0;
        int odd = 0;

        for(auto i:s){
            if(i>=97 && i<=122){
                hashl[i-97]++;
            }else{
                hashu[i-65]++;
            }
        }

        for(int i=0;i<26;i++){
            if(hashl[i]>0 && hashl[i]%2==0){
                ans += hashl[i];
            }else if(hashl[i]>1 && hashl[i]%2!=0){
                ans+= hashl[i]-1;
                odd = 1;
            }else if(hashl[i]==1){
                odd = 1;
            }
            if(hashu[i]>0 && hashu[i]%2==0){
                ans += hashu[i];
            }else if(hashu[i]>1 && hashu[i]%2!=0){
                ans+= hashu[i]-1;
                odd = 1;
            }else if(hashu[i]==1){
                odd = 1;
            }
        }
        return ans + odd;
    }
};