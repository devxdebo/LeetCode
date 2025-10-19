class Solution {
public:
    string intToRoman(int num) {

        string ans = "";

        
        int requiredmapresult;
        int count = 0;

        unordered_map<int, char> mpp = {
            {1, 'I'},
            {5, 'V'},
            {10, 'X'},
            {50, 'L'},
            {100, 'C'},
            {500, 'D'},
            {1000, 'M'}
        };


        while(num!=0){

            int lengthofnum = log10(num)+1;
            int firstdigit = num/(int)pow(10,lengthofnum-1);

            if(firstdigit !=4 && firstdigit !=9){

                if(firstdigit>=5 && lengthofnum<=3){
                    requiredmapresult = 5*pow(10,lengthofnum-1);

                }else{
                    requiredmapresult = 1*pow(10,lengthofnum-1);
                }

                char temp = mpp[requiredmapresult];
                ans.push_back(temp);
                num = num-requiredmapresult;
            }else{
                if(firstdigit == 4){
                    if(lengthofnum == 1){
                        ans.push_back('I');
                        ans.push_back('V');
                        num = 0;
                    }else if(lengthofnum == 2){
                        ans.push_back('X');
                        ans.push_back('L');
                        num %= 10;
                    }else{
                        ans.push_back('C');
                        ans.push_back('D');
                        num %= 100;
                    }
                }else{
                    if(lengthofnum == 1){
                        ans.push_back('I');
                        ans.push_back('X');
                        num = 0;
                    }else if(lengthofnum == 2){
                        ans.push_back('X');
                        ans.push_back('C');
                        num %= 10;
                    }else{
                        ans.push_back('C');
                        ans.push_back('M');
                        num %= 100;
                    }

                }
            }
            
        }

        return ans;

        
        
    }
};