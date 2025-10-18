class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int len1 = num1.size();
        int len2 = num2.size();

        string ans = "";

        int len = min(len1,len2);

        int carry = 0;

        while(len!=0){

            
            int lastdigit1 = num1[len1-1] - '0';
            int lastdigit2 = num2[len2-1] - '0';

            int sum = lastdigit1 + lastdigit2 + carry;
            if(sum>9){
                carry = sum/10;
                sum %= 10;
            }else{
                carry = 0;
            }
            ans.push_back(sum + '0');
            len--;
            len1--;
            len2--;
        }

        int secondlen = max(len1,len2);
        while(secondlen!=0){
            if(num1.size()>num2.size()){
                int lastdigit = num1[secondlen-1] - '0';

                int sum = lastdigit + carry;
                if(sum>9){
                    carry = sum/10;
                    sum %= 10;
                }else{
                    carry = 0;
                }
                secondlen--;
                ans.push_back(sum + '0');
            }else{
                int lastdigit = num2[secondlen-1] - '0';

                int sum = lastdigit + carry;
                if(sum>9){
                    carry = sum/10;
                    sum %= 10;
                }else{
                    carry = 0;
                }
                secondlen--;
                ans.push_back(sum + '0');
            }
        }
        if(carry!=0){
            ans.push_back(carry + '0');
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};